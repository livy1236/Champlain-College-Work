/*  Author: Olivia Bene
	Class : 240 - 02
	Assignment : Mod 1 Lab 1
	Date Assigned : 1/16/2020
	Due Date : 1/22/2020 11:59pm
	Description : Reading language and ranking files to then print them  out in rank order.
	Certification of Authenticity : I  certify  that  this  is  entirely  my  own  work, except  where
	I  have  given fully - documented  references  to  the  work  of  others.I  understand  the definition and consequences of
	plagiarism and acknowledge that the assessor of this assignment may, for the purpose of assessing this assignment : -Reproduce
	this  assignmentand provide  a  copy  to  another  member  of academic staff;and /or-Communicate  a  copy  of  this  assignment
	to  a  plagiarism  checking service(which  may  then  retain  a  copy  of  this  assignment  on  its database for the purpose of
	future plagiarism checking)
*/
//  functions.cpp
//  lab1
//
//  Modified by: Murat K. Gungor 
//  Thanks to Brian R. Hall


#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "functions.h"

using namespace std;


int loadLanguages(const string& filename, string names[], int maxLanguages)
{
	int numNames = 0;

	ifstream input(filename);
	if (input.is_open())
	{
		while (!input.eof() && numNames < maxLanguages)
		{
			getline(input, names[numNames]);
			numNames++;
		}
		input.close();
	}
	return numNames;
}

//load language info from a file into a 2d array of ints, return true if successfully processed
bool loadInfo(const string& filename, int infoArray[][INFO], int numLanguages)
{
	// just a stub
   // modify to load the 2D array (infoArray) with the data stored in info.txt

	for (int i = 0; i < numLanguages; i++) //rows
	{
		for (int j = 0; j < INFO; j++) //columns
		{
			ifstream input(filename);
			if (input.is_open())
			{
				while (!input.eof())
				{
					input >> infoArray[i][j]; // add i ++ and j++ at the end of this call, get ride of for loops
				}
				input.close();
			}
			
		}
	}

	return true;
}

//formats and returns a string which contains the language name and the info for
//a particular language (indicated by languageRank)
string formatReportLine(int languageRank, int infoArray[][INFO], string names[])
{
	// just a stub
   // modify to build each output line for each language, and align the output so its organized
   // hint: to return a string that concatenates strings and ints, use a stringstream

	return " ";
}