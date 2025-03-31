#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> copy = a;
        sort(copy.begin(),copy.end());
        if(copy != a){
            cout<<0<<endl;
            continue;
        }
        int mindiff =INT_MAX;
        for(int i=1;i<n;i++){
            mindiff = min(mindiff,a[i]-a[i-1]);
        }
        cout<<(mindiff/2)+1<<endl;
    }
    return 0;
}