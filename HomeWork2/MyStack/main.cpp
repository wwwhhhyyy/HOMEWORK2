#include "IntStack.h"
#include <iostream>
using namespace std;

int main(int argc,char **argv)
{
	IntStack stack;
	cout<<"输入数据（int，以空格分隔，输入除int外其他字符结束）:"<<endl;
	int data;
	while(cin>>data)
	{
		stack.push(data);
	}
	cin.clear();
	cin.ignore();
	int size = stack.size();
	cout<<"栈大小为"<<size<<endl;
	cout<<"弹出操作："<<endl;
	for(int i=0;i<size;i++)
	{
		stack.pop();
	}

	return 0;
}