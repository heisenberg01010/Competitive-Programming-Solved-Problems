#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int T,n,a[N];
 
int main(){
	scanf("%d",&T); 
	while(T--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++) 
		scanf("%d",&a[i]);
		int ans=n;
		for(int i=1;i<n;i++) if(a[i]!=a[i+1]) ans=1; 
		printf("%d\n",ans);
	}
} 