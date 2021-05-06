#pragma once
struct customer
{
	char fullname[35];
	double payment;
};
typedef customer Item;
class Stack_
{
private:
	enum { MAX = 3 };
	Item items[MAX];
	int top;
public:
	Stack_();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item& item);
	bool pop(Item& item);
};