#pragma once
#include "User.h"
#include "Customer.h"
#include"Seller.h"
class Person :public Customer, public Seller
{
public:
	Person(string Name, string Mail, string Password, int Id, string Phone, string address);
	User* user;
	int choseCusomerOrSeller=0;
};

