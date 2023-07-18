#include "Rating.h"

Rating::Rating() {
	this->rate = 0;
	this->comment = "";
}
Rating::Rating(string customerName, float rate, string comment) {
	handelRate(rate);
	this->customerName = customerName;
	this->rate = rate;
	this->comment = comment;
}

Rating::Rating(string customerName, float rate) {
	handelRate(rate);
	this->customerName = customerName;
	this->rate = rate;
}

void Rating::handelRate(float& rate) {
	if (rate > 5)
		rate = 5;
	if (rate < 1)
		rate = 1;
}

float Rating::getCustomerRate() {
	return this->rate;
}


string Rating::getComment() {
	return this->comment;
}

void Rating::setComment(string comment) {
	this->comment = comment;
}

void Rating::setUserName(string name) {
	this->customerName = name;
}


string Rating::getCustomerName() {
	return this->customerName;
}


float Rating::calculateProductRate(vector<Rating>rates) {
	float totalRates = 0;
	float productRate;
	const float BESTRATE = 5 * rates.size();
	for (auto& rate : rates) {
		totalRates += rate.getCustomerRate();
	}
	productRate = 5 * (totalRates / BESTRATE);
	return productRate;
}

float Rating::editRate(string customerName, vector<Rating>& productRates, float customerRate, string comment) {
	for (auto& rate : productRates)
	{
		if (rate.customerName == customerName) {
			rate.comment = comment;
			rate.rate = customerRate;
			break;
		}
	}
	return calculateProductRate(productRates);
}

float Rating::editRate(string customerName, vector<Rating>& productRates, float customerRate) {
	for (auto& rate : productRates)
	{
		if (rate.customerName == customerName) {
			rate.rate = customerRate;
			break;
		}
	}
	return calculateProductRate(productRates);

}

float Rating::deleteRate(string customerName, vector<Rating>& productRates) {
	for (int i = 0; i < productRates.size(); i++)
	{
		if (productRates[i].customerName == customerName) {
			productRates.erase(productRates.begin() + i);
			break;
		}
	}
	return calculateProductRate(productRates);

}

float Rating::addRateToVector(vector<Rating>& productRates, Rating customerRate) {
	for (int i = 0; i < productRates.size(); i++) {
		if (productRates[i].getCustomerName() == customerRate.getCustomerName()) {
			productRates[i] = customerRate;
			return calculateProductRate(productRates);
		}
	}
	productRates.push_back(customerRate);
	return calculateProductRate(productRates);
}
