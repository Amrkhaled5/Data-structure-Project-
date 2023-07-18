#pragma once
#include"Product.h"
using namespace std;
class Node
{
public:
    Product val;
    Node* left, * right;
    Node();
};


class BST
{
    Node* root;
public:
    int size=0;
    BST();
    ~BST();
    bool contains(Product val);
    Node* findNode(Product val);
    Node* findNode(int id);
    void insert(Product val);
    Node* findParent(Product val);
    Node* findMin(Node* curr);
    void remove(Product val);
    void deleteBST(Node* node);
    Node* getroot();
    void SaveDataInFile(string path);
    void LoadDataFromFile(string path);

    void saveRatesInFile(string path);
    void loadRatesFromData(string path);

};

