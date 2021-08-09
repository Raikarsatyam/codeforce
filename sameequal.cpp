#include<stack>
#include<queue>
#include<queue>
#include<set>
#include<map>
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
void solve()
{
    int n,m,sum=0,sum1=0;cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<m;i++)
    cin>>b[i];
    for(int i=0;i<n;i++)
    sum+=a[i];
    for(int i=0;i<m;i++)
    sum1+=b[i];
    if(sum!=sum1){
        cout<<"-1"<<"\n";
    }
    else{
        for(int i=0)
    }
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int t;cin>>t;
 while(t--)
 {
     solve();
 }
  return 0;
}