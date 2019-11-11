#ifndef CARDS_H
#define CARDS_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class CARD
{
	public:
		CARD();
		CARD(string v, string s);
		int get_value;
		vector<CARDS> shuffle();
		string to_string() const;
	protected:
		string value;
		string suite;
};

#endif
