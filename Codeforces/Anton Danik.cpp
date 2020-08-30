#include <cstdio>
int a,b,n; char s[100005];
int main() {
	scanf("%d%s",&n,s);
	for (int i=0;i<n;i++)
		if (s[i]=='A') a++; 
		else b++;
	printf("%s\n",a>b?"Anton":b>a?"Danik":"Friendship");
	return 0;
}