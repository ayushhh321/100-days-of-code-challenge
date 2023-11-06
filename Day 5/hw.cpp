//print the sum of all elements in array using functions

#include<iostream>
using namespace std;

int arraySum(int arr[], int size)
{
int sum=0;
  for(int i=0 ; i<size ; i++ )
  {
    sum=sum+arr[i];
  }
  return sum;
}

int main()
{

  cout<<"enter the size of array"<<endl;
  int sizeofarray;
  cin>>sizeofarray;

  int elements[100];
  for(int i=0; i<sizeofarray ; i++)
  {
    cin>>elements[i];
  }

  cout<<"the sum is "<<arraySum(elements,sizeofarray);

  return 0;
}