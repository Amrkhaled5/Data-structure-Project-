#pragma once
#include<WS2tcpip.h>
#include<winsock2.h>
#include<bits/stdc++.h>
#include<iostream>
#include<tchar.h>
#include <cstring>
#include <windows.h>
#include <string>
#include<vector>
#include <random>

//#pragma comment(lib, "ws2_32.lib")

using namespace std;
using namespace System::Net::Sockets;
class User
{

	string username;
	SOCKET userClient;

	int port;
	WSADATA wsaData;
	int wsaerr;
	WORD wVersionRequested;
	sockaddr_in userService{};
	pair <string, bool>cheak;
	void createSocket();
	void createService();
public:
	//vector<string>instructions;
	string data;
	User(string);
	void sendMessage(string);
	void recvMessage();
};

