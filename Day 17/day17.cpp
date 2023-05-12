//scope and operator precedence

#include<iostream>
using namespace std;

int main()
{
    int q;
    cout<<q<<endl;//it will print any value garbage value of Q bcz q is undefined
 
    
    int a =3;
    cout<<a<<endl;

    if(true)
    {
        int b=5;
        cout<<b<<endl;//b=5 will be printed bcz it is into its block

    }

    int b=1;
    cout<<b<<endl;//will print b=1

    int b=3;
    cout<<b<<endl;//it will now create error like same block two diffrent defined values

     int i=8;
     for(; i<8;i++)
     {
        cout<<"hi"<<endl;
     }   
    
    
    
    
    return 0;
}