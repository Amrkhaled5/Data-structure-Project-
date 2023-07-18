#include "Admin.h"
#include"Searching.h";
#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
#include<Windows.h>
#include<chrono>
#include<thread>
#include <string>
using namespace std;

extern Admin admin;

string Admin::getAddres(string mail) {
	return m[mail].address;
}
string Admin::getPhone(string mail) {
	return m[mail].phoneno;
}

int Admin::getId(string mail) {
	return m[mail].id;
}

string Admin::getname(string mail) {
	return m[mail].name;
}

bool Admin::UserLogin(string mail, string enteredPassword)
{
	
	if (m[mail].password== enteredPassword) {
		return 1;
	}
	else {
		return 0;
	}
}
//for registration
void Admin::RegistrationPage()
{
	LoadDataFromFile("PersonData.text");
}
//for Display
int  Admin::HomePage()
{
	int choice;
	cout << "############ HELLO #############" << endl;
	cout << "PRESS 1 FOR REGISTRATION " << endl;
	cout << "PRESS 2 FOR LOGIN" << endl;
	cin >> choice;
	return choice;
}
void Admin::PrintData()
{
	map<string, Info>::iterator it = m.begin();
	cout << "############ USER DATA ############ " << endl;
	for (; it != m.end(); it++)
	{
		cout << "EMAIL : " << it->first << endl;
		cout << "PASSWORD : " << it->second.password << endl;
		cout << "ADDRESS : " << it->second.address << endl;
		cout << "ID : " << it->second.id << endl;
		cout << "PHONE NUMBER : " << it->second.phoneno << endl;
		cout << "####################################" << endl;

	}
}
void Admin::DeleteItem(string mail)
{
	if (EmailIsAvailable(mail))// if there is no email like this in map
	{
		cout << "THERE IS NO EMAIL TO REMOVE" << endl;
	}
	else
	{
		m.erase(mail);
		cout << "EMAIL \" " << mail << " \" WAS REMOVED SUCCESSFULLY" << endl;
	}
}
void Admin::ClearAllData()
{
	m.clear();
}
//########################################
void Admin::InsertData(string mail, string name, int id, string address, string phoneNo, string pass, string verify)
{
	m.insert({ mail,{id,phoneNo,address,pass,name} });
}
//#############################################
// PASSWORD HANDLLING
bool Admin::HandlePassword(string pass)
{
	if (!PasswordLengthCheck(pass) || !PasswordShapeCheck(pass))
	{
		return 0;
	}
	else {
		return 1;
	}
}
string Admin::DisplayPassword()
{
	string pass = "";
	char ch;
	int count = 0;
	ch = _getch();
	while (ch != 13)
	{
		if (ch != 8)
		{
			pass.push_back(ch);
			cout << '*';
			count++;
		}
		else//user enter a backspace
		{
			pass.pop_back();
			count--;
			system("cls");
			for (int i = 0; i < count; i++)
				cout << '*';
		}
		ch = _getch();
	}
	return pass;
}
bool Admin::PasswordLengthCheck(string s)
{
	if (s.length() >= 8 && s.length() <= 13)//in region
		return true;
	else
		return false;

}
bool Admin::ContainsLowerCase(string str)
{
	bool flag = false;
	for (int i = 0; i < str.length(); i++)
	{
		if (int(str[i]) >= 97 && int(str[i]) <= 122)
		{
			flag = true;
		}
	}
	return flag;
}
bool Admin::ContainsUpperCase(string str)
{
	bool flag = false;
	for (int i = 0; i < str.length(); i++)
	{
		if (int(str[i]) >= 65 && int(str[i]) <= 90)
		{
			flag = true;
		}
	}
	return flag;
}
bool Admin::ContainsNumber(string str)
{
	bool flag = false;
	for (int i = 0; i < str.length(); i++)
	{
		if (int(str[i]) >= 48 && int(str[i]) <= 57)
		{
			flag = true;
		}
	}
	return flag;
}
bool Admin::ContainsSymbol(string str)
{
	//# $ % & * @
	bool flag = false;
	for (int i = 0; i < str.length(); i++)
	{
		if ((int(str[i]) >= 35 && int(str[i]) <= 38) || ((int)str[i] == 42) || ((int)str[i] == 64))
		{
			flag = true;
		}
	}
	return flag;
}
bool Admin::PasswordShapeCheck(string pass)
{

	bool containsUpper = false, containsLower = false, containsSymbol = false, containsNumber = false;
	if (ContainsUpperCase(pass)) {
		containsUpper = true;

	}
	if (ContainsLowerCase(pass)) {
		containsLower = true;

	}
	if (ContainsSymbol(pass)) {
		containsSymbol = true;

	}
	if (ContainsNumber(pass)) {
		containsNumber = true;

	}
	if (containsUpper && containsLower && containsSymbol && containsNumber) {

		return true;
	}
	else {

		return false;
	}

}
bool Admin::VerifyPass(string s1, string s2)
{
	if (s1 == s2)
		return true;
	else
		return false;
}
//#############################################
// EMAIL HANDLING 
bool Admin::HandleEmail(string mail)
{
	if (!EmailIsAvailable(mail) || (AtSignIndex(mail) + 1 == (mail.length() - 4)) || !(IsDotComFound(mail)) || !(IsAtSignFound(mail)))
	{
		return 0;
	}
	else {
		return 1;
	}
}
bool Admin::EmailIsAvailable(string mail)
{
	if (m.count(mail) == 0)
	{
		return true;
	}
	return false;
}
bool Admin::IsAtSignFound(string str)
{
	bool flag = false;
	for (int i = 0; i < str.length(); i++)
	{
		if (int(str[i]) == 64)
			flag = true;
	}

	return flag;
}
bool Admin::IsDotComFound(string str)
{
	string data = "";
	for (int i = (str.length() - 4); i < str.length(); i++)
		data += str[i];
	if (data == ".com")
		return true;
	else
		return false;
}
int Admin::AtSignIndex(string str)
{
	//there is @
	int index = -1;
	if (!IsAtSignFound(str))
		return index;
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '@')
				index = i;
			else
				continue;
		}

		return index;
	}

}
//#############################################
void Admin::saveDataInFile(string path) {
	ofstream PersonData(path);
	map<string, Info>::iterator it = m.begin();
	for (; it != m.end(); it++)
	{
		string Name = it->second.name;
		for (int i = 0; i < Name.size(); i++) {
			if (Name[i] == ' ') {
				Name[i] = '*';
			}
		}
		it->second.name = Name;

		string add = it->second.address;
		for (int i = 0; i < add.size(); i++) {
			if (add[i] == ' ') {
				add[i] = '*';
			}
		}
		it->second.address = add;
		PersonData << it->first << " " << it->second.password << " " << it->second.id << " "
			<< it->second.phoneno << " " << it->second.address <<" "<<it->second.name << endl;
	}
	PersonData.close();
}

void Admin::LoadDataFromFile(string path) {
	ifstream PersonData(path);
	int Id;
	string mail, password, address, PhoneNumber,name;
	while (PersonData >> mail >> password >> Id >> PhoneNumber >> address>>name) {

		for (int i = 0; i < name.size(); i++) {
			if (name[i] == '*') {
				name[i] = ' ';
			}
		}

		for (int i = 0; i < address.size(); i++) {
			if (address[i] == '*') {
				address[i] = ' ';
			}
		}

		m.insert({ mail,{Id,PhoneNumber,address,password,name} });
		Searching::fillMap(to_string(Id));
	}
	PersonData.close();
}

string Admin::getPass(string email) {
	if (EmailIsAvailable(email)) {
		return "-1";
	}
	else {
		return m[email].password;
	}
}