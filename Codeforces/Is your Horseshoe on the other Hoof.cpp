#include <iostream>
#include <set>
using namespace std;
int main()
{
    int i, j, k, l;
    cin >> i >> j >> k >> l;
    set<int>t = {i , j, k, l};
    cout << 4 - t.size();
    return 0;
}