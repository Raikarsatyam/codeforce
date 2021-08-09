#include<stack>
#include<queue>
#include<queue>
#include<set>
#include<map>
#include<set>
#include<unordered_map>
#include<cmath>
#include<set>
#include<vector>
#include<list>
#include<utility>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define f(i,a,b) for(int i=a;i<b;i++);
#define MOD 1e9+7

int32_t main(){
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
  int n,e;cin>>n>>e;
  vector<int>g[n+1];
  vector<int>indegree(n+1,0);
  for(int i=0;i<e;i++){
    int x,y;cin>>x>>y;
    g[x].push_back(y);
    indegree[y]++;
  }
  queue<int>q;
  vector<int>ans(n+1,0);
  for(int i=1;i<=n;i++){
    if(indegree[i]==0)
    q.push(i);
    ans[i]=1;
  }
  while(!q.empty()){
    int val=q.front();
    q.pop();
    for(auto&i:g[val]){
      indegree[i]--;
      if(indegree[i]==0){
       ans[i]=ans[val]+1;
       q.push(i);
    }
    }
  }
  for(int i=1;i<=n;i++) 
  cout<<ans[i]<<" ";
  return 0;
}