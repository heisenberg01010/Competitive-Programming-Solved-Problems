#include <iostream>

using namespace std;

int n,x; char s[55];
int main() {
	cin >> n >> s;
	for (int i=1;i<n;i++)
	{
		if (s[i]==s[i-1])
		x++;
	}
	cout << x;
}
