#include<iostream>
using namespace std;


int factorial(int n){
    int fact=1;
    for(int i=1; i<=n ; i++){
      fact=fact*i;
    }
   return fact;
  }

  int nCr(int n,int r){
    //jab aise value daal ke function me pass karayenge toh data type dalne ki zaruarat ni hai
    int numer=factorial(n);
    int deno=factorial(r)*factorial(n-r);

    int nCr=numer/deno;

    return nCr;
  }

int main()
{
  int n ,r;
  cin>>n>>r;

  cout<<"the values is"<<nCr(n,r)<<endl;



  return 0;
}

//ubnderstand the flow of function call