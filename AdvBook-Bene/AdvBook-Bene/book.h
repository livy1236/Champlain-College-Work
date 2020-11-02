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
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall
//

#ifndef __lab3__book__
#define __lab3__book__

#include <string>

using namespace std;

enum Type
{
	UNKNOWN = -1,
	PAPERBACK,
	HARDBACK
};

const string TYPE_WORDS[] = { "Paperback", "Hardback" };

float fiveStar;
float fourStar;
float threeStar;
float twoStar;
float oneStar;

class Book
{
public:
	//default constructor - not actually used but should be implemented anyway
	Book();
	//constructor
	Book(const string& name, Type type, int pages, float ounces, string fileName);
	//destructor
	~Book() {};

	string formatReportLine();  //return a string with all the info for the book
	float getWeightLbs();  //calculate and return the weight of the book in lbs
	string getTypeName();  //return the string which correlates with the book type
	void addReviews(const string& reviewFile); //reads the passed in reviews file and adds review data to the book
	float calculateAverageReview(); //calculate the average of the reviews
	int getMostFrequentReview(); //get the review (number of stars) with the highest count


	//accessors
	string getName() { return bName; };
	Type getType() { return bType; };
	int getPages() { return bPages; };
	float getOunces() { return bOunces; };
	string getFileName() { return bFileName; }

private:
	string bName;  //name of the book
	Type bType;  //the type of book (Type is an enumerated type)
	int bPages;  //how many pages the book contains
	float bOunces;  //how much the book weighs in ounces
	string bFileName; //name of file with rating

	void getReviews(int reviewsArray[], int size);  //fill reviewsArray with reviews 
};


#endif /* defined(__lab3__book__) */
