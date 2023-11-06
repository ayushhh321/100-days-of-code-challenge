#include<iostream>
using namespace std;

void reversearray(int arr[], int n)
{
  int start=0; //0 is index 1 and n-1 is last index
  int end=n-1;   //n is size of array 

  while(start<=end)
  {
    swap(arr[start], arr[end]);  //start and end contains index of array
    start++;
    end--;  // see copy for approach
  }
}

void printArray(int arr[], int n)
{
  for(int i=0; i<n ; i++)
  {
    cout<<arr[i]<<endl;
  }
}

int main()
{
   
  int evenarr[6]={3,8,-3,4,0,7};
  int oddarr[5]={5,9,0,5,-1};

  cout<<"normal arrray is " << printArray(evenarr,6);
  cout<<"reverse array of even array " << reversearray(evenarr,6);

  cout<<"normal arrray is " << printArray(oddarr,6);
  cout<<"reverse array of odd array " << reversearray(oddarr,6);









  return 0;
}