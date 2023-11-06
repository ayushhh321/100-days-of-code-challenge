#include<iostream>
using namespace std;

int main()
{
    
   //declare
   int number[15];

  //accessing an array
  cout<<"element at number 10 will be some garbage value "<<number[10]<<endl;
  cout<<"element at number 11 will be some garbage value "<<number[11]<<endl;

//initialising an array
int second[3]={5,7,11};

//accessing an array
cout<<"value at 2 index "<<second[2]<<endl;

//printing an array of 15 size but only two elements
int third[15]={2,7};

int n =15;//size of array
for(int i=0; i<n ; i++)
{
  cout<<third[i]<<endl;
}

//printing array with only one elemenet or initialsing all locations with o

int fourth[10]={0};

int n=10; //size of array i mean kaha tk print krna hai loop kaha tk jyega

for(int i=0; i<n ; i++)
{
  cout<<fourth[i]<<endl;
}



  return 0;
}