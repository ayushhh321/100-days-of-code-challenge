 //input = [2,3,5,2,5]
 //output=[3,2,2,5,5]

#include<iostream>
using namespace std;

void printarray(int arr1[], int size){
  for(int i =0 ; i<size ; i++)
  {
    cout<<arr1[i]<< " " ; 
  }
}

 void swapAlternates(int arr[], int size){
  for(int i =0 ; i<size ; i+=2)//i+=2 mns i=i+2  bcz i 0 se start hora next time 1+2 hoga tab hi index 3 pr jake swap krega
  {
    if(i+1<size){
      swap(arr[i], arr[i+1]);
    }
  }
 }

int main()
{

  int evenarray[8]={2,4,5,2,6,2,7,4};
  int oddarray[5]={3,5,2,8,44};
  swapAlternates(evenarray, 8);
  printarray(evenarray,8);//to print the swaped array we have to print the array

  cout<<endl;

  swapAlternates(oddarray,5);
  printarray(oddarray,5);


  return 0;
}

