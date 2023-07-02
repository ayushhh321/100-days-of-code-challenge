// write code to chc

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter ur number" << endl;
    cin >> n;


//here we can see we dont need loop for chceking even odd

    for (int i = 0; i <= n; i++)

    //to handle for loop in conditional statement we have to use break and continue statement also .
    {
        if (n % 2 == 0)
        {
            cout << "Given number is even" << endl;
            break;
        }
        else
        {
            cout << "Given number is odd" << endl;
            break;
        }
    }

    return 0;
}

//question -- Smallest Even Multiple

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0){
            return n;
        }
        else{
            return 2*n;
        }
    }
};


