#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  vector<int> ans={2,1,8,4,5};

  sort(ans.begin(),ans.end());

  for(int i=0 ; i<ans.size(); i++)
  {
    cout<<ans[i]<< " " ;
  }

  return 0 ;
}

//this how you can sort array in descending order
// std::sort(nums.begin(), nums.end(), std::greater<int>());

//this how you can sort array in ascending order
//sort(ans.begin(),ans.end());