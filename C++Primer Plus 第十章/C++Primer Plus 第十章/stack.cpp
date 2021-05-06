#include "stack.h"
Stack_::Stack_()
{
	top = 0;
}
bool Stack_::isempty()const
{
	return top == 0;
}
bool Stack_::isfull()const
{
	return top == MAX;
}
bool Stack_::push(const Item& item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack_::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}