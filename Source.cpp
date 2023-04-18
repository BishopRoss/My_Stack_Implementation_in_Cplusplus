/*******************************
*  Week 2 lesson:              *
*   a simple Stack class       *
*******************************/
//AN IMPROVED STACK CLASS
/*
Three additional conditions have been added. 
Two error conditions for the peek and pop functions if the stack is empty, 
and one more error condition for the push function if the stack is full
*/
#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
	Stack s;
	s.pop();
	s.peek();
	cout << "Insertion of 10 characters in s" << endl;
	
	
	for (int i = 0; i <s.getSize(); i++)
	{
		char x = 32 + rand() % 95;
		cout << x << endl;
		s.push(x);
	}
	s.push('y');
	s.push('m');
	s.push('z');
	s.push('u');
	s.push('T');

	cout << endl
		<< "Displaying and deleting elements from s" << endl;
	while (!s.isEmpty())
	{
		cout << "Item at the top: " << s.peek() << endl;

		s.pop();
	}

	s.pop();
	s.peek();
	return 0;
}