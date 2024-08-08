#include<iostream>
using namespace std;
void slash()
{
	for(int i=1;i<=45;i++)
	{cout<<"_";
	}
}
void  equal()

{for (int j=1;j<=45;j++)
{cout<<"=";
}
}
int main()
{
	equal();
	cout<<endl<<"Data  type  range"<<endl;
	slash();
	cout<<"CHAR\t -128"<<"float 23"<<endl;
	equal();
	return 0;
}
