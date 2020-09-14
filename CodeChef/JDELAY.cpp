#include <iostream>
using namespace std;

int main() {

   int t;
   cin >> t;
   while(t--)
   {
       int n,cont=0;
       cin >> n;
       int i=0,s[n],j[n];
       
       for(i=0;i<n;i++)
       {
           cin >> s[i] >> j [i];
            if((j[i]-s[i])>5)
            {
               cont++;
            }
       }
     cout << cont << endl;
   }
	    
	
	return 0;
}

