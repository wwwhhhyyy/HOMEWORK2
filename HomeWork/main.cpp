#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void temperature_Convert(float temperature,string state)			//温度转换：fra为华氏，cel为摄氏，state判断转换方式
{
	float result;
	result=(state.find("摄氏转华氏")!=string::npos)?(9/5*temperature+32):5*(temperature-32)/9;
	cout<<state<<":"<<setprecision(2)<<result<<endl;
}

void combination(int m,int n)					//从m个元素中取n个
{
	unsigned long upper = 1;
	unsigned long down = 1;
	long result;
	if(m<n)
	{
		cout<<"错误，被取元素不能比总数大"<<endl;
		return;
	}
	for(int i=m-n+1;i<=m;i++)
		upper*=i;
	for (int j=1;j<=n;j++)
		down*=j;
	result=upper/down;
	cout<<m<<"个元素取"<<n<<"个，共有"<<result<<"种取法"<<endl;
}

long double recursion(double x,int y)				//求x的y次幂
{
	if(y<0)
	{
		cout<<"次方不能为负"<<endl;
		return -1.0;
	}
    if(y==0)		
		return 1.0;
	return x*recursion(x,y-1);
}

int main(int argc,char** argv)
{

	temperature_Convert(59,"摄氏转华氏");
	temperature_Convert(43,"华氏转摄氏");
	combination(5,2);
	double x=4.0;
	int y=4;
	cout<<x<<"的"<<y<<"次幂结果是"<<flush<<setprecision(3)<<recursion(x,y)<<endl;
	
	return 0;
}