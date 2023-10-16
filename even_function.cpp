#include<iostream>
using namespace std;

bool IsEven( int n){
  //this n is taken for calculation of even or odd
  // int n;
  //cin>>n;

//0-even 1-odd
  if(n%2==0){
    return 1;
  }
  else{
    return 0;
  }
}


int main(){
//this num is taken for cin of user
int num;
cin>>num;

if(IsEven(num)){ //yaha wala num upar function me jaake check hora upar wale int n se replace hoke this shows naam not matter
  cout<<"no. is even"<<endl;
}
else{
  cout<<"no. is odd"<<endl;
}
return 0;
}