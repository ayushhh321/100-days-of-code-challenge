//chcek weather the given no. is prime or not using for loop  

#include<iostream>
using namespace std;

int main()
{
    // method 1 isase kya hoga ki i ki saari value n tk pata chal jyegi kisase prime hai kisase nai hai
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