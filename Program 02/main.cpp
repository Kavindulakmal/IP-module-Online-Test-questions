

//----------------------------------------
#include "pch.h"
#include <iostream>
#include "Lottery.h"
using namespace std;

int main()
{

	Lottery * l1 = new Lottery();
	l1->input();
	l1->print_results();
	l1->generate_r_number();
	return 0;
}