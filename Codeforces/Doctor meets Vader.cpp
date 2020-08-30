#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
	int n,b;
	cin >> n >> b;
	vector<long int>v(n);
	for(int i = 0; i < n; i++) 
	{
	    cin >> v[i];
	}
	vector<pair<long int,long int>>vec(b);
	for(int i = 0; i < b; i++)
	{
		cin >> vec[i].first;
		cin >> vec[i].second;
	}
	
	sort(vec.begin(),vec.end());
	for(int i = 0; i < n; i++)
	{
		long long int sum=0;
		for(int j=0;j<b;j++)
		{
			if(vec[j].first <= v[i])
			{
			    sum = sum + vec[j].second;
			}
			else break;
		}
		cout << sum <<" ";
	}
}