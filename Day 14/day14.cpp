//adding sum of 1 to n using for loop

#include<iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"enter the vlaue"<<endl;
    cin>>n;

   int sum=0;

   for(int i=1 ; i<=n ;i++)
   {
    sum=sum+i;

    
   }
    
    cout<<sum<<endl;
    
    
    
    
    
    
    return 0;

}
