#include<iostream>
using namespace std;

int main()
{
   //as we know we cant use more than one variable in switch block so we can use nested switch

   char ayush = 'A';

   int num=5;

   switch(ayush)
   {
    case 5: cout<<"cant print this bcz block me char hai"<<endl;
             cout<<"can use multiple code line"<<endl;
             break;

    case 'A': switch(num){
      case 5: cout<<"now this is nesting char call krke nested swtich me num call kara diya"<<endl;
      break;
      
    }
   }
  return 0;
}