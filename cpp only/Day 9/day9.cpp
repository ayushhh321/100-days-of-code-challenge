//Looping question l3

//check weather given number is prime or not
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i =2;

    while(i<n)
    {
        if(n%i==0){
        cout<<"NOt prime for "<< i<<endl;
        }
        else{
        cout<<"prime for "<< i<<endl;
        }
        i=i+1;
    }
    return 0;
}


The given code snippet has a time complexity of O(log n), where n is the input value.

The loop iterates as long as the condition "i <= n" holds true. The variable "i" is multiplied by 2 in each iteration, starting from an initial value of 1.

Let's consider the number of iterations required to reach or exceed the value of n. At each iteration, "i" is doubled, so the loop will execute log₂(n) times before "i" exceeds n.

Therefore, the time complexity of the code is O(log n).


