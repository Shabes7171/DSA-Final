//petrol pump q:
#include<bits/stdc++.h>
using namespace std;
int tour( vector<pair<int, int>> p, int size)
{
     int bal=0;
     int start=0;
     int deficit=0;
     for(int i=0; i<size; i++)
     {
          bal+=p[i].first-p[i].second;
          if(bal<0)
          {
          deficit+=bal;
          start=i+1;
          bal=0;
          }
     }
     if(deficit+bal>=0)
     {
          return start;
     }
     else{
          return -1;
     }
}
int main()
{
     vector<pair<int, int>> p = {{4, 6}, {6, 5}, {7, 3}, {4, 5}};
     int size=p.size();
     cout<<tour(p, size)<<endl;
     return 0;
}