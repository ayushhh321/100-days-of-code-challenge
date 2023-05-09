//Looping question l3

//check weather given number is prime or not
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i =2;

    while(i<n)
    {
        if(n%i==0){
        cout<<"NOt prime for "<< i<<endl;
        }
        else{
        cout<<"prime for "<< i<<endl;
        }
        i=i+1;
    }
    return 0;
}