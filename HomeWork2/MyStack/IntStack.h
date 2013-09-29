#ifndef INTSTACK_H
#define INTSTACK_H

#include <vector>
#include <iostream>
using namespace std;
class IntStack
{
public:

	IntStack();
	void pop();
	void push(int value);
	size_t size();

private:
	vector<int> stackVec;
};

#endif