
#pragma once
#include "User.h"
#include<bits/stdc++.h>
#include<iostream>
#include<msclr\marshal_cppstd.h>
using namespace std;
class Admin
{
	struct Info
	{
		int id = -1;
		string phoneno = "empty";
		string  address = "empty";
		string password = "empty";
		string name = "empty";
	};
	map<string, Info > m;
public:

	User* user;

	string getAddres(string mail);
	string getPhone(string mail);
	string getname(string mail);
	string getPass(string mail);
	int getId(string mail);


	int HomePage();
	void RegistrationPage();
	void LoginPage();
	//password handling functions
	bool HandlePassword(string pass);
	string DisplayPassword();
	bool PasswordLengthCheck(string s);
	bool VerifyPass(string s1, string s2);
	bool ContainsUpperCase(string str);
	bool ContainsLowerCase(string str);
	bool ContainsNumber(string str);
	bool ContainsSymbol(string str);
	bool PasswordShapeCheck(string pass);
	//email handling functions
	bool HandleEmail(string mail);
	bool IsAtSignFound(string str);
	bool IsDotComFound(string str);
	int AtSignIndex(string str);
	// registration functions{
	bool EmailIsAvailable(string mail);
	void InsertData(string mail, string name, int id, string address, string phoneNo, string pass, string verifyPass);
	//LOGIN functions
	bool UserLogin(string mail, string enteredPassword);
	// delete and print functions 
	void PrintData();
	void DeleteItem(string mail);
	void ClearAllData();
	void saveDataInFile(string path);
	void LoadDataFromFile(string path);
};

