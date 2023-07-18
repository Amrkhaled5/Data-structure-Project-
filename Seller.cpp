#include "Seller.h"
#include <iostream>
#include <Windows.h>
//#include"Market.h"
using namespace std;


// constructor & destructor
Seller::Seller(int id, string name, string email)
{
    this->ID = id;
    this->name = name;
    this->email = email;
    
}
Seller::~Seller()
{

}

///////    get & set   ///////////
void Seller::setSellerID(int id)
{
    this->ID = id;
}
void Seller::setSellerName(string name)
{
    this->name = name;
}
void Seller::setSellerEmail(string email)
{
    this->email = email;
}
int Seller::getSellerID()
{
    return this->ID;
}
string Seller::getSellerName()
{
    return this->name;
}
string Seller::getSellerEmail()
{
    return this->email;
}

////////    other    ///////////

void Seller::addProduct(Product prodd, Market mar)
{	// add to the BST
    mar.binaryTree.insert(prodd);
    // add to the list of the products of the seller
    Node* ptrToprod = mar.binaryTree.findNode(prodd);
    listOfProducts.push_back(ptrToprod);

}

void Seller::editProduct(Product prod, Market mar)
{
    ///////   Edit in the database itself  /////
    // add pointer to the product to be edited
    Node* editProd = mar.binaryTree.findNode(prod);

    editProd->val.setID(prod.getID());
    editProd->val.setName(prod.getName()); 
    editProd->val.setCategory(prod.getCategory()); 
    editProd->val.setQuantity(prod.getAalQuantity()); 
    editProd->val.setSellerID(prod.getSellerID()); 
    editProd->val.setPrice(prod.getPrice());  
    editProd->val.setsold(prod.getSoldQuantity());
    editProd->val.setinCart(prod.getinCartQuantity());
    
}

void Seller::deleteProduct(Product prod, Market mar)
{
    for (auto& ptr : listOfProducts)
    {
        if (ptr->val.getID() == mar.binaryTree.findNode(prod)->val.getID())
        {
            ptr = NULL;
            listOfProducts.remove(ptr);
            break;
        }
    }

    // a var that have the id of the deleted product

    mar.binaryTree.remove(prod);
}



list<Node*> Seller::getlist() {
    return listOfProducts;
}


void  Seller::LoadDataFromFileSeller(string path,Market mar) {
    ifstream ProductFile(path);
    int id, Avlquantity, sellerID, soldQuantity, inCartQuantity;
    string name, category;
    double price;

    for (int i = 0; i < mar.binaryTree.size; i++) {
            ProductFile >> id >> name >> category >> Avlquantity >> sellerID >> price >> soldQuantity >> inCartQuantity;
        if (sellerID == ID) {
            Product P(id, name, category, Avlquantity, sellerID, price, soldQuantity, inCartQuantity);
            Node* ptrToprod = mar.binaryTree.findNode(P);
            listOfProducts.push_back(ptrToprod);
        }
    }

    ProductFile.close();
}

