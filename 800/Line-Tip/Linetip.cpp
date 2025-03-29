#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ,x ;
        cin>> n>> x;
        vector<int> a(n);
        int j;
        for(j = 0; j < n; j++){
            cin>> a[j];
        }
        //inputs
        int maxDiff = a[0]-0;
        for(int i=1;i<n;i++){
            maxDiff = max(maxDiff , a[i]-a[i-1]);
        }
        int returndis = 2*(x - a[j-1]);
        maxDiff = max(maxDiff , returndis);
        cout<< maxDiff << endl;
    }
    return 0;
}