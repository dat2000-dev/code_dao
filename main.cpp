/* by coder ITGroup */
#include "bits/stdc++.h"
#define MAX 1e9
#define F first
#define S second
#define REP(n) for(int i=0;i<n;++i)
#define all(a) a.begin,a.end

using namespace std;

typedef vector<int,int> VI;
typedef vector<long,long> VL;
typedef map<int,int> MI;
typedef map<long,long> ML;
int64_t n,x,y;

void test(){
   /* Data */


}

int main(){

	cin>>n>>x>>y;
	   int64_t a[n];
	   for(int64_t i=1;i<=n;++i){
		cin>>a[i];
	   }
	   for(int64_t i=1;i<=n;++i)
	   {
		int t=1;
		for(int j=1;i-j>0&&j<=x;++j)  if(a[i]>=a[i-j]) t=0;
		for(int j=1;i+j<=n&&j<=y;++j)  if(a[i]>=a[i+j]) t=0;
		if(t)
		{
			cout<<i<<endl;
			return 0;
		}
	   }

}








