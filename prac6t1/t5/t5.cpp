#include <bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
char a,b;
int x,d;
cout<<"enter two strings\n";
getline(cin,s1);
fflush(stdin);
getline(cin,s2);
x=s1.compare(s2);
cout<<x<<'\n';
/*cout<<"enter two characters\n";
cin>>a>>b;
d=(int)a-(int)b;
cout<<d;*/
return 0;

}
