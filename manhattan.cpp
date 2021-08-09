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

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 cout.tie(NULL);
 int n,k;cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
  cin>>a[i];
 }
 cin>>k;
 int b[k];
 for(int i=0;i<k;i++){
  cin>>b[i];
 }
 int count=0,c=0;
 for (int i = 0; i < k; i++)
 {
   for (int j = 0; i < n; j++)
   {
     if(b[i]==a[j]){
     count++;
     break;
     }
      else count++;
   }
 }
 for (int i = 0; i < k; i++)
 {
   for (int j = n-1; i >= 0; j--)
   {
     if(b[i]==a[j]){
     c++;
     break;
     }
     else c++;
   }
 }
 cout<<count<<" "<<c<<"\n";
  return 0;
}