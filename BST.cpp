#include<iostream>
#include "BST.h"
#include "Searching.h";
using namespace std;
Node::Node()
{
	left = right = NULL;
}

BST::BST()
{
	root = NULL;
}

bool BST::contains(Product val)
{
	Node* tmp = findNode(val);
	return (tmp != NULL);
}

Node* BST::findNode(Product val)
{
	Node* tmp = root;

	while (tmp != NULL) {
		if (tmp->val.getID() == val.getID())
		{
			return tmp;
			break;
		}
		else if (tmp->val.getID() > val.getID())
		{
			tmp = tmp->left;
		}
		else
			tmp = tmp->right;
	}
	return tmp;
}


Node* BST::findNode(int id)
{
	Node* tmp = root;

	while (tmp != NULL) {
		if (tmp->val.getID() == id)
		{
			return tmp;
			break;
		}
		else if (tmp->val.getID() > id)
		{
			tmp = tmp->left;
		}
		else
			tmp = tmp->right;
	}
	return tmp;
}


void BST::insert(Product val)
{
	size++;
	Node* newNode = new Node();
	newNode->val = val;
	if (root == NULL)
		root = newNode;
	else
	{
		Node* tmp = root;
		while (true)
		{
			if (tmp->val.getID() > val.getID())
			{    // go left
				if (tmp->left == NULL)
				{
					tmp->left = newNode;
					break;
				}
				else
				{
					tmp = tmp->left;
				}
			}
			else
			{
				// go right
				if (tmp->right == NULL)
				{
					tmp->right = newNode;
					break;
				}
				else
				{
					tmp = tmp->right;
				}
			}
		}
	}
}

Node* BST::findParent(Product val)
{
	Node* res = NULL;
	Node* curr = root;

	while (curr != NULL)
	{
		if (curr->val.getID() == val.getID())
			break;

		res = curr;
		if (curr->val.getID() > val.getID())
			curr = curr->left;
		else if (curr->val.getID() < val.getID())
			curr = curr->right;
	}
	return res;
}

Node* BST::findMin(Node* curr)
{
	Node* res = curr;
	while (res->left != NULL)
	{
		res = res->left;
	}
	return res;
}

void BST::remove(Product val)
{
	if (contains(val))
	{
		size--;
		Node* removedNode = findNode(val);
		// first remove the leaf nodes
		// we need to make the removedNode pointer to point to null
		// so we need to determine if the nood was root or left or right
		if (removedNode->left == NULL && removedNode->right == NULL)
		{
			// check if it was root node
			if (removedNode == root)
				root = NULL;
			else
			{ // here i will determine if it was left or right Node
				Node* parent = findParent(val);
				if (parent->val.getID() > val.getID())
					parent->left = NULL;
				else if (parent->val.getID() < val.getID())
					parent->right = NULL;
			}
			delete removedNode;
		}
		// here remove parent node
		// check if the node to be removed have one child form left
		else if (removedNode->left != NULL && removedNode->right == NULL)
		{
			// ->> check if the child is smaller or bigger than the parent of the removed Node
			Node* parent = findParent(val);

			if (removedNode == root)
				root = removedNode->left;
			else
			{
				if (val.getID() < parent->val.getID())
					parent->left = removedNode->left;
				else
					parent->right = removedNode->left;
			}
			delete removedNode;
		}
		else if (removedNode->left == NULL && removedNode->right != NULL)
		{
			Node* parent = findParent(val);

			if (removedNode == root)
				root = removedNode->right;
			else
			{
				if (val.getID() < parent->val.getID())
					parent->left = removedNode->right;
				else
					parent->right = removedNode->right;
			}
			delete removedNode;
		}
		else
		{
			Node* minNode = findMin(removedNode->right);
			Node* parent = findParent(minNode->val);

			removedNode->val = minNode->val;

			if (parent == removedNode)
				parent->right = minNode->right;
			else
				parent->left = minNode->right;

			delete minNode;
		}
	}
}

void BST::deleteBST(Node* node)
{
	size = 0;
	if (node == NULL)
		return;
	Node* curNode = node;
	Node* leftNode = node->left;
	Node* rightNode = node->right;
	delete(curNode);
	deleteBST(leftNode);
	deleteBST(rightNode);
}

Node* BST::getroot() {
	return root;
}

void BST::SaveDataInFile(string path) {
	ofstream ProductFile(path);
	if (!root) {
		cout << "Empity BST" << endl;
	}
	else {
		queue<Node*>q;
		q.push(root);
		while (!q.empty()) {
			Node* temp = q.front();
			q.pop();
			string nameTemp = temp->val.getName();
			for (int i = 0; i < nameTemp.size(); i++) {
				if (nameTemp[i] == ' ') {
					nameTemp[i] = '*';
				}
			}
			temp->val.setName(nameTemp);

			string catTemp = temp->val.getCategory();
			for (int i = 0; i < catTemp.size(); i++) {
				if (catTemp[i] == ' ') {
					catTemp[i] = '*';
				}
			}
			temp->val.setCategory(catTemp);

			ProductFile << temp->val.getID() << " " << temp->val.getName() << " " << temp->val.getCategory()
				<< " " << temp->val.getAalQuantity() << " " << temp->val.getSellerID() << " " << temp->val.getPrice() << " " <<
				temp->val.getSoldQuantity() << " " << temp->val.getinCartQuantity() << endl;
			if (temp->left && temp->right) {
				q.push(temp->left);
				q.push(temp->right);
			}
			else if (temp->left && !temp->right) {
				q.push(temp->left);
			}
			else if (!temp->left && temp->right) {
				q.push(temp->right);
			}
		}
		ProductFile.close();
	}
}


void BST::saveRatesInFile(string path) {
	ofstream ratingfile(path);
	if (!root) {
		cout << "Empity BST" << endl;
	}
	else {
		queue<Node*>q;
		q.push(root);
		while (!q.empty()) {
			Node* temp = q.front();
			q.pop();
			for (int i = 0; i < temp->val.customerRates.size(); i++)
			{
				string nameTemp = temp->val.customerRates[i].getCustomerName(), commentTemp = temp->val.customerRates[i].getComment();
				for (auto& c : nameTemp)
				{
					if (c == ' ')
						c = '*';
				}
				for (auto& c : commentTemp)
				{
					if (c == ' ')
						c = '*';
				}
				temp->val.customerRates[i].setComment(commentTemp);
				temp->val.customerRates[i].setUserName(nameTemp);
				ratingfile << temp->val.getID() << " " << temp->val.customerRates[i].getCustomerName() << " " << temp->val.customerRates[i].getCustomerRate() << " " << temp->val.productRate << " " << temp->val.customerRates[i].getComment() << endl;
			}
			if (temp->val.customerRates.size() != 0)
				ratingfile << "-" << endl;
			if (temp->left && temp->right) {
				q.push(temp->left);
				q.push(temp->right);
			}
			else if (temp->left && !temp->right) {
				q.push(temp->left);
			}
			else if (!temp->left && temp->right) {
				q.push(temp->right);
			}
		}
		//ratingfile << "0" << endl;

		ratingfile.close();
	}
}

void BST::LoadDataFromFile(string path) {
	ifstream ProductFile(path);
	int id, Avlquantity, sellerID, inCartQuantity, soldQuantity;
	string name, category;
	double price;
	while (ProductFile >> id >> name >> category >> Avlquantity >> sellerID >> price >> soldQuantity >> inCartQuantity)
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

		Product P(id, name, category, Avlquantity, sellerID, price, soldQuantity, inCartQuantity);
		Searching::fillMap(to_string(id));
		insert(P);
	}
	ProductFile.close();
}

void BST::loadRatesFromData(string path) {
	ifstream ratingfile(path);
	string flag;
	int productId;
	string customerName = "";
	float rate = 0, producRate = 0;
	string comment = "";
	int productIDTmp = productId = 0;
	bool cheak = 0;
	vector<Rating>ratingTmp;
	string data;
	while (getline(ratingfile, data)) {

		if (data.size() <= 1) {
			if (customerName != "" && productId != 0 && comment != "" && rate != 0 && producRate != 0) {
				Node* tmp;
				tmp = this->findNode(productId);
				tmp->val.customerRates = ratingTmp;
				tmp->val.productRate = producRate;
				ratingTmp.clear();
			}
			else
				break;
		}
		else {
			vector<string> substrings;
			string delimiter = " ";
			size_t pos = 0;
			string token;
			while ((pos = data.find(delimiter)) != std::string::npos) {
				token = data.substr(0, pos);
				substrings.push_back(token);
				data.erase(0, pos + delimiter.length());
			}
			substrings.push_back(data);
			productId = stoi(substrings[0]);
			customerName = substrings[1];
			rate = stof(substrings[2]);
			producRate = stof(substrings[3]);
			comment = substrings[4];

			//ratingfile >> productId >> customerName >> rate >> producRate >> comment ;
			/*
			1234 amr 1,5 4 asdkfjl
			1234 amr 1,5 4 asdkfjl
			1234 amr 1,5 4 asdkfjl
			2222 amr 1,5 4 asdkfjl
			*/

			/*if (!cheak)
			{
				cheak = 1;
				productIDTmp = productId;
			}*/
			for (auto& c : customerName)
			{
				if (c == '*')
					c = ' ';
			}
			for (auto& c : comment)
			{
				if (c == '*')
					c = ' ';
			}
			/*if (productId != productIDTmp)
			{
				cheak = 0;
				Node* tmp;
				tmp = this->findNode(productIDTmp);
				tmp->val.customerRates = ratingTmp;
				tmp->val.productRate = producRate;
				ratingTmp.clear();
				Rating newRate(customerName, rate, comment);
				ratingTmp.push_back(newRate);
			}
			else if (productId == 0)
				break;*/
				//else {
			Rating newRate(customerName, rate, comment);
			ratingTmp.push_back(newRate);
			//}
		}
	}
	ratingfile.close();
}

BST::~BST() {
	deleteBST(root);
}
