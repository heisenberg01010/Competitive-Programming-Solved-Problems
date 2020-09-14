#include <iostream>
using namespace std;

int main() {
	int n, max1 = 0, max2 = 0, s, t, sum1 = 0, sum2 = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
	    cin >> s >> t;
	    sum1 += s;
	    sum2 += t;
	    if(sum1 > sum2)
	    {
	        max1 = max(max1,sum1 - sum2);
	    }
	    else if(sum2 > sum1)
	    {
	        max2 = max(max2,sum2 - sum1);
	    }
	}
	if(max1 > max2) cout << 1 << " " << max1;
	else cout << 2 << " " << max2;
	
	return 0;
}
