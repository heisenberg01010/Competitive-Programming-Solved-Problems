#include <iostream>
using namespace std;
 
 
int main() {
 
    int n, cnt = 0, notrt = 0;   
    cin >> n;       
                                 
    while(n--) {
        int v;
        cin >> v;
         
        if(v > 0) {  
            cnt += v;
        }
        else if(v < 0){         
            if(cnt > 0) {        
                cnt--;             
            }
            else {          
                notrt++;          
            }               
        }
    }
     
    cout << notrt << endl;         
     
    return 0;
}