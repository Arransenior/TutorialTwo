// TutorialTwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <list>
using std::cout;
using std::cin;

int num;
int smallest = 1000;
int largest = 0;



int main()
{
	std::list<int> mylist;


	for (int counter = 0; counter < 5; counter++) {

		cout << "please enter a number between 0 - 999" << std::endl;
		cin >> num;
		if (num > largest) {
			largest = num;
		}

		if (num < smallest && smallest != largest) {
			smallest = num;
		}

		mylist.push_back(num);


	}

	cout << "the smallest number entered was: " << smallest << std::endl;
	cout << "the largest number entered was: " << largest << std::endl;
	std::cin.ignore();

    return 0;
}

