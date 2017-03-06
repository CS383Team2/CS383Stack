#include <iostream>

using namespace std;

#include "stack.h"

const int noChoices = 4;
#define Rock     1
#define Paper    2
#define Scissors 3

int whoWon(int p1, int p2);

void LetsPlayRockPaperScissors(){
    Stack stackP1, stackP2;
    int i, j; //loop control
    char response;
    
    cout << "\n\nDo you want to play Rock Paper Scissors? (y/n): ";
    //cin >> response;
    response = 'y'; // force y for development
    if (response != 'y')
        return;
    
    
    cout << "\nRock \t\t1 or r" << endl;
    cout << "Paper \t\t2 or p" << endl;
    cout << "Scissors \t3 or s" << endl;
    cout << "Player 1 input your " << noChoices << " choices. " << endl;
    for (i = 0; i < noChoices; i++) {
        cout << "Choice #" << i << ": ";
        cin >> response;
        cout << endl;
        stackP1.push(parseResponce(response))
    }
}

int parseResponce(char c) {
    
}


/* flow
 * welcome
 * p1 choices
 * p2 choices
 * 
 * loop & test
 * display winner
 */