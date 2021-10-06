#include <iostream>
#include <string>
#define MAX 10
using namespace std;

int main() {
    //for integer
    cout<<"enter two integers\n";
  int a,b;
  cin>>a>>b;
    cout<<"sum of the above two integer\n";
  cout<<a+b<<'\n';
  
  //for float
  float c,d;
  cout<<"enter two real numbers"<<'\n';
  cin>>c>>d;
  cout<<"sum of above two real integers\n";
  cout<<c+d<<"\n";
  
  //for int and float
  cout<<"sum of the first integer and first float\n";
  cout<<a+c<<'\n';
  
  //for string
  string str1,str2,str3;
  cout<<"enter two string\n";
  while((getchar())!='\n')
  {
      getline(cin,str1);
      getline(cin,str2);
      
  }
  cout<<"concatination\n";
  str3=str1+str2;
  cout<<str3<<endl;
  
  return 0;
}

