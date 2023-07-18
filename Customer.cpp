#include "Customer.h"
using namespace std;

// constructor & destructor
Customer::Customer(int id, string name, string address, string phNum, string email)
{
    this->ID = id;
    this->name = name;
    this->email = email;
    this->address = address;
    this->phoneNum = phNum;
    totalCost = 0;
    
}
Customer::~Customer()
{
    
}
// get & set
void Customer::setCustomerID(int id)
{
    this->ID = id;
}
void Customer::setCustomerName(string name)
{
    this->name = name;
}
void Customer::setCustomerAddress(string address)
{
    this->address = address;
}
void Customer::setCustomerPhone(string phoneNum)
{
    this->phoneNum = phoneNum;
}
void Customer::setCustomerEmail(string email)
{
    this->email = email;
}
int Customer::getCustomerID()
{
    return this->ID;
}
string Customer::getCustomerName()
{
    return this->name;
}
string Customer::getCustomerAddress()
{
    return this->address;
}
string Customer::getCustomerPhone()
{
    return this->phoneNum;
}
string Customer::getCustomerEmail()
{
    return this->email;
}


// other


void Customer::addtocart(int orderedQuantaty,Product prod, Market mar) {

    Node* temp = mar.binaryTree.findNode(prod);
    temp->val.setinCartQuantity(orderedQuantaty);
    cart[ID].push_back(make_pair(temp,orderedQuantaty) );
    totalCost = totalCost + (orderedQuantaty * temp->val.getPrice());

}

void Customer::removefcart(Product prod) {
   
    /*for (auto& ptr : cart[ID]) {
        if (ptr.first->val.getID() == prod.getID()) {
            ptr.first = NULL;
            cart[ID].remove(ptr);
        }
    }*/
    list<pair<Node*, int>>::iterator it;
    for (it = cart[ID].begin(); it != cart[ID].end();) {
        if (it->first->val.getID() == prod.getID()) {
            it = cart[ID].erase(it);
        }
        else {
            it++;
        }
    }

}

void Customer::buySingleProduct(int orderedQuantaty,Product prod, Market mar) {

    pair<Node*, int> temp;
    temp.first = mar.binaryTree.findNode(prod);
    temp.second = orderedQuantaty;
    temp.first->val.setQuantity(temp.first->val.getAalQuantity() - temp.second);
    temp.first->val.setsold(temp.first->val.getSoldQuantity() + temp.second);
    temp.first->val.setinCart(temp.first->val.getinCartQuantity() - temp.second);

    removefcart(prod);

}
void Customer::checkout(Market mar) {         // Will Delete The product From The Tree IF It's Out Of Stock  and clear The cart

    confirmPayment(mar);
    cart[ID].clear();
}

void Customer::confirmPayment( Market mar) {

    list<pair<Node*, int>>::iterator  it;
    for (it = cart[ID].begin(); it != cart[ID].end(); it++) {
        it->first->val.setQuantity(it->first->val.getAalQuantity() - it->second);
        it->first->val.setsold(it->first->val.getSoldQuantity() + it->second);
        it->first->val.setinCart(it->first->val.getinCartQuantity() - it->second);
    }

}

list<pair<Node*, int>> Customer::getCart() {
    return cart[ID];
}

void Customer::SaveDataInFileCustomer(string path) {
    ofstream CustomerCart(path);
    int customerID;
    for (auto C : cart) {
        customerID = C.first;
        list<pair<Node*, int>>list = C.second;
        for (auto it = list.begin(); it != list.end(); it++) {

            string nameTemp = (*it).first->val.getName();
            for (int i = 0; i < nameTemp.size(); i++) {
                if (nameTemp[i] == ' ') {
                    nameTemp[i] = '*';
                }
            }
            (*it).first->val.setName(nameTemp);

            string catTemp = (*it).first->val.getCategory();
            for (int i = 0; i < catTemp.size(); i++) {
                if (catTemp[i] == ' ') {
                    catTemp[i] = '*';
                }
            }
            (*it).first->val.setCategory(catTemp); 

            CustomerCart << customerID << " " << (*it).second << " " << (*it).first->val.getID() << " " << (*it).first->val.getName() << " " << (*it).first->val.getCategory()
                << " " << (*it).first->val.getAalQuantity() << " " << (*it).first->val.getSellerID() << " " << (*it).first->val.getPrice()
                <<" "<< (*it).first->val.getSoldQuantity()<<" "<< (*it).first->val.getinCartQuantity() << endl;
        }
    }
    CustomerCart.close();
}
void Customer::LoadDataFromFileCustomer(string path,Market mar) {
    ifstream CustomerCart(path);
    int customerID, OrderedQuantaty;
    int id, Avlquantity, sellerID, soldQuantity, inCartQuantity;
    string name, category;
    double price;
    if (CustomerCart.is_open()) {

        while (CustomerCart >> customerID >> OrderedQuantaty >> id >> name >> category >> Avlquantity >> sellerID >> price>> soldQuantity>> inCartQuantity)
        {

            for (int i = 0; i < name.size(); i++) {
                if (name[i] == '*') {
                    name[i] = ' ';
                }
            }

            for (int i = 0; i < category.size(); i++) {
                if (category[i] == '*') {
                    category[i] = ' ';
                }
            }

            Product P(id, name, category, Avlquantity, sellerID, price,soldQuantity ,inCartQuantity);
            Node* temp = mar.binaryTree.findNode(P);
            cart[customerID].push_back({temp,OrderedQuantaty });
        }
    }
    CustomerCart.close();
}

