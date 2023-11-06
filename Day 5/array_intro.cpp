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

//initalising all locations with 1 [not possible with below line use fill_n for that]
int fifth[10]={1};

int n=10; //size of array

for(int i=0 ; i<n ; i++)
{
  cout<<fifth[i]<<endl;
}

  return 0;
}

//now writinh the wholw code using functions

#include<iostream>
using namespace std;


void printArray(int arr[], int size)
{
  cout<<"this function helps in printing the array"<<endl;
  for(int i=0 ; i<size ; i++)
  {
    cout<<arr[i]<<endl;
  }
  cout<<"printing done"<<endl;
}

int main()
{
   //printing array1 using function calling like upar fucntion me you have already defined ki parameter kya honge like ek array hoga and ek int number hoga jo array ka size hoga so niche aake normal function call
   int array1[10]={2,3};

   int n =10; //size of array
   printArray(array1 , 10);

   cout<<"done"<<endl;

//same with another example

int array2[15]={2,3,4};

int y=15;
printArray(array2,15);


  return 0;
}