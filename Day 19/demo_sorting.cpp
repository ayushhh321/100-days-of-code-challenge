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
