#include <iostream>

using namespace std;

#include "stack.h"

const int noChoices = 4;
#define Rock     1
#define Paper    2
#define Scissors 3
#define Unknown  4

int whoWon(int p1, int p2);
int parseResponce(char c);

void LetsPlayRockPaperScissors(){
    Stack stackP1, stackP2;
    int i, j; //loop control
    int temp;
    char inChar;
    
    cout << "\n\nDo you want to play Rock Paper Scissors? (y/n): ";
    //cin >> response;
    inChar = 'y'; // force y for development
    if (inChar != 'y')
        return;
    
    
    cout << "\nRock \t\t1 or r" << endl;
    cout << "Paper \t\t2 or p" << endl;
    cout << "Scissors \t3 or s" << endl;
    cout << "Player 1 input your " << noChoices << " choices. " << endl;
    for (i = 0; i < noChoices; i++) {
        cout << "Choice #" << i << ": ";
        cin >> inChar;
        cout << endl;
        temp = parseResponce(inChar);
        if (temp == Unknown) {
           cout << "Unknown response" << endl; 
           return;
        }
        else {
            stackP1.Push(temp);
            cout << "You choose: " << temp << endl; 
        }
    }
    
    for (i = 0; i < noChoices; i++) {
        cout << stackP1.Pop() << endl;
    }
}

int parseResponce(char c) {
    if (c == '1' || c == 'r')
        return Rock;
    else if (c == '2' || c == 'p')
        return Paper;
    else if (c == '3' || c == 's')
        return Scissors;
    else
        return Unknown;
}


/* flow
 * welcome
 * p1 choices
 * p2 choices
 * 
 * loop & test
 * display winner
 */