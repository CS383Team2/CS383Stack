/* Tim Sonnen         Lab #5
 * 9/24/2015
 *
 * testStack.cpp
 *
 * This program creates a stack.
 */

#include <iostream>

using namespace std;

#include "stack.h"
#include "RockPaperScissors.h"

main()
{
   Stack iStack;

   cout << "Pushing integers onto iStack" << endl;

   for( int i = 0 ; i < 5 ; i++ ) {
      iStack.Push(i);       // push items onto the stack
      cout << i << ' ';
   }
   cout << endl;
   
   cout << "Contents of iStack" << endl;
   iStack.Print();          // output the stack contents


   cout << endl << "Popping integers from iStack" << endl;

   while( !iStack.IsEmpty() )
      cout << iStack.Pop() << ' ';

   cout << endl;
   iStack.Print();          // output the stack contents


   if( iStack.IsEmpty() )
       cout << "The stack is empty" << endl;
   else
       cout << "The stack is not empty" << endl;

   LetsPlayRockPaperScissors();
   return 0;
}
