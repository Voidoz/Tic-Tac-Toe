#pragma once

using namespace std;

/*
This is the matrix value chart:

ID -
[0][1][2]
[3][4][5]
[6][7][8]

Ownership -
0 = unused
1 = O
2 = X
*/

// This is the class for each box
class Box
{
    public:
        int boxID;
        int boxOwnership = 0;

        Box(int ID, int Ownership)
        {
            boxID = ID;
            boxOwnership = Ownership;
        }
};

// This is each instance of the Box class
extern Box e1(0, 0);
extern Box e2(1, 0);
extern Box e3(2, 0);
extern Box e4(3, 0);
extern Box e5(4, 0);
extern Box e6(5, 0);
extern Box e7(6, 0);
extern Box e8(7, 0);
extern Box e9(8, 0);

// These are game variables to know how everything is going
extern int currentPlayer;

extern int winningPlayer;

extern bool validChoice;