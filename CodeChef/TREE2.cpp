#include <bits/stdc++.h>
using namespace std;

set<int>st;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
	long long t, n, x;
	cin >> t;
	while(t--)
	{
	    cin >> n;
        while(n--)
        {
            cin >> x;
            if(x != 0)
            {st.insert(x);}
        }
        cout << st.size() << endl;
        st.clear();
	}
	return 0;
}
