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

#include <iostream>
#include <fstream>
#include <string>
#include "book.h"

using namespace std;

int main()
{
	const string FILENAME("books.txt");

	ifstream input(FILENAME);

	if (input.good())
	{
		while (!input.eof())
		{
			string name;
			int type;
			int pages;
			float ounces;
			string fileName;
			getline(input, name);
			input >> type >> pages >> ounces >> fileName;
			input.ignore(INT_MAX, '\n');  //ignore the newline char at the end of the line

			//create Book object here!

			Book myBook(name,(Type)type, pages, ounces, fileName);

			//write out report line for movie here!
			cout << myBook.formatReportLine();

		}
	}
	else
	{
		cout << "File not found: " << FILENAME << endl;
	}

	system("pause");
	return 0;
}