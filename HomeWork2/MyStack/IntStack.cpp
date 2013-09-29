#include "IntStack.h"
#include <vector>
#include <iostream>
using namespace std;

IntStack::IntStack()
{
	
}

void IntStack::push(int value)
{
	stackVec.push_back(value);
}

void IntStack::pop()
{
	cout<<"弹出元素"<<stackVec.back()<<endl;
	stackVec.pop_back();
}

size_t IntStack::size()
{
	return stackVec.size();
}