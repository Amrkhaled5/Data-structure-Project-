//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <winsock2.h>
#include <tchar.h>
#include <WS2tcpip.h>
#include <string>
#include <array>
#include <utility>
#include <map>
#include<fstream>


using namespace std;

char* buffer;
string allData;
void readFromFile(string s) {
	vector<string>data;
	ifstream infile(s);
	string line;
	while (getline(infile, line)) {
		data.push_back(line);
		allData += "--" + line;
	}
	//size_t buffer_size = 0;
	//for (const std::string& str : data) {
	//	buffer_size += str.length() + 1; // +1 for null terminator
	//}
	//buffer = new char[buffer_size];
	//char* current = buffer;
	//for (const std::string& str : data) {
	//	cout << str << endl;
	//	strcpy_s(current, str.length() + 1, str.c_str());
	//	current += str.length() + 1;
	//}
	cout << endl;
	allData.push_back('\0');
}

int test() {
	SOCKET serverSocket;
	int port = 55555;
	WSADATA wsaData;
	int wsaerr;
	WORD wVersionRequested = MAKEWORD(2, 2);
	wsaerr = WSAStartup(wVersionRequested, &wsaData);
	if (wsaerr != 0) {
		cout << "The Winsock dll not found" << endl;
		return 0;
	}
	else {
		cout << "The Winsock dll found!" << endl;
		cout << "The status " << wsaData.szSystemStatus << endl;
	}
	serverSocket = INVALID_SOCKET;
	serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (serverSocket == INVALID_SOCKET) {
		cout << "Error at socket()" << WSAGetLastError() << endl;
		WSACleanup();
		return 0;
	}
	else {
		cout << "socket() is Ok! " << endl;
	}
	sockaddr_in service;
	service.sin_family = AF_INET;

	InetPton(AF_INET, _T("192.168.1.2"), &service.sin_addr.s_addr);
	service.sin_port = htons(port);
	if (bind(serverSocket, (SOCKADDR*)&service, sizeof(service)) == SOCKET_ERROR) {
		cout << "bind() faild" << WSAGetLastError() << endl;
		closesocket(serverSocket);
		WSACleanup();
		return 0;
	}
	else {
		cout << "bind() is Ok ! " << endl;
	}
	if (listen(serverSocket, 1) == SOCKET_ERROR) {
		cout << "listen() Error lisitening on socket " << WSAGetLastError() << endl;
	}
	else {
		cout << "listen() is OK, I'm waiting for connection " << endl;
	}

	// set up file descriptor sets for select()
	fd_set readfds;
	FD_ZERO(&readfds);
	FD_SET(serverSocket, &readfds);
	int max_fd = serverSocket;

	// vector to hold client sockets
	std::vector<pair<int, char*>> client_sockets;
	map<int, int>m;

	char confirmation[200] = "Thanks for message!";
	while (true) {
		char buffer[1024];
		// wait for incoming data or connections
		fd_set temp_fds = readfds;
		int num_ready = select(max_fd + 1, &temp_fds, NULL, NULL, NULL);

		if (num_ready == -1) {
			// error occurred
			std::cerr << "select() error" << std::endl;
			break;
		}

		if (FD_ISSET(serverSocket, &temp_fds)) {
			// new connection, accept it
			int client_socket = accept(serverSocket, NULL, NULL);
			FD_SET(client_socket, &readfds);
			if (client_socket > max_fd) {
				max_fd = client_socket;
			}
			if (client_sockets.empty()) {
				int bytecount = recv(client_socket, buffer, sizeof(buffer), 0);
				client_sockets.push_back(make_pair(client_socket, buffer));
				//send(client_sockets[client_sockets.size() - 1].first, "Connection done\n", 30, 0);
				std::cout << "\nNew client connected - Name: " << client_sockets[client_sockets.size() - 1].second << std::endl;
			}
			else if (m[client_sockets[client_sockets.size() - 1].first] <= 0) {
				m[client_sockets[client_sockets.size() - 1].first]++;
				char buffer[1024];
				int bytecount = recv(client_socket, buffer, sizeof(buffer), 0);
				client_sockets.push_back(make_pair(client_socket, buffer));
				//send(client_sockets[client_sockets.size() - 1].first, "Connection done\n", 30, 0);
				std::cout << "\nNew client connected - Name: " << client_sockets[client_sockets.size() - 1].second << std::endl;
			}
		}

		for (int i = 0; i < client_sockets.size(); i++) {
			if (FD_ISSET(client_sockets[i].first, &temp_fds)) {
				// data received from client
				char buffer[1024];
				int bytes_read = recv(client_sockets[i].first, buffer, sizeof(buffer), 0);
				if (bytes_read <= 0) {
					// client closed the connection
					FD_CLR(client_sockets[i].first, &readfds);
					m[client_sockets[i].first] = 0;
					std::cout << "Client disconnected - Name: " << client_sockets[i].second << std::endl;
					closesocket(client_sockets[i].first);
					client_sockets.erase(client_sockets.begin() + i);
					break;
				}
				else {
					// process received data
					std::cout << "\nmessage: " << buffer << std::endl;
					// send response back to client
					//send(client_sockets[i].first, "Message recived!\n", 30, 0);
				}
			}
		}

	}

	// clean up
	for (int i = 0; i < client_sockets.size(); i++) {
		closesocket(client_sockets[i].first);
	}
	closesocket(serverSocket);
	return 0;
}

int main() {
	//cout << buffer << endl;
	return test();
}