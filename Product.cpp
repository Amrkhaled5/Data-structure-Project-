#include "Product.h"

using namespace std;

// constructor & destructor
Product::Product(int id, string name, string category, int quantity, int sellerID, double price,int SQ,int InCQ)
{
    this->ID = id;
    this->name = name;
    this->category = category;
    this->AvailableQuantity = quantity;
    this->sellerID = sellerID;
    this->price = price;
    this->inCartQuantity = InCQ;
    this->soldQuantity = SQ;
}
Product::Product() {

}
Product::~Product() {

}

///////    get & set   ///////////
void Product::setID(int id)
{
    this->ID = id;
}
void Product::setSellerID(int sellerID)
{
    this->sellerID = sellerID;
}
void Product::setQuantity(int quantity)
{
    this->AvailableQuantity = quantity;
}
void Product::setName(string name)
{
    this->name = name;
}
void Product::setCategory(string categroy)
{
    this->category = categroy;
}
void Product::setPrice(double price)
{
    this->price = price;
}
void Product::setOrdered(int ordered) {
    this->ordered = ordered;
}
void Product::setSoldQuantity(int SQ) {
    this->soldQuantity = getSoldQuantity()+ SQ;
}
void Product::setinCartQuantity(int InCQ) {
    this->inCartQuantity = getinCartQuantity()+ InCQ;
}
void Product::setinCart(int i) {
    this->inCartQuantity = i;
}
void Product::setsold(int i) {
    this->soldQuantity = i;
}
int Product::getID()
{
    return this->ID;
}
int Product::getSellerID()
{
    return this->sellerID;
}
string Product::getName()
{
    return this->name;
}
string Product::getCategory()
{
    return this->category;
}
int Product::getAalQuantity()
{
    return this->AvailableQuantity;
}
double Product::getPrice()
{
    return this->price;
}
int Product::getOrdered() {
    return this->ordered;
}
int Product::getinCartQuantity() {
    return this->inCartQuantity;
}
int Product::getSoldQuantity() {
    return this->soldQuantity;
}

void Product::addRate(string customerName, float rate) {
	Rating newRate(customerName, rate);
	this->productRate = Rating::addRateToVector(this->customerRates, newRate);
}

void Product::addRate(string customerName, float rate, string comment) {
    if (comment == "") {
        comment = " ";
    }
	Rating newRate(customerName, rate, comment);
	this->productRate = Rating::addRateToVector(this->customerRates, newRate);
}

///////     other    ///////////

