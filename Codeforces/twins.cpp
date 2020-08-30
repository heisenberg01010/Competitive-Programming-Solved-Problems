#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    int n, count = 0, sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sum = sum / 2;
    sort(arr, arr+n);
    int result = 0;
    
    for(int i = n - 1; i > 0; i--)
    {
        result += arr[i];
        count++;
        
        if(result > sum)
            break;
    }
    if(n == 1)
     {
         cout << n;
         return 0;
     }
    if(n == 2 && arr[0] == arr[1])
        {    cout << n;
             return 0;
        }    
    cout << count << endl;
    return 0;
}