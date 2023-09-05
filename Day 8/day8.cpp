//looping L3

#include<iostream>
using namespace std;

int main()
{
    //print 1 to n
    int n ;
    cin>>n;

    int i = 1; //bcz ginti 1 se start krni hai n tk jaha tk chaiye humko

    while(i<=n) 
    {
        cout<<i<<endl;
        i=i+1;  // age badhne ke liye add krna hoga
    }
    
    // print sum of 1 to n numbers
     

     
    int x;
    cin>>x;

    int I=1; //starting point
    int sum=0; //starting point

    while(I<=x)
    {
        sum=sum+I;
        I=I+1;      // see this logic in copy how and why they are written like this
    }

    cout<<"the value of sum is "<<sum<<endl;



    return 0 ;
}