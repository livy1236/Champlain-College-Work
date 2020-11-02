/*\
Author: Olivia Bene
Class: 240-02
Assignment:Mod 2 Assignment 1
Date Assigned: 1/30/2020
Due Date: 2/3/2020 11:59pm
Description: Create a Book class, read file containing book info, then generate a report and the rating
Certification of Authenticity:I  certify  that  this  is  entirely  my  own  work,  except  where
I  have  given fully-documented  references  to  the  work  of  others.  I  understand  the definition and consequences of
plagiarism and acknowledge that the assessor of this assignment may, for the purpose of assessing this assignment:-Reproduce
this  assignment  and  provide  a  copy  to  another  member  of academic staff; and/or-Communicate  a  copy  of  this  assignment
to  a  plagiarism  checking service  (which  may  then  retain  a  copy  of  this  assignment  on  its database for the purpose of
future plagiarism checking)
*/

//https://www.w3schools.com/cpp/cpp_constructors.asp
//https://www.w3schools.com/cpp/cpp_classes.asp

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "book.h"

const float OUNCES = 16.0;

Book::Book(const string& name, Type type, int pages, float ounces, string fileName){

	bName = name;
	bType = type;
	bPages = pages;
	bOunces = ounces;
	bFileName = fileName;

}



string Book::formatReportLine()  //return a string with all the info for the book
{
	stringstream os;

	os << getName() << " | " << "Type: " << getTypeName() << "  " << "Pages: " << getPages() << "  " << "Weight(lbs): " << getWeightLbs() << " Average Stars: " << calculateAverageReview() << " Most Frequent Review: " << getMostFrequentReview() <<endl;

	return os.str();
}

float Book::getWeightLbs()  //calculate and return the weight of the book in lbs
{
	return ((float)bOunces / OUNCES);
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

void Book::addReviews(const string& reviewFile) //reads the passed in reviews file and adds review data to the book
{

	ifstream input(reviewFile);

	if (input.good())
	{
		while (!input.eof())
		{
			input >> fiveStar >> fourStar >> threeStar >> twoStar >> oneStar;
		}
	}
	else
	{
		cout << "File not found: " << reviewFile << endl;
	}
	return;
}

float Book::calculateAverageReview() //calculate the average of the reviews
{
	
	return fiveStar + fourStar + threeStar + twoStar + oneStar ;
}

int Book::getMostFrequentReview() //get the review (number of stars) with the highest count
{

	return 0;
}

void Book::getReviews(int reviewsArray[], int size)  //fill reviews Array with reviews 
{

	return;
}