#include<iostream>
#include<string>
using namespace std;

int main()
{
string str="Hello";
cout<<"orignal string is :\n";
cout<<str<<endl;
cout<<&str<<'\n';
str[0]='J';
cout<<&str<<'\n';
cout<<str<<endl;

return 0;
}

