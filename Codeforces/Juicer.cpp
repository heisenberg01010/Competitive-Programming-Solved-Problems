#include <iostream>

using namespace std;
int n, x, b, d, ans = 0, sum = 0;

int main()
{
    cin >> n >> b >> d;
    while(n--)
    {
        cin >> x;
        if(x <= b)
          sum += x;
        if(sum > d)
          ans++, sum = 0;
    }
    cout << ans;
}