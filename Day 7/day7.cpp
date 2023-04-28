#include<iostream>
using namespace std;

int main()
{

    //int a;
    // cin>>a;

    // if(a>0)
    // {
    //   cout<<"A is positive"<<endl;
    // }

    // else
    // {
    //   cout<<"A is negative"<<endl;
    // }

    // P1 to print and check a>b and b<a 

//    int a , b ;
//    cout<<"enter the value of a "<<endl;
//    cin>>a;

//    cout<<"enter the value of b "<<endl;
//    cin>>b;

//    if(a>b)
//    {
//     cout<<"A is greater"<<endl;
//    }

//  if(a<b)
//  {
//     cout<<"B is greater"<<endl;
//  }

   // P 2 print the number is positive , negative or zero
   
//    int a ;
//    cout<<"enter the number "<<endl;
//    cin>>a;
   
//    if(a>0)
//    {
//     cout<<"given number is postive"<<endl;
//    }
   
//    else if(a<0)
//    {
//     cout<<"the given number is negative"<<endl;
//    }

//    else
//    {
//     cout<<"given number is zero"<<endl;
//    }
   

 //P 3 a---z , A----Z , 0---9 --->> print lower , upper and numeric respeticvely

     char ch;
     cout<<"enter the character"<<endl;
     cin>>ch;

     if(ch>='a' && ch<='z')
     {
        cout<<"Given charcter is lower case"<<endl;
     }
    
    else if(ch>='0' && ch<='9')
    {
        cout<<"given charcter is numeric"<<endl;
    }

    else
    {
        cout<<"given charcter is upper case"<<endl;
    }

    return 0;

}