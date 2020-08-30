#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a>> b;
    int t = 6 - max(a,b) +  1;
    
    cout << t/__gcd(t,6) << "/" << 6/__gcd(t,6);

	
}