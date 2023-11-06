//print the sum of all elements in array

#include<iostream>
using namespace std;

int main()
{
  int sizeofarray;
  cin>>sizeofarray;

  int elements[100];
  for(int i=0; i<sizeofarray ; i++)
  {
    cin>>elements[i];
  }

  int sum=0;
  for(int i=0 ; i<sizeofarray ; i++ )
  {
    sum=sum+elements[i];
  }

 cout<<"the sum is "<<sum<<endl;

  return 0;
}