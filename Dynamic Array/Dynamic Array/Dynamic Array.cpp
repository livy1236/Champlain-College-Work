/*
Author: Olivia Bene
Class: 240-02
Assignment: Module-04-Lab Assignment 4 - Dynamic Array
Date Assigned: 02/6/2020
Due Date: 02/12/2020 11:59PM
Description: Prompt the user for a size. Based on the specified size, create a dynamic array and populate the dynamic array with random numbers.  
Once the array is populated, display the array on the screen. Then, sort the array based on ascending order and display the sorted array on screen.  
Certification of Authenticity:I  certify  that  this  is  entirely  my  own  work,  except  where
I  have  given fully-documented  references  to  the  work  of  others.  I  understand  the definition and consequences of
plagiarism and acknowledge that the assessor of this assignment may, for the purpose of assessing this assignment:-Reproduce
this  assignment  and  provide  a  copy  to  another  member  of academic staff; and/or-Communicate  a  copy  of  this  assignment
to  a  plagiarism  checking service  (which  may  then  retain  a  copy  of  this  assignment  on  its database for the purpose of
future plagiarism checking)
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

const int UPPER_BOUND = 51; // The largest random number, inclusive
int arraySize;

int promptSize();
void populate(int size, int* ptr);
void display(int size, int* ptr);
void sort(int size, int* ptr);
void swapValue(int& x, int& y);


int main()
{
	srand(time(NULL)); // THIS LINE SHOULD BE CALLED ONLY ONCE - DON'T PLACE THIS INTO LOOP!
	arraySize = promptSize();
	int* ptr = new int[arraySize];

	populate(arraySize, ptr);
	display(arraySize, ptr);
	sort(arraySize, ptr);
	
	return 0;
}

int promptSize() //Ask user for a valid size
{
	int size;
	do {
		cout << "Enter the size of the array: ";
		cin >> size;
	} while (size < 0);

	return size;
}

void populate(int size, int* ptr) //Populate the array with random numbers between 0 to 50, inclusive 
{
	for (int i = 0; i < size; i++)
	{
		*(ptr + i ) = rand() % UPPER_BOUND;
	}
	return;
}

void display(int size, int* ptr) //Display the contents of the array 
{
	for (int i = 0; i < size; i++) {
		cout << right << setw(4) << *(ptr + i);
		if (i % 10 == 9) {
			cout << endl;
		}
	}
	cout << endl;
	return;
}

void sort(int size, int* ptr) //Sort the array in ascending order (Bubble)
{
	for (int i = 0; i < size; i++)
	{
		int move = 0;
		for (int j = 0; j < size - i - 1; j++)
		{
			swapValue(*(ptr + i), *(ptr + j));
		}
	}

	return;
}

void swapValue(int& x, int& y) //Used to complete bubble sort
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	return;
}