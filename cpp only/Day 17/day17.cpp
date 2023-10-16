// scope and operator precedence

#include <iostream>
using namespace std;

int main()
{
    int q;
    cout << q << endl; // it will print any value garbage value of Q bcz q is undefined

    int a = 3;
    cout << a << endl;

    if (true)
    {
        int b = 5;
        cout << b << endl; // b=5 will be printed bcz it is into its block
    }

    int b = 1;
    cout << b << endl; // will print b=1

    int b = 3;
    cout << b << endl; // it will now create error like same block two diffrent defined values

    int i = 8;
    for (; i < 8; i++)
    {
        cout << "hi" << endl;
    }

    if (1)
    {
        int b;
        if (1)
        {
            int b;
        }
        if (1)
        {
            cout << b << endl;
        }
    }

    //     //Operator precedence in C++ determines the order in which different operators in an expression are evaluated. Some operators have higher precedence than others, which means they are evaluated first before the lower precedence operators. This can affect the outcome of an expression if the operators are not evaluated in the correct order.

    // For example, in the expression 4 + 5 * 3, the multiplication operator * has higher precedence than the addition operator +, so it is evaluated first. Therefore, the expression is evaluated as 4 + (5 * 3), which results in 19.

    // Knowing the operator precedence rules is important when writing complex expressions to ensure they are evaluated correctly. Parentheses can also be used to modify the precedence order of operators in an expression

    return 0;
}