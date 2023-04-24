#include<iostream>
using namespace std;
 int main()
 {
    int a=3;
    int *b=&a;
    //pointer to pointer
     /*iska mtlb ek pointer (new banega abhi) usme dusre(last pointer already existed) pointer
     ka address and value store karayega and ye second pointer hai i mean pointer ke andar
     pointer hau jo do star lagega*/

     int **c=&b; //{here also c=&b}(**c ka mtlb ek star mtlb isme * pr *c ko store kara hai isiliye 3rd line me value at c is *c)
     cout<<"the address of b is "<<&b<<endl;
     cout<<"the address of b is "<<c<<endl;
     cout<<"the value at c is "<<*c<<endl;
     cout<<"the value at address value at(address vale at c) is "<<**c<<endl;

    return 0;
 }