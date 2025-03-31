#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        bool found = false;
        for(int j=0;j<n;j++){
            if(a[j]==k){
                found = true;
                break;
            }
        }
        if(found)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}