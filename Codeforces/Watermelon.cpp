#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    if(n % 2 == 0 && n > 2)
        cout << "Yes";
    else if(n == 0)
        cout << "No";
    else
        cout << "No";
    return 0;
}