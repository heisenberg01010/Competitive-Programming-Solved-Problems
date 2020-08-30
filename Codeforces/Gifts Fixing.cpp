#include <bits/stdc++.h>
using namespace std;
int main()
{

int t;   cin>>t;
while(t--){

long long n,ans=0;    cin>>n;
long long a[n],b[n] ,ma=1e9+1 ,mb=1e9+1;
for(int i=0;i<n;i++)
{
cin>>a[i];
ma=min(ma,a[i]);

}
for(int i=0;i<n;i++)

{cin>>b[i];
mb=min(mb,b[i]);
}
for(int i=0;i<n;i++)
{
ans+=max(a[i]-ma,b[i]-mb);
}
cout<<ans<<endl;





}
}
