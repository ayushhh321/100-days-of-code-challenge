//problem 1 - 1-9 print in lowercase and apart from this write the even odd


// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// /*For Loop Hackerrank Solution in C++*/

// int main()
// {
// 	int num1, num2;
// 	cin >> num1 >> num2;
// 	string Arr1[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

// 	for (int i = num1; i <= num2; i++)
// 	{
// 		if (i <= 9)
// 		{
// 			cout << Arr1[i - 1] << endl;
// 		}
// 		else
// 		{
// 			if (i % 2 == 0)
// 			{
// 				cout << "even" << endl;
// 			}
// 			else
// 			{
// 				cout << "odd" << endl;
// 			}
// 		}
// 	}

// 	return 0;
// }

#include<iostream>
using namespace std ;

int main()
{
	int n;
	cout<<"write your number"<<endl;
	cin>>n;

	 if(n==1)
	 {
		cout<<"one"<<endl;
	 }
	 else if(n==2)
	 {cout<<"two"<<endl;}
     
	 else if(n==3)
	 {cout<<"three"<<endl;}

	 else if(n==4)
	 {cout<<"four"<<endl;}

	 else if(n==5)
	 {cout<<"five"<<endl;}

	 else if(n==6)
	 {cout<<"six"<<endl;}

	 else if(n==7)
	 {cout<<"seven"<<endl;}

	 else if(n==8)
	 {cout<<"eight"<<endl;}

	 else if(n==9)
	 {cout<<"nine"<<endl;}
     
     else
	 {
		cout<<"Greater than 9"<<endl;
	 }

    return 0;
}