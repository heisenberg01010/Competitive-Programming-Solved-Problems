#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    
    int tc;
    cin >> tc;
    while(tc--) {
        string s;
        int n, count = 0;
        cin >> n;
        cin >> s;
        for(int i = 0;s[i] != '\0';i++) {
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i' && s[i] != 'o') {
                if(s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'u' || s[i + 1] == 'i' || s[i + 1] == 'o')
                    count++;
            }
        }
        cout << count << endl;
    }
    
}