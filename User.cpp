#include "User.h"
#include <tchar.h>
#include<string>
void User::createSocket() {
	if (cheak.second)
	{
		this->userClient = INVALID_SOCKET;
		this->userClient = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		struct timeval tv;
		tv.tv_sec = 1; // 5 seconds timeout
		tv.tv_usec = 0;
		setsockopt(this->userClient, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof(tv));
		if (this->userClient == INVALID_SOCKET)
		{
			cheak.first = "Error at socket(): ";
			WSACleanup();
			cheak.second = false;
		}
		else {
			cheak.first = "socket() is OK! ";
			cheak.second = true;
		}
	}
}

void User::createService() {
	if (cheak.second)
	{
		this->userService.sin_family = AF_INET;
		this->userService.sin_port = htons(this->port);
		InetPton(AF_INET, _T("192.168.1.2"), &this->userService.sin_addr.s_addr);
		if (connect(this->userClient, (SOCKADDR*)&this->userService, sizeof(this->userService)) == SOCKET_ERROR) {
			cheak.first = "Client: connect() - Faild to connect.";
			cheak.second = false;
			WSACleanup();
		}
		else {
			cheak.first = "Client: connect() is OK. \nClient: Can start sending and receving data...";
			cheak.second = true;
		}
	}
}

void User::sendMessage(string message) {
	if (this->cheak.second)
	{
		message.push_back('\0');
		send(this->userClient, message.c_str(), message.size(), 0);
	}
}
void User::recvMessage() {
	//"$buy-1234-adfhas"
	//"$sell-1234-adfhas"
	//"$edit-1234-adfhas"
	//"$delete-1234-adfhas"

	string received_data;
	char buffer[1024];
	while (true) {
		int n = recv(this->userClient, buffer, sizeof(buffer), 0);
		if (n > 0) {
			// Data received, add it to received_data
			received_data.append(buffer, n);

			// Check if received_data contains delimiter
			size_t pos = received_data.find('\0');
			received_data = received_data.substr(0, received_data.find('\0'));

			//this->instructions.push_back(received_data);
			this->data = received_data;
			n = 0;
		}
		else if (n == 0) {
			// Connection closed by server
			// ...
			break;
		}
		else {
			// Error occurred, handle it
			// ...
			break;
		}
		cout << 1 << " ";
		//cout << this->data << endl;
		//cout << this->data.size() << endl;
		/*for (int i = 0; i < this->instructions.size(); i++)
		{
			cout << this->instructions[i] << " " << endl;
		}*/
	}

}
User::User(string username) {
	this->username = username;
	this->port = 55555;
	this->wVersionRequested = MAKEWORD(2, 2);
	this->wsaerr = WSAStartup(this->wVersionRequested, &this->wsaData);
	this->userClient;
	if (this->wsaerr != 0) {
		cheak.first = "The Winsock dll not found! ";
		cheak.second = false;
	}
	else {
		cheak.first = "The Winsock dll not found! ";
		cheak.second = true;
	}
	createSocket();
	createService();
	sendMessage(this->username);
	this->recvMessage();
	cout << this->data << endl;
}