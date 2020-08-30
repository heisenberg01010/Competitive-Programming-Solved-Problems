#include<iostream>
using namespace std;
int main()
{
	char c,p = 'a';
	int i = 0;
	while(cin >> c)
	{
	    i += min(abs(p-c), 26-abs(p-c)); 
    	p = c;
	    
	} 
	cout << i;
	return 0;
}