// // // problem 1 - 1-9 print in lowercase and apart from this write the even odd

// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <iostream>
// // #include <algorithm>
// // using namespace std;

// // /*For Loop Hackerrank Solution in C++*/

// // int main()
// // {
// // 	int num1, num2;
// // 	cin >> num1 >> num2;
// // 	string Arr1[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

// // 	for (int i = num1; i <= num2; i++)
// // 	{
// // 		if (i <= 9)
// // 		{
// // 			cout << Arr1[i - 1] << endl;
// // 		}
// // 		else
// // 		{
// // 			if (i % 2 == 0)
// // 			{
// // 				cout << "even" << endl;   
// // 			}
// // 			else
// // 			{
// // 				cout << "odd" << endl;
// // 			}
// // 		}
// // 	}

// // 	return 0;
// // }

// // // problem 2 - 1-9 write in lowercase and for greater than 9 print greater than 9
// //  #include<iostream>
// //  using namespace std ;

// // int main()
// // {
// // 	int n;
// // 	cout<<"write your number"<<endl;
// // 	cin>>n;

// // 	 if(n==1)
// // 	 {
// // 		cout<<"one"<<endl;
// // 	 }
// // 	 else if(n==2)
// // 	 {cout<<"two"<<endl;}

// // 	 else if(n==3)
// // 	 {cout<<"three"<<endl;}

// // 	 else if(n==4)
// // 	 {cout<<"four"<<endl;}

// // 	 else if(n==5)
// // 	 {cout<<"five"<<endl;}

// // 	 else if(n==6)
// // 	 {cout<<"six"<<endl;}

// // 	 else if(n==7)
// // 	 {cout<<"seven"<<endl;}

// // 	 else if(n==8)
// // 	 {cout<<"eight"<<endl;}

// // 	 else if(n==9)
// // 	 {cout<<"nine"<<endl;}

// //      else
// // 	 {
// // 		cout<<"Greater than 9"<<endl;
// // 	 }

// //     return 0;


// // chcek weather the given no. is prime or not using for loop

// #include <iostream>
// using namespace std;

// int main()
// {
//     // method 1 isase kya hoga ki i ki saari value n tk pata chal jyegi kisase prime hai kisase nai hai
//     int n;
//     cout << "enter the value of n " << endl;
//     cin >> n;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "not prime"<< endl;
//             break;
//         }

//         else
//         {
//             cout << "prime for" << endl;
//             break;
//         }
//     }
// }


#include<iostream>
using namespace std;


string sentence
       {
        if (sentence.size()==26)
        {
            return true
        }
        else{
           return false
    }
    
};