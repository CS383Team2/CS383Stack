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
    int p1_choice, p2_choice;
    char inChar;
    
    cout << "\n\nDo you want to play Rock Paper Scissors? (y/n): ";
    //cin >> response;
    inChar = 'y'; // force y for development
    if (inChar != 'y')
        return;
    
    
    cout << "\nRock \t\t1 or r" << endl;
    cout << "Paper \t\t2 or p" << endl;
    cout << "Scissors \t3 or s" << endl;
    cout << "Player 1 input your " << noChoices << " choices." << endl;
    for (i = 0; i < noChoices; i++) {
        cout << "Choice #" << i << ": ";
        cin >> inChar;
        cout << endl;
        p1_choice = parseResponce(inChar);
        if (p1_choice == Unknown) {
           cout << "Unknown response. Exiting game" << endl; 
           return;
        }
        else {
            stackP1.Push(p1_choice);
            cout << "You choose: " << p1_choice << endl; 
        }
    }
    
    cout << "\nRock \t\t1 or r" << endl;
    cout << "Paper \t\t2 or p" << endl;
    cout << "Scissors \t3 or s" << endl;
    cout << "Player 2 input your " << noChoices << " choices." << endl;
    
    for (i = 0; i < noChoices; i++) {
        cout << "Choice #" << i << ": ";
        cin >> inChar;
        cout << endl;
        p2_choice = parseResponce(inChar);
        if (p2_choice == Unknown) {
           cout << "Unknown response. Exiting game" << endl; 
           return;
        }
        else {
            stackP2.Push(p2_choice);
            cout << "You choose: " << p2_choice << endl; 
        }
    }
    
    cout << "Let the best choices win!" << endl;
    for (i = 0; i < noChoices; i++) {
        p1_choice = stackP1.Pop();
        p2_choice = stackP2.Pop();
        cout << "P1 choice: " << p1_choice <<
                ". P2 choice: " << p2_choice <<endl;
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