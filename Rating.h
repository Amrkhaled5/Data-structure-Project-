#pragma once
#include <iostream>
#include<vector>
using namespace std;


class Rating
{
	float rate;
	string comment;
	string customerName;
	//string customerName;

	/**
	* cheak if customer rate is between 1 and 5
	* @param rate: customer rate
	*/
	void handelRate(float&);

	/** Static private method,
	* @brief
	* calculate the rate of product based on the customers rates.
	* @brief
	* 5 * (total customers rates / perfect rate).
	* @param vector of Rating (all customers rates of a product).
	* @returns float of the product rate.
	*/
	static float calculateProductRate(vector<Rating>);
public:
	Rating();
	Rating(string, float, string);
	Rating(string, float);

	/**
	* @returns float of the customer id.
	*/
	float getCustomerRate();

	/**
	* @param rate: float rate
	*/

	void setComment(string comment);
	void setUserName(string name);
	string getComment();

	string getCustomerName();

	/**
	* Adding customer rate to the product rates and calculate the total rate again.
	* @param vector<Rating>: product rates.
	* @param Rating: customer rates.
	* @returns float final product rate.
	* @brief using private method.
	*/
	static float addRateToVector(vector<Rating>&, Rating);

	/**Edit customer rate and comment.
	* @brief
	* @param string customerID: ID in customer class
	* @param vector<rating> Product Rates that contains all customers rates for given product
	* @param string comment for the product.
	* @param float rate for the product.
	* @returns float final product rate.
	* @brief using private method.
	*/
	static float editRate(string, vector<Rating>&, float, string);

	/**Edit customer rate only.
	* @brief
	* @param string customerID: ID in customer class
	* @param vector<rating> Product Rates that contains all customers rates for given product
	* @param float rate for the product.
	* @returns float final product rate.
	* @brief using private method.
	*/
	static float editRate(string, vector<Rating>&, float);

	/**Delete customer rate only.
	* @brief
	* @param string customerID: ID in customer class
	* @param vector<rating> Product Rates that contains all customers rates for given product
	* @returns float final product rate.
	* @brief using private method.
	*/
	static float deleteRate(string, vector<Rating>&);
	static void SaveDataInFile(string path);
};

