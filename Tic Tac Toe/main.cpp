#include "Tic Tac Toe.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

// making things simpler
using namespace std;

// functions
void initBoard();
void printContent();
void applyMove(Box box);
void takePlayerChoice();
void updateBoard();
char getBoardState(Box box);
int toInt(string input);

int main()
{
	bool playAgain = false;
	do
	{	// starts game
		initBoard();
		printContent();
		takePlayerChoice();
	} while (playAgain);
}

void initBoard()
{
	for (int i = 0; i < 10; i++)
	{
		myInstance[i];
	}
}

void printContent()
{
	initBoard();
	cout << "Welcome to Tic Tac Toe!\n\n";
	cout << "This is your board. Player 1 is O and Player 2 is X\n\n";
	cout << "[" << myInstance[0].boxID << "]";
	cout << "[" << myInstance[0].boxID << "]";
	cout << "[" << myInstance[0].boxID << "]\n";
	cout << "[" << myInstance[0].boxID << "]";
	cout << "[" << myInstance[0].boxID << "]";
	cout << "[" << myInstance[0].boxID << "]\n";
	cout << "[" << myInstance[0].boxID << "]";
	cout << "[" << myInstance[0].boxID << "]";
	cout << "[" << myInstance[0].boxID << "]\n\n";
}

void applyMove(Box box)
{
	if (currentPlayer == 1)
	{
		validChoice = true;
		myInstance[0].boxOwnership = '1';
		currentPlayer = 2;

		updateBoard();
	}
	else if (currentPlayer == 2)
	{
		validChoice = true;
		myInstance[0].boxOwnership = '2';
		currentPlayer = 1;

		updateBoard();
	}
}

void takePlayerChoice()
{
	string choice = "";

	do
	{
		cout << "Choose a number from 1-9\nPlayer " << currentPlayer << ": ";

		getline(cin, choice);

		if (choice == "1")
		{
			applyMove(myInstance[0]);
		}
		else if (choice == "2")
		{

		}
		else if (choice == "3")
		{

		}
		else if (choice == "4")
		{

		}
		else if (choice == "5")
		{

		}
		else if (choice == "6")
		{

		}
		else if (choice == "7")
		{

		}
		else if (choice == "8")
		{

		}
		else if (choice == "9")
		{

		}
		else
		{
			cout << "You didn't choose a number from 1-9! Try again...";
			validChoice = false;
		}
	} while (validChoice == false);
}

void updateBoard()
{
	system("cls");
	cout << "Welcome to Tic Tac Toe!\n\n";
	cout << "This is your board. Player 1 is O and Player 2 is X\n\n";
	cout << "[" << getBoardState(myInstance[0]) << "]";
	cout << "[" << getBoardState(myInstance[0]) << "]";
	cout << "[" << getBoardState(myInstance[0]) << "]\n";
	cout << "[" << getBoardState(myInstance[0]) << "]";
	cout << "[" << getBoardState(myInstance[0]) << "]";
	cout << "[" << getBoardState(myInstance[0]) << "]\n";
	cout << "[" << getBoardState(myInstance[0]) << "]";
	cout << "[" << getBoardState(myInstance[0]) << "]";
	cout << "[" << getBoardState(myInstance[0]) << "]\n\n";

	takePlayerChoice();
}

char getBoardState(Box box)
{
	char p1 = 'O';
	char p2 = 'X';

	if (box.boxOwnership == '1')
	{
		return p1;
	}
	else if (box.boxOwnership == '2')
	{
		return p2;
	}
	else
	{
		return box.boxID;
	}
}

int toInt(string input)
{
	stringstream ss(input);

	int x = 0;
	ss >> x;

	return x;
}