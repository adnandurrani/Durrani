#include<iostream>
using namespace std;
int main()

{
char str[20], *pt;
int i =0, c=0;
cout<<"Pointer Example C++ Program : Count vowels String \n";
cout<<"Enter Any string (small Letters) [below 20 chras] : ";
cin>>str;
pt= str;
while(*pt != '\0')
{if(*pt=='a' || *pt == 'i' || *pt == 'u')
c++;
i++;
pt++;
}
cout<<"\nLength of string : "<<i;
cout<<"\nVowels  Count in the string  : "<<c;
cout<<"\nConstant Count in the String : "<<(i-c);
return 0;
 }