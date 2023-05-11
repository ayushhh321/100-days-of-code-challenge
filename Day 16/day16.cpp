//chcek weather the given no. is prime or not using for loop  

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;

    for(int i =2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            cout<<"not prime for "<<i<<endl;

        }
        
        else{
            cout<<"prime for "<<i<<endl;
        }
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}