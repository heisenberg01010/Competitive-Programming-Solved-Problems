#include <iostream> 
#include <boost/math/common_factor.hpp> 
  
using namespace std; 
  
int main() 
{ 
    long long t, n, m;
    cin >> t;
    while(t-- && n >=2 && m <= 1e7)
    {
        cin >> n >> m;
        cout << boost::math::lcm(n, m) << endl;
    }
    return 0; 
} 