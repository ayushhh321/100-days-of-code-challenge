   #include<iostream>
   using namespace std;

   int main()
   {
     int n;
     cout<<"enter the value of n"<<endl;
     cin>>n;

//for repepatively taking value of array
     int arrayelement[n];
     cout<<"enter array element"<<endl;
     for(int i=0; i<n ; i++)
     {
      cin>>arrayelement[i];
     }


// adding all the array element by storing its value in ans 
     int ans=0;
     for(int i=0; i<n;i++)
     {
       ans=ans+arrayelement[i];
       
     }
     cout<<"sum is"<<ans<<endl;

     return 0;
   }

   //USING FUNCTION APPRAOCH

  // #include <iostream>
  //  using namespace std;
  //  int ArraySum(int ar[], int n)
  //  {
  //    int sum = 0;
  //    for (int i = 0; i < n; i++)
  //    {
  //      sum = sum + ar[i];
  //    }
  //    return sum;
  //  }
  //  int main()
  //  {
  //    int ar[100];
  //    int size;
  //    cout << "Enter the size of array :: ";
  //    cin >> size;
  //    cout << "Enter the element of array:: ";
  //    for (int i = 0; i < size; i++)
  //    {
  //      cin >> ar[i];
  //    }
  //    cout << "Sum = " << ArraySum(ar,size);
  //  }