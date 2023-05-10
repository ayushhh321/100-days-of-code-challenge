//bitwise operator

#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<(~a)<<endl;
    cout<<"a^b "<<(a^b)<<endl;

    //left shift and right shift operator

    cout<<(17<<2)<<endl;
    cout<<(18<<1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(18>>1)<<endl;


    //pre-post increment and decrement

    int i =5;
    //  cout<<i++<<endl;
    //  cout<<++i<<endl;
    //  cout<<i--<<endl;
    //  cout<<--i<<endl;

  cout<<++i<<endl;
     cout<<i++<<endl;
     cout<<--i<<endl;
     cout<<i--<<endl;


   return 0;

}