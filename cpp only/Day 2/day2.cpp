/*constants , manipulators and operator precedence*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    /*int a =5;
    cout<<"enter the vale of a "<<a<<endl;
    a =6;
    cout<<"enter the vale of a is "<<a<<endl;
    
    /*see yaha pr hum a ke do values liye fir dono ko print karane ke liye cout liye no issues do a ke values print hore
    but we want ki a ki value constant hojaye toh we use Constant in c++ and the keyword for that is const (data type)*/



    const int a = 7;

    cout<<"the value of a is "<<a<<endl;

    // a=3;
/*now yaha upar wale a me error ayega bcz upar hum const fix kr chuke hai isiliye hume age nai badhne dega had to 
delete this abhi comment kr de rhe tum run krke dekh lena revison ke time*/

    cout<<"the value of a is "<<a<<endl;

    /*Manipulators are used to formating data display commonly used manipulators are endl and setw(used for right justify
    the result for using setw we have to include anotther header file called iomanip) this setw is generally used for 
    formatting and justifying text to right*/

     int x=4 , y=33 , z=3444;

    cout<<"the value of x without setw is "<<x<<endl;
    cout<<"the value of y without setw is "<<y<<endl;
    cout<<"the value of z without setw is "<<z<<endl;

    cout<<"the value of y with setw is "<<setw(4)<<y<<endl;
    cout<<"the value of z with setw is "<<setw(4)<<z<<endl;
    cout<<"the value of x with setw is "<<setw(4)<<x<<endl;

    /*operator precendce - basically function likhne hote hai isme visit this wesbite to know kis symbol(+ - *) ka kunsa bracket lgta watch video
    to revise*/ 

    int a= 4 , b=3;
    //int c = (a*5)+b;

    int c = ((((a*5)+b)-45)+87);
    
    return 0;
}

/*c++ control structures , if else and switch case statement*/

//read theory and synatx in copy

#include<iostream>

using namespace std;

int main()
{
    //1 . selection control structure if else ladder

    int age;
    cout<<"tell me ur age"<<endl;
    cin>>age;

        if ((age<18) && (age>0)){  //if agar age 0 se leke 18 ke nich hui (if)
        cout<<"you can not come to my party"<<endl;
        }

        else if (age==18){   //agar age 18 hui toh (and)
            cout<<"you are a kid and you will get a kid pass to the party"<<endl;
        }

        else if (age<1){  //agar age 1 se choti hui mns 0 hui (and)
            cout<<"you are not yet born"<<endl;

        }
        
        else{   // agar age 18 se badi hui toh (or)
            cout<<"you can come to my party"<<endl;
        }
        //this means we have taken all the conditions

     

     //2. selection control strcuture : switch case statements
     /*here also we are using switch boiler plate for switch case statement*/
      switch (age)
      {
      case 18:
      cout<<"you are 18"<<endl;
      break;

      case 22:
      cout<<"you are 22"<<endl;
      break;

      case 33:
      cout<<"you are 33"<<endl;
      break;

      default:
      cout<<"done with switch case"<<endl;

        break;
      }

      //to run any control strcutucte you have to comment uske phela wala control structure

     return 0;
}


/*for, while and do-while loops in c++*/
#include<iostream>
using namespace std ;

int main()
{

    cout<<"testing"<<endl;
    
    /*Loops in c++ actually loop means repeatdely doing same action 
    there are 3 types of loops :
    1 . for loop
    2. while loop
    3. do-while loop*/

    /*for loop in c++
    int i=1 ;
    cout<<i ; 
    i++;     */

    //syntax for For loop
    /* for(initialization ; condition ; updation) niche dekho codee and relate kro
    {
        loop body(c++ code);
    } */

    // code to print number till 40 using For loop
    /* for (int i=1; i<=40; i++)
        {
            cout<<i<<endl;
        }*/


    // Example of infinite For loop
    /*for (int i=1; 34<=40; i++)
    {
        cout<<i<<endl;
    } */


    //While loop in c++
    //syntax:
    /*while(condition)
    {
        c++ statements:
    }*/


   //printing 1 to 40 using while loop
   /*int i=1;
   while(i<=40);
   {
    cout<<i<<endl;
    i++;

   }*/

   //example of infinite while loop
   /*int i=1;
   while(true);
   {
    cout<<i<<endl;
    i++;

   }*/

   
   //Do while loop in c++ 
   /*syntax:
   do 
   {
     c++ statments
   }while (conditions); */

   //printing 1 to 40 using do while loop
   /*int i=1;
   do
   {
    cout<<i<<endl;

   }while(false);*/




    return 0;
}

//break and continue statements in c++

/*break mns kite no. ka loop ho uss particular if par uss loop se exit krdo and loop ko bhi khatam
krdo and continue means jitte ka loop ho usko continue kro uss particular if ko ignore krke agee ki
iteration continue kro */

#include<iostream>
using namespace std;

int main(){

    /*for (int i = 0; i<4 ; i++)
    {
        cout<<i<<endl;
        if(i==2){
            break;
        }
    } */ 

    for (int i=0; i<=10 ; i++)
    {
       
        if(i==2){
            continue;
        }

        
         cout<<i<<endl;
    }  

    /*just for me 

for (int i=0; i<=10 ; i++)
    {
       
        if(i==2){
            continue;
        }

        else if(i==7){
            break;
        }
    return 0;
         cout<<i<<endl;*/

         return 0;
    }  


  //Pointers in c++

/* A pointer is a  data type which holds the address of other data type just samjho is topic
me kya hota ki ek data type dusre data type ka address (tumhre laptop me) and uska value 
store krke rakhta hai . The "&" operator is "address off" operator (iska use krke address
nikal skte and isi me address store krte) and the "*" operator is called "value at" 
dereference operator (iska use krke value nikal skte uss address ka)*/

#include<iostream>
using namespace std;

int main()
{
     int a=3;
     int *b=&a ; //{here also b=&a}(storing a ka value* at b and address also at b&)

     //&-->(address of) operator 
     cout<<"the address of a is "<<&a<<endl;
     cout<<"the address of a is "<<*b<<endl; //also aise bhi bcz *b=&a

     //*----->(value at) dereference operator
     cout<<"the value at b is "<<*b<<endl;

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
    
    
#include<iostream>
using namespace std;

int main()
{
  //1st way to create an array 
  int marks[]={23,45,56,89};

  cout<<marks[0]<<endl;
  cout<<marks[1]<<endl;
  cout<<marks[2]<<endl;
  cout<<marks[3]<<endl;

  //2nd way to create/represent an array

  int mathmarks[4];
  mathmarks[0]=2278;
  mathmarks[1]=738;
  mathmarks[2]=378;
  mathmarks[3]=578;

 cout<<"these are mathmarks "<<mathmarks[0]<<endl;//aise bhi likh skte but niche wala is jada nice looking
 

//we can change the valuue of an array in middle of code using array name and specify tha value

 mathmarks[2]=544;//value of mathmarks[2] changed before printing
 cout<<mathmarks[0]<<endl;
 cout<<mathmarks[1]<<endl;
 cout<<mathmarks[2]<<endl;
 cout<<mathmarks[3]<<endl;
 
 //printing the array using for loop

 for (int i = 0 ; i<4 ; i++)
  {
    cout<<"the value of mathmarks "<<i<<" is "<<mathmarks[i]<<endl; 
  }

  //pointers in array
  int *p=marks;
  
  cout<<*(p++)<<endl;
  cout<<*(++p)<<endl;//p++ ke karan jump krke 45 pr aagya now ++ kra toh 56 aya now print kra 
  
 cout<<"the value of *p is "<<*p<<endl;  
 cout<<"the value of *(p+1) is "<<*(p+1)<<endl; 
 cout<<"the value of *(p+2) is "<<*(p+2)<<endl; 
 cout<<"the value of *(p+3) is "<<*(p+3)<<endl; 
  return 0;

}     






