#include "Person.h"

Person::Person(string Name, string Mail, string Password, int Id, string Phone, string address) :
	Customer(Id, Name, address, Phone, Mail), Seller(Id, Name, Mail) {

}

