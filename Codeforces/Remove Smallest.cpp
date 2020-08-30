#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--){
    int n,k=0;   cin>>n;
    int a[1111];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=1;i<n;i++)
        if(a[i]-a[i-1]>1)
            k++;



if(k==0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;




}
}
