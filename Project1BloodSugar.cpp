// Project1BloodSugar.cpp
// Jon Caldwell
// COSC 2030
// Oct. 26, 2018

#include<iostream>
#include<string>
#include"List.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

#include <iomanip>
using std::setfill;
using std::setw;

int input = 1;
int daycount = 1;
List D1;
List D2;
List D3;
List D4;
List D5;
List D6;
List D7;
List D8;
List D9;
List D10;
List D11;
List D12;
List D13;
List D14;
List Week2;
List Week1;

int main()
{
	cout << setfill('*') << setw(60) << "*" << endl;
	cout << setfill (' ') << setw(35) <<  "Blood Sugar" << setfill(' ') << setw(35) << endl;
	cout << setfill('*') << setw(60) << "*" << endl;
	cout << "This program will record your Blood Sugar for the next 14 days\n" << endl;

	while (daycount < 8 = Week1)
	{
		if (daycount = 1)
		{
			cout << "Enter D to display the Blood Sugar reading for the day.\n";
			cout << "Enter W to display the Blood Sugar ready for the Week.\n";
			cout << "Enter N to transition to the next Day\n\n";
			cout << "Please enter in your Blood Surgar readings for today:\n";
			cin >> input;
			D1 = input;
			daycount++;
		}
		if (daycount = 2)
		{
			cout << "Enter D to display the Blood Sugar reading for the day.\n";
			cout << "Enter W to display the Blood Sugar ready for the Week.\n";
			cout << "Enter N to transition to the next Day\n\n";
			cout << "Please enter in your Blood Surgar readings for today:\n";
			cin >> input;
			daycount++;
		}
		if (daycount = 3)
		{
			cout << "Enter D to display the Blood Sugar reading for the day.\n";
			cout << "Enter W to display the Blood Sugar ready for the Week.\n";
			cout << "Enter N to transition to the next Day\n\n";
			cout << "Please enter in your Blood Surgar readings for today:\n";
			cin >> input;
			daycount++;
		}
		if (daycount = 4)
		{
			cout << "Enter D to display the Blood Sugar reading for the day.\n";
			cout << "Enter W to display the Blood Sugar ready for the Week.\n";
			cout << "Enter N to transition to the next Day\n\n";
			cout << "Please enter in your Blood Surgar readings for today:\n";
			cin >> input;
			daycount++;
		}
		if (daycount = 5)
		{
			cout << "Enter D to display the Blood Sugar reading for the day.\n";
			cout << "Enter W to display the Blood Sugar ready for the Week.\n";
			cout << "Enter N to transition to the next Day\n\n";
			cout << "Please enter in your Blood Surgar readings for today:\n";
			cin >> input;
			daycount++;
		}
		if (daycount = 6)
		{
			cout << "Enter D to display the Blood Sugar reading for the day.\n";
			cout << "Enter W to display the Blood Sugar ready for the Week.\n";
			cout << "Enter N to transition to the next Day\n\n";
			cout << "Please enter in your Blood Surgar readings for today:\n";
			cin >> input;
			daycount++;
		}
		if (daycount = 7)
		{
			cout << "Enter D to display the Blood Sugar reading for the day.\n";
			cout << "Enter W to display the Blood Sugar ready for the Week.\n";
			cout << "Enter N to transition to the next Day\n\n";
			cout << "Please enter in your Blood Surgar readings for today:\n";
			cin >> input;
			daycount++;
		}
	}

	system("pause");
}
