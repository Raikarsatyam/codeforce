#include<stack>
#include<queue>
#include<queue>
#include<set>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
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

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 ll t;cin>>t;
 while(t--){
  ll n,k,p,ans=0;cin>>n>>p>>k;
  int x=p%k;
  x=x-1;
  int y=(n-1)-((n-1)/k)*k;
  if(x+1>k){
    ans+=(y+1)*((n-1)/k + 1) + (x-y)*(n-1)/k;
  }else{
    ans+=(x+1)*((n-1)/k + 1);
  }
  for(int i=x+1;i<n;i=i+k){
    ans=ans+1;
    if(i==p)
    break;
  }
  cout<<ans<<"\n";
 }
  return 0;
}