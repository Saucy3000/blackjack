#ifndef CARDS_H
#define CARDS_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;


class CARD
{
	public:
		CARD();
		CARD(string v, string s);
		int get_numeric_value();
		string get_value();
		string get_suite();
		vector<CARD> shuffle();
		string value;
		string suite;
		//string to_string() const;
	protected:
};

#endif
