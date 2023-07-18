#pragma once
#include<bits/stdc++.h>
#include"Market.h"
using namespace std;
class Seller
{

    int ID;
    string name, email;
    list<Node*>listOfProducts;
public:
    // constructor & destructor
    Seller(int, string name, string email);
    ~Seller();
    // get & set
    void setSellerID(int id);
    void setSellerName(string name);
    void setSellerEmail(string email);
    int getSellerID();
    string getSellerName();
    string getSellerEmail();
    // Other
    void addProduct(Product, Market);
    void editProduct(Product, Market);
    void deleteProduct(Product, Market);
    list<Node*> getlist();
    void LoadDataFromFileSeller(string path, Market mar);
};
