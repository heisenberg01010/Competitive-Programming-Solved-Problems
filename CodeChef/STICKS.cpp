#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        
        int area=1;
        int c=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                area=area*v[i];
                c++;
                i++;
            }
                if(c==2){
                break;
                }
        }
        if(c==2)
        cout<<area<<"\n";
        else
        cout<<"-1"<<"\n";
    }
    return 0;
}