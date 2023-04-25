#include<iostream>
using namespace std;

int main()
{
    cout << "namaste duniya"<<endl;
    int a=122;
    cout<<a<<endl;

    char b = 'q' ;
    cout<<b<<endl;   

    float c=1.2;
     cout<<c<<endl;  

    bool d=true;
    cout<<d<<endl;  

    double e =1.23;
    cout<<e<<endl;    

    //sizeof using to know which data type holding how much byte in memory

   int size= sizeof(e);
   cout<<"size of e is : "<<size<<endl;

  // typecasting
     int f='f';
     cout<<f<<endl;

    char ch=98;
    cout<<ch<<endl;

    char ch1=123455; //gives error check explanation in copy
    cout<<ch1<<endl;

    unsigned int w=12;
    cout<<w<<endl;

    unsigned int q = -12; //gives error check explanation in copy
    cout<<q<<endl;

   //operators core concept

   int r= 34/4;
 cout<<r<<endl;  //will give int value


  float abc=2.3/4;
  cout<<abc<<endl; //will give float value

  


    return 0;
}