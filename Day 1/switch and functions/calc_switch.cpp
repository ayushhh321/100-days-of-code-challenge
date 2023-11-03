#include<iostream>
using namespace std;

int main()
{
  
  int a ;
cout<<"enter the values of a"<<endl;
  cin>>a ;
  
  int b;
  cout<<"enter the values of b"<<endl;
  cin>>b;


  char operation;
  cout<<"enter the operaition"<<endl;
  cin>>operation;

  switch(operation)
  {
    case '+': cout<<(a+b)<<endl;
              break;

    case '-': cout<<(a-b)<<endl;
                break;

    case '*': cout<<(a*b)<<endl;
    break;

    case '/': cout<<(a/b)<<endl;
    break;

    case '%': cout<<(a%b)<<endl;
    break;

    
  }
  return 0;
}
