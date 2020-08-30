#include <bits/stdc++.h>

using namespace std;

long long i,j,k,n,sr,dm;
int main() {
	cin>>n;
	long long m[n];
	j=n-1;
	k=0;
	for(i=0;i<n;i++) 
	{
	    cin>>m[i];
	}
	for(i=0;i<n;i++) 
	{
	   if (i%2==0) 
	   sr+=max(m[k],m[j]); 
	   else
	   dm+=max(m[k],m[j]);
	   if(m[j]>m[k])
	   j--; 
	   else
	   k++;
	    
	}
	cout<<sr<<" "<<dm;
}
