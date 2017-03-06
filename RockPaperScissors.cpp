#include <iostream>

using namespace std;

#include "stack.h"

#define Rock     1
#define Paper    2
#define Scissors 3
#define Unknown  4
#define Draw     5

const int noChoices = 4;

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
    
    // Get player 1 choices
    cout << "\nRock \t\t1 or r" << endl;
    cout << "Paper \t\t2 or p" << endl;
    cout << "Scissors \t3 or s" << endl;
    cout << "Player 1 input your " << noChoices << " choices." << endl;
    for (i = 0; i < noChoices; i++) {
        cout << "Choice #" << i << ": ";
        cin >> inChar;
        p1_choice = parseResponce(inChar);
        if (p1_choice == Unknown) {
           cout << "Unknown response. Exiting game" << endl; 
           return;
        }
        else {
            stackP1.Push(p1_choice); 
        }
    }
    
    // Get player 2 choices
    cout << "\nRock \t\t1 or r" << endl;
    cout << "Paper \t\t2 or p" << endl;
    cout << "Scissors \t3 or s" << endl;
    cout << "Player 2 input your " << noChoices << " choices." << endl;
    
    for (i = 0; i < noChoices; i++) {
        cout << "Choice #" << i << ": ";
        cin >> inChar;
        p2_choice = parseResponce(inChar);
        if (p2_choice == Unknown) {
           cout << "Unknown response. Exiting game" << endl; 
           return;
        }
        else {
            stackP2.Push(p2_choice);
        }
    }
    
    // Calcuate results
    cout << "\n\nRock \t\t1" << endl;
    cout << "Paper \t\t2" << endl;
    cout << "Scissors \t3" << endl;
    cout << "Let the best choices win!" << endl;
    cout << "=========================" << endl;
    for (i = 0; i < noChoices; i++) {
        p1_choice = stackP1.Pop();
        p2_choice = stackP2.Pop();
        cout << "P1 choice: " << p1_choice <<
                ". P2 choice: " << p2_choice << " ";
        whoWon(p1_choice, p2_choice);
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

// Logic came from cs270 rock paper scissors assignment
int whoWon(int p1, int p2) {
    
    char *temp, *word;
    int modded, diff;    // for calculation p1 - p2
    int wins, loses, tie;
    
    
    // process logic of message
    diff = p1 - p2; // player1 - player2
    
    //http://stackoverflow.com/questions/12276675/modulus-with-negative-numbers-in-c
    modded = ((diff %= 3) < 0) ? diff + 3 : diff; // complicated because of neg number
    
    // RPS has a mathmatical relation to each other.
    // test for conditions
    if (p1 == p2){ // check for tie
        tie++;
        cout << "Result: Tie!" << endl;
        return Draw;
    }
    else if (modded == 1){   // check for win
        wins++;
        cout << "Result: Player 1 wins!" << endl;
        return 1;
    }
    else if (modded== 2){    // check for lose
        loses++;
        cout << "Result: Player 2 wins" << endl;
        return 2;
    }
    else
        cerr << "Incorrect data" << endl;
    
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