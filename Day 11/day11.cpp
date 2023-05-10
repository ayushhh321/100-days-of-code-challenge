#include<iostream>
using namespace std;

int main()
{
    
   int a , b =1; // value of a will not be considered bcz wo garbage value lega
  a=10;

  if(++a)//if 11 this means true hai 11 ko true bolenge bcz 1 hai toh wo loop me entry krega and b ki value dediya
  {
    cout<<b;
  }

  else{
    cout<<++b;
  } 
   

   


 


    return 0;
}