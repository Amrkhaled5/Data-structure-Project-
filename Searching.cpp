#include "Searching.h"
#include <iostream>
#include <string>
#include <random>
using namespace std;

// call it when loading from file to fill the old id to use map for generating unique values
map<string, int> Searching::cheakId;
vector<pair<string, int>> Searching::products;

void Searching::fillMap(string id) {
	cheakId[id]++;
}

// cheak whether id is unique or not 
bool Searching::cheakIdFunction(string id) {
	if (cheakId.empty())
		return true;
	if (cheakId[id] >= 1)
		return false;
	return true;
}

/*string Searching::generate_id(int length) {
	const string allowed_chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<> distribution(0, allowed_chars.size() - 1);
	string id;
	for (int i = 0; i < length; ++i) {
		id += allowed_chars[distribution(generator)];
	}
	while (!cheakIdFunction(id)) {
		id = generate_id(length);
	}
	cheakId[id]++;
	return id;
}
*/

int Searching::generate_Integers_id(int length) {
	const int allowed_numbers[10] = { 1,2,3,4,5,6,7,8,9 };
	random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<> distribution(0, 10 - 1);
	int id = 0;
	for (int i = 0; i < length; ++i) {
		id *= 10;
		id += allowed_numbers[distribution(generator)];
	}
	while (!cheakIdFunction(to_string(id))) {
		id = generate_Integers_id(length);
	}
	cheakId[to_string(id)]++;
	return id;
}

void Searching::smallLetter(string& s) {
	string stmp = s;
	for (int i = 0; i < stmp.size(); i++)
	{
		if (stmp[i] == ' ')
			stmp.erase(stmp.begin() + i);
		stmp[i] = tolower(stmp[i]);
	}
	s = stmp;
}

vector<int> Searching::find(string needToFind) {

	vector<int>ans;
	smallLetter(needToFind);
	for (int i = 0; i < products.size(); i++)
	{
		smallLetter(products[i].first);
		if (products[i].first.find(needToFind) != string::npos) {
			ans.push_back(products[i].second);
		}
	}
	return ans;
}


