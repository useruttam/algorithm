
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
ll md = 1e9+7;
ll inf=1e16;
#define pb push_back
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vii;
typedef vector<pair<ll, ll>> vll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef unsigned long long ull;
#define mp make_pair
#define ull unsigned long long
#define pqs priority_queue<int,vi,greater<int> >
#define setbits(x) __builtin_popcountll(x)
#define dbg(x) cerr<<#x<<" = "<<x<<endl
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<pll,null_type, less<pll> ,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
 
 ll dp[100000][501];
 ll solve(int target,int n){
	 if(target==0)return 1;
	 if(n<=0 || target <0)return 0;
	 if(dp[target][n]!=-1)return dp[target][n];
	 return dp[target][n]=(solve(target,n-1)+solve(target-n,n-1))%md;

 }

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;cin>>n;
memset(dp,-1,sizeof(dp));
int sum=n*(n+1)/2;
if(sum%2!=0){
	cout<<"0";
}
else {
	int target=sum/2;
	cout<<solve(target,n)/2;
}

return 0;
}
