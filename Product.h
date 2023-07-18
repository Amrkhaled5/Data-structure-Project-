#pragma once
#include<bits/stdc++.h>
#include"Rating.h"
using namespace std;
class Product
{
    int ID, sellerID;
    string name, category;
    int AvailableQuantity;
    int soldQuantity;
    int inCartQuantity;
    int ordered;
    double price;
public:
    // constructor & destructor
    Product(int, string, string, int, int, double,int,int);
    Product();
    ~Product();

	vector<Rating>customerRates;

	float productRate;
	void addRate(string, float);
	void addRate(string, float, string);

    //  get & set //
    void setID(int id);
    void setSellerID(int sellerID);
    void setQuantity(int quantity);
    void setName(string name);
    void setCategory(string categroy);
    void setPrice(double price);
    void setOrdered(int ordered);
    void setinCartQuantity(int InCQ);
    void setSoldQuantity(int SQ);
    void setinCart(int i); //to set the value by my value
    void setsold(int i);

    int getID();
    int getSellerID();
    string getName();
    string getCategory();
    int getAalQuantity();
    double getPrice();
    int getOrdered();
    int getinCartQuantity();
    int getSoldQuantity();
    ///      other   ////



};

