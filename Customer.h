#pragma once
#include<bits/stdc++.h>
#include"Market.h"
#include "Seller.h"
using namespace std;
class Customer
{
    int ID;
    string name, address, phoneNum, email;
    double totalCost;
public:

    map<int, list<pair<Node*,int>>> cart;
    // constructor & destructor
    Customer(int, string, string, string, string);
    ~Customer();
    // get & set
    void setCustomerID(int id);
    void setCustomerName(string name);
    void setCustomerAddress(string address);
    void setCustomerPhone(string phoneNum);
    void setCustomerEmail(string email);
    int getCustomerID();
    string getCustomerName();
    string getCustomerAddress();
    string getCustomerPhone();
    string getCustomerEmail();

 
    void addtocart(int,Product, Market);
    void removefcart(Product);
    void confirmPayment( Market);
    void checkout(Market);
    void buySingleProduct(int,Product prod, Market mar);
    list<pair<Node*, int>> getCart();
    void SaveDataInFileCustomer(string path);
    void LoadDataFromFileCustomer(string path, Market mar);
};
