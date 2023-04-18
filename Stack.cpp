
/*******************************
*  Week 2 lesson:              *
*   a simple Stack class       *
*******************************/

#include "Stack.h"
#include <iostream>
using namespace std;

/*
* Constructor. Initializes the stack.
*/
Stack::Stack()
{
	top = 0;
}





/*
* Determines whether the stack is empty.
*
* Returns true if the stack is empty, false otherwise.
*/
bool Stack::isEmpty()
{
	return top == 0;
}

/*
* Adds an element to the top of the stack.
*
* x: element to be added to the stack.
*/
void Stack::push(char x)
{
	if (top >= SIZE)
	{
		cout << "ERROR: stack is full\n";
	}
	else
	{
	list[top] = x;
	top++;
	}
}

/*
* Removes the element at the top of the stack.
*/
void Stack::pop() 
{
	if (isEmpty())
	{
		cout << "ERROR: pop from empty stack\n";
	}
	else
	{
		top--;
	}
}

/*
* Returns the element at the top of the stack. Does not remove it.
*/
char Stack::peek()
{
	if (isEmpty())
	{
		cout << "ERROR: Empty stack\n";
	}
	else
	{
		return list[top - 1];
	}
}

/*
* Returns the size of the stack.
*/
int Stack::getSize()
{
	return SIZE;
}