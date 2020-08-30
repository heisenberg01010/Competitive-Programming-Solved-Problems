#include <iostream>

using namespace std;

int i = 1, x, y;
int main()
{
    cin >> x >> y;
    while(x * i % 10 && (x * i - y) % 10)
        i++;
        cout << i;
    return 0;
}