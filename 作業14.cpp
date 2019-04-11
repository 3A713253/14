#include <iostream>
using namespace std ;
int a, b,c;
int main (int argc,char** argv)
{
	cout<<"三角形的三邊長一定滿足任兩邊邊長和大於第三邊，輸入三邊，判斷是否可圍成三角形 "<<endl;
	cin>> a;
	cin>> b;
	cin>> c;
	if(a+b>c)
	{
		if(a+c>b)
		{
			if(b+c>a)
			{
				cout<<"可圍成三角形"<<endl;
			}
		}
	}
	else
	{
		cout<<"不可圍成三角形"<<endl;
	}
		system("pause");
		return 0;
}
