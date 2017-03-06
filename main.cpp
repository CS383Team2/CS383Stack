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

void reversePrint (int arr[]);

main()
{
   reverse[5];
   
   Stack iStack;

   cout << "Pushing integers onto iStack" << endl;

   for( int i = 0 ; i < 5 ; i++ ) {
      iStack.Push(i);       // push items onto the stack
      reverse[i++] = i;     // Store values into the reverse array as they are added to the stack
      cout << i << ' ';
   }
   cout << endl;
   i = 0;                   // Reset counter to fill array with reverse order.
   
   cout << "Contents of iStack" << endl;
   iStack.Print();          // output the stack contents


   cout << endl << "Popping integers from iStack" << endl;

   while( !iStack.IsEmpty() )
      reverse[i++] = iStack.Pop();
      
   cout << endl;
   iStack.Print();          // output the stack contents


   if( iStack.IsEmpty() )
       cout << "The stack is empty" << endl;
   else
       cout << "The stack is not empty" << endl;
   
   reversePrint (&reverse);
   
   return 0;
}

void reversePrint (int arr[])
{
   cout << "The reverse stack order is:" << endl;
   int j;
   for (j = 0; j < 5; j++)
   {
      cout << arr[j] << ' ';
   }
   cout << endl;
}
