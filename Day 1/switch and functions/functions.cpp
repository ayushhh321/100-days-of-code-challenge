#include<iostream>
using namespace std;

int power(){
  int a , b;
cin>>a>>b;
 
int ans=1;

for(int i=1; i<=b ; i++){
  ans=ans*a;
}
return ans;

}

int main()
{
  //upar sara maths karaye niche aake bas funciton call kr diye

  int ans=power();
cout<<"the result is"<<ans<<endl;
  return 0;
}
