/*\
Author: Olivia Bene
Class: 240-02
Assignment:Mod 2 Lab 3
Date Assigned: 1/23/2020
Due Date: 1/29/2020 11:59pm
Description: Create a Book class, read file containing book info, then generate a report 
Certification of Authenticity:I  certify  that  this  is  entirely  my  own  work,  except  where
I  have  given fully-documented  references  to  the  work  of  others.  I  understand  the definition and consequences of
plagiarism and acknowledge that the assessor of this assignment may, for the purpose of assessing this assignment:-Reproduce
this  assignment  and  provide  a  copy  to  another  member  of academic staff; and/or-Communicate  a  copy  of  this  assignment
to  a  plagiarism  checking service  (which  may  then  retain  a  copy  of  this  assignment  on  its database for the purpose of
future plagiarism checking)
*/

//https://www.w3schools.com/cpp/cpp_constructors.asp
//https://www.w3schools.com/cpp/cpp_classes.asp

#include "book.h"
#include <sstream>

Book::Book(const string& name, Type type, int pages, float ounces){

	bName = name;
	bType = type;
	bPages = pages;
	bOunces = bOunces;

}



string Book::formatReportLine()  //return a string with all the info for the book
{
	stringstream os;

	os <<

	return os.str();
}

float Book::getWeightLbs()  //calculate and return the weight of the book in lbs
{
	return ((float)bOunces / 16.0);
}

string Book::getTypeName()  //return the string which correlates with the book type
{
	if (bType == 0)
	{
		return TYPE_WORDS[0];
	}

	if (bType == 1)
	{
		return TYPE_WORDS[1];
	}
	return "Unknown";
}