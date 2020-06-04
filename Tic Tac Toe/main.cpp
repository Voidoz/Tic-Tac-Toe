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

// The function to be used to initialise the board
void initBoard()
{

}

// Print the entire board
void printContent()
{
	cout << "Welcome to Tic Tac Toe!\n\n";
	cout << "This is your board. Player 1 is O and Player 2 is X\n\n";
	cout << "[" << e1.boxID << "]";
	cout << "[" << e2.boxID << "]";
	cout << "[" << e3.boxID << "]\n";
	cout << "[" << e4.boxID << "]";
	cout << "[" << e5.boxID << "]";
	cout << "[" << e6.boxID << "]\n";
	cout << "[" << e7.boxID << "]";
	cout << "[" << e8.boxID << "]";
	cout << "[" << e9.boxID << "]\n\n";
}

// Apply the move the player makes
void applyMove(Box box)
{
	if (currentPlayer == 1)
	{
		validChoice = true;
		box.boxOwnership = '1';
		currentPlayer = 2;

		updateBoard();
	}
	else if (currentPlayer == 2)
	{
		validChoice = true;
		box.boxOwnership = '2';
		currentPlayer = 1;

		updateBoard();
	}
}

// Take the player's choice of what move to make
void takePlayerChoice()
{
	string choice = "";

	do
	{
		cout << "Choose a number from 1-9\nPlayer " << currentPlayer << ": ";

		getline(cin, choice);

		if (choice == "1")
		{
			applyMove(e1);
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

// Update the board with the current numbers
void updateBoard()
{
	system("cls");
	cout << "Welcome to Tic Tac Toe!\n\n";
	cout << "This is your board. Player 1 is O and Player 2 is X\n\n";
	cout << "[" << getBoardState(e1) << "]";
	cout << "[" << getBoardState(e2) << "]";
	cout << "[" << getBoardState(e3) << "]\n";
	cout << "[" << getBoardState(e4) << "]";
	cout << "[" << getBoardState(e5) << "]";
	cout << "[" << getBoardState(e6) << "]\n";
	cout << "[" << getBoardState(e7) << "]";
	cout << "[" << getBoardState(e8) << "]";
	cout << "[" << getBoardState(e9) << "]\n\n";

	takePlayerChoice();
}

// Get the state of the box on the board and make it into a char to be printed
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

// Concatenate to an integer
int toInt(string input)
{
	stringstream ss(input);

	int x = 0;
	ss >> x;

	return x;
}