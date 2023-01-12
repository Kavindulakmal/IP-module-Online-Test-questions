

//----------------------------------------
#include "pch.h"
#include <iostream>
#include "Lottery.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Lottery::Lottery()
{
	for (int l_count = 0; l_count < 5; l_count++) {
		random_number[l_count] = 0;
	}


	for (int l_count = 0; l_count < 5; l_count++) {
		user_input_number[l_count] = 0;
	}
}

void Lottery::input()
{
	int user_count, user_input[5], x;
	for (user_count = 0; user_count < 5; user_count++) {
		cout << "Enter " << (user_count + 1) << " Lottery Number : ";
		cin >> user_input[user_count];
		if (user_input[user_count]< 10 && user_input[user_count] >= 0) {
			user_input_number[user_count] = user_input[user_count];
		}
		else
		{
			cout <<"Enter Lottery Number Again (Among 0 - 9 ) : " <<endl<<endl;
			user_count = user_count - 1;
		}
		

	}
}

void Lottery::generate_rnumber()
{
	srand((int)time(0));
	int i = 0;
	while (i++ < 10) {
		int r = (rand() % 9) + 0;
		random_number[i] = r;
	}

	
}

void Lottery::print_results()

{

	    generate_rnumber();


		cout <<endl<< "Lottery numbers array" << endl;
		int printl_number, printl_number_user;
		for (printl_number = 0; printl_number < 5; printl_number++) {

			cout << random_number[printl_number] << " ";
		}

		cout <<endl<< "User numbers array" << endl;
		for (printl_number_user = 0; printl_number_user < 5; printl_number_user++) {

			cout << user_input_number[printl_number_user] << " ";
		}

		int indexpos=0;
		int element[5];

		for (int x = 0; x < 5; x++) {
			if (user_input_number[x] == random_number[x]) {

				element[x] = x;
				indexpos = indexpos+1;
				
			}
			else {
				indexpos = indexpos+0;
			}
		
	}
		cout <<endl<< endl << "There are " << indexpos << " matching digits ";
		for (int element_count = 0; element_count < indexpos; element_count++) {
			if (element_count == 5) {
				break;
			}
			else {
				cout << " (elements " << element[element_count] << " and ";
			}
			
		}
		cout << "." << endl;

		
}


Lottery::~Lottery()
{
	cout << "..........................................................................................." << endl << " End " << "...........................................................................................";
}

