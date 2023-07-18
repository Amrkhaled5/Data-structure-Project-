#pragma once
#include <vector>
#include <string>
#include <map>
using namespace std;
class Searching
{
	static bool cheakIdFunction(string);

	static  map<string, int>cheakId;
	/** Make it all Small Letters.
	* @brief
	* Took string and ignore spaces and change capital characters to small.
	* @param s: The string that need to modify.
	* @returns Returns changed string.
	* @auther Mohamed Elramah --meefr--
	*/
	static void smallLetter(string& s);

public:
	
	/**
	* all products <it's name and category , it's id>
	* @auther Mohamed Elramah --meefr--
	*/

	static vector<pair<string, int>>products;

	static void fillMap(string);

	/*static string generate_id(int);*/

	/** Generate a unique id.
	* @brief
	* used map inside to cheak if the generated id
	* is unique or not - if not - it started to generate
	* a new one.
	* @param length: int, the length of the needed id.
	* @returns Returns unique id.
	* @auther Mohamed Elramah --meefr--
	*/

	static int generate_Integers_id(int);

	/** Find all products contain the string.
	* @brief
	* search if there any data contains the given string or not.
	* @param needToFind: The string which seach input.
	* @returns Returns vector contains all ids of the data found.
	* @auther Mohamed Elramah --meefr--
	*/

	static vector<int> find(string needToFind);

};



