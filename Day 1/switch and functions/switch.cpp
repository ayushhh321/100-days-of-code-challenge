#include <iostream>
using namespace std;

int main()
{

  int num = 2;
  //testing with char exampple

  char ayush='a';

  //switch statement block always contaion only one varaible
  //switch (num, ayush)

  switch(ayush){
  case 'a':
  {
    cout << "this line printed bcz char ayush character  matched" << endl;
    break;
  }

  case 3:
  {
    cout << "two bcz int num parameter matched" << endl;
    break;
  }

  case 2:
  {
    cout << "two bcz int num parameter matched" << endl;
    break;
  }

  default:
  {
    cout << "default bcz kisi bhi case se int num wala paramemter match nai kre" << endl;
  }
  }

  return 0;
}