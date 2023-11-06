//this can be also done using pre defined function max() and min() for that you have to include <cmath> libraray

#include<iostream>
using namespace std;

//as we know int has range of -2^31 to 2^31

int getMax(int arr[], int size)
{
  int max = INT_MIN;  //phle hi maan lo max min sare value se Equal hai
  for(int i=0 ; i<size ; i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
  return max;
}

int getMin(int arr[], int size)
{
  int min=INT_MAX; //phle hi maan lo min max ke saare value se equal hai
  for(int i=0 ; i<size; i++)
  {
    if(arr[i]<min){
      min=arr[i];
    }
  }
  return min;
}

int main()
{
  
  int arraySize;
  cin>>arraySize;

  //int ArrayMain[size]//dont do this bad practice

  //question me arraySize ki range di hogi usi range ko use kro ArrayMain ke liye lets say 15 diya hai

  int ArrayMain[15];
  //now user se array me input lena hoga 15 times so loop chala do to take input in array

  for(int i=0 ; i<arraySize ; i++)
  {
    cin>>ArrayMain[i];
  }

cout<<"max element in array is "<<getMax(ArrayMain,arraySize)<<endl;
cout<<"min element in array is "<<getMin(ArrayMain,arraySize)<<endl;



  return 0;
}