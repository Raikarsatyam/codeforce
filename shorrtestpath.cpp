#include<stack>
#include<queue>
#include<queue>
#include<set>
#include<map>
#include<cstdlib>
#include<set>
#include<unordered_map>
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

void solve(){
     int n,a,b;
     cin>>n>>a>>b;
     string s;cin>>s;
     if(b>=0){
         int c=a*n+b*n;
         cout<<c<<"\n";
     }
     else{
     int i=1,c=1;
     while(i < n){
         if(s[i-1]!=s[i])
         c++;i++;
     }
      //cout<<(a*n+b*( c/2 +1))<<"\n";
      cout<<c;
  }
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t;cin>>t;
 while(t--){
     solve();
 }
  return 0;
}