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

void reversePrint (int arr[]);

main()
{
   int reverse[5];
   int i;
   
   Stack iStack;

   cout << "Pushing integers onto iStack" << endl;

   for( i = 0 ; i < 5 ; i++ ) {
      iStack.Push(i);       // push items onto the stack
      reverse[i] = i;
      cout << i << ' ';
   }
   cout << endl;
   i = 0;
   
   cout << "Contents of iStack" << endl;
   iStack.Print();          // output the stack contents


   cout << endl << "Popping integers from iStack" << endl;

   while( !iStack.IsEmpty() )
      reverse[i++] = iStack.Pop();

   iStack.Print();          // output the stack contents


   if( iStack.IsEmpty() )
       cout << "The stack is empty" << endl;
   else
       cout << "The stack is not empty" << endl;
   
   reversePrint (&reverse);
   LetsPlayRockPaperScissors();
   return 0;
}

void reversePrint (int arr[])
{
   cout << "The reverse stack order is:" << endl;
   int z;
   
   for (z = 0; z < 5; z++)
   {
      cout << arr[z] << ' ';
   }
   cout << endl;
}
