#include "Cards.h"

CARD::CARD() // Defualt Constructor
{
	value=0;
	suite=0;
}

CARD::CARD(string v, string s)
{
	value=v;
	suite=s;
}

int CARD::get_value(CARD c)
{
	string test = c.value;
	if (test = "1")
		return 1;
	else if (test = "2")
		return 2;
	else if (test = "3")
		return 3;
	else if (test = "4")
		return 4;
	else if (test = "5")
		return 5;
	else if (test = "6")
		return 6;
	else if (test = "7")
		return 7;
	else if (test = "8")
		return 8;
	else if (test = "9")
		return 9;
	else if (test = "10")
		return 10;
	else if (test = "Jack")
		return 10;
	else if (test = "Queen")
		return 10;
	else if (test = "King")
		return 10;
	else if (test = "Ace")
		return 11;
	else 
		return 0;
}

vector<CARDS> CARDS::shuffle ()
{
	int i=0;
	vector<CARDS> deck;
	for (i;i<6;i++)
	{
		deck.push_back("1","Spades");
		deck.push_back("2","Spades");
		deck.push_back("3","Spades");
		deck.push_back("4","Spades");
		deck.push_back("5","Spades");
		deck.push_back("6","Spades");
		deck.push_back("7","Spades");
		deck.push_back("8","Spades");
		deck.push_back("9","Spades");
		deck.push_back("10","Spades");
		deck.push_back("Jack","Spades");
		deck.push_back("Queen","Spades");
		deck.push_back("King","Spades");
		deck.push_back("Ace","Spades");
		deck.push_back("1","Hearts");
		deck.push_back("2","Hearts");
		deck.push_back("3","Hearts");
		deck.push_back("4","Hearts");
		deck.push_back("5","Hearts");
		deck.push_back("6","Hearts");
		deck.push_back("7","Hearts");
		deck.push_back("8","Hearts");
		deck.push_back("9","Hearts");
		deck.push_back("10","Hearts");
		deck.push_back("Jack","Hearts");
		deck.push_back("Queen","Hearts");
		deck.push_back("King","Hearts");
		deck.push_back("Ace","Hearts");
		deck.push_back("1","Clubs");
		deck.push_back("2","Clubs");
		deck.push_back("3","Clubs");
		deck.push_back("4","Clubs");
		deck.push_back("5","Clubs");
		deck.push_back("6","Clubs");
		deck.push_back("7","Clubs");
		deck.push_back("8","Clubs");
		deck.push_back("9","Clubs");
		deck.push_back("10","Clubs");
		deck.push_back("Jack","Clubs");
		deck.push_back("Queen","Clubs");
		deck.push_back("King","Clubs");
		deck.push_back("Ace","Clubs");
		deck.push_back("1","Diamonds");
		deck.push_back("2","Diamonds");
		deck.push_back("3","Diamonds");
		deck.push_back("4","Diamonds");
		deck.push_back("5","Diamonds");
		deck.push_back("6","Diamonds");
		deck.push_back("7","Diamonds");
		deck.push_back("8","Diamonds");
		deck.push_back("9","Diamonds");
		deck.push_back("10","Diamonds");
		deck.push_back("Jack","Diamonds");
		deck.push_back("Queen","Diamonds");
		deck.push_back("King","Diamonds");
		deck.push_back("Ace","Diamonds");	
	}
	
	std::random_shuggle (deck.begin(),deck.end());
	return deck;

}

string CARD::to_string() const
{
	std::string result = "";
	result += std::to_string(value) + " " + std::to_string(suite);
	return result;
}
