//Beautiful Matrix
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int arr[5][5];
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      cin>>arr[i][j];
      if(arr[i][j]==1)
      {
        cout<<abs(i-2)+abs(j-2);
      }
    }	
  }
}	

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
