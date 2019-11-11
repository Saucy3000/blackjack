#include "Cards.h"


CARD::CARD() // Defualt Constructor
{
	value="0";
	suite="0";
}

CARD::CARD(string v, string s)
{
	value=v;
	suite=s;
}

int CARD::get_numeric_value()
{
	string test = value;
	if (test == "1")
		return 1;
	else if (test == "2")
		return 2;
	else if (test == "3")
		return 3;
	else if (test == "4")
		return 4;
	else if (test == "5")
		return 5;
	else if (test == "6")
		return 6;
	else if (test == "7")
		return 7;
	else if (test == "8")
		return 8;
	else if (test == "9")
		return 9;
	else if (test == "10")
		return 10;
	else if (test == "Jack")
		return 10;
	else if (test == "Queen")
		return 10;
	else if (test == "King")
		return 10;
	else if (test == "Ace")
		return 11;
	else 
		return 0;
}

string CARD::get_value()
{
	return value;
}

string CARD::get_suite()
{
	return suite;
}

vector<CARD> CARD::shuffle ()
{
	int i=0;
	vector<CARD> deck;
	for (;i<6;i++)
	{
		deck.push_back(CARD("1","Spades"));
		deck.push_back(CARD("2","Spades"));
		deck.push_back(CARD("3","Spades"));
		deck.push_back(CARD("4","Spades"));
		deck.push_back(CARD("5","Spades"));
		deck.push_back(CARD("6","Spades"));
		deck.push_back(CARD("7","Spades"));
		deck.push_back(CARD("8","Spades"));
		deck.push_back(CARD("9","Spades"));
		deck.push_back(CARD("10","Spades"));
		deck.push_back(CARD("Jack","Spades"));
		deck.push_back(CARD("Queen","Spades"));
		deck.push_back(CARD("King","Spades"));
		deck.push_back(CARD("Ace","Spades"));
		deck.push_back(CARD("1","Hearts"));
		deck.push_back(CARD("2","Hearts"));
		deck.push_back(CARD("3","Hearts"));
		deck.push_back(CARD("4","Hearts"));
		deck.push_back(CARD("5","Hearts"));
		deck.push_back(CARD("6","Hearts"));
		deck.push_back(CARD("7","Hearts"));
		deck.push_back(CARD("8","Hearts"));
		deck.push_back(CARD("9","Hearts"));
		deck.push_back(CARD("10","Hearts"));
		deck.push_back(CARD("Jack","Hearts"));
		deck.push_back(CARD("Queen","Hearts"));
		deck.push_back(CARD("King","Hearts"));
		deck.push_back(CARD("Ace","Hearts"));
		deck.push_back(CARD("1","Clubs"));
		deck.push_back(CARD("2","Clubs"));
		deck.push_back(CARD("3","Clubs"));
		deck.push_back(CARD("4","Clubs"));
		deck.push_back(CARD("5","Clubs"));
		deck.push_back(CARD("6","Clubs"));
		deck.push_back(CARD("7","Clubs"));
		deck.push_back(CARD("8","Clubs"));
		deck.push_back(CARD("9","Clubs"));
		deck.push_back(CARD("10","Clubs"));
		deck.push_back(CARD("Jack","Clubs"));
		deck.push_back(CARD("Queen","Clubs"));
		deck.push_back(CARD("King","Clubs"));
		deck.push_back(CARD("Ace","Clubs"));
		deck.push_back(CARD("1","Diamonds"));
		deck.push_back(CARD("2","Diamonds"));
		deck.push_back(CARD("3","Diamonds"));
		deck.push_back(CARD("4","Diamonds"));
		deck.push_back(CARD("5","Diamonds"));
		deck.push_back(CARD("6","Diamonds"));
		deck.push_back(CARD("7","Diamonds"));
		deck.push_back(CARD("8","Diamonds"));
		deck.push_back(CARD("9","Diamonds"));
		deck.push_back(CARD("10","Diamonds"));
		deck.push_back(CARD("Jack","Diamonds"));
		deck.push_back(CARD("Queen","Diamonds"));
		deck.push_back(CARD("King","Diamonds"));
		deck.push_back(CARD("Ace","Diamonds"));	
	}
	
	std::random_shuffle (deck.begin(),deck.end());
	return deck;

}

//string CARD::to_string() const
//{
//	std::string result = "";
//	result += std::to_string(value) + " " + std::to_string(suite);
//	return result;
//}
