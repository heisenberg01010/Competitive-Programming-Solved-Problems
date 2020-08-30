#include <iostream>
using namespace std;
 
int main(){
	int n,h;
	cin>>n>>h;
	int c=n;
	while(n--){
		int t;
		cin>>t;
		if(t>h)c++;
	}
	cout<<c<<endl;
	
}