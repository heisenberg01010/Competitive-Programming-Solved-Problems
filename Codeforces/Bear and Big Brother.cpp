#include <iostream>

using namespace std;

int main()
{
    int l, b, count = 0;
    cin >> l >> b;
    
    while(l <= b)
    {
        b = b * 2;
        l = l * 3;
        count++;
    }
    cout << count;
    return 0;
}