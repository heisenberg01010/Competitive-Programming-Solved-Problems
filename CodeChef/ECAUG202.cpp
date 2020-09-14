#include <iostream>
using namespace std;

int main() 
{
	long long t, n, arr[1000], sum = 0;
	cin >> t;
	while(t-- && t >= 0)
{
	    cin >> n;
	
	for(int i = 0; i < n; i++ )
	{
	    cin >> arr[i];
	    if(arr[i] % 2 == 0)
	    {
	        sum += arr[i];
	    }
	   
	}
	 cout << sum << endl;
	 sum = 0;
}	

	return 0;
}
