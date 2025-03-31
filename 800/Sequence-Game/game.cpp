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
        vector<int> result;
        result.push_back(a[0]);
        for(int i = 1; i < n; i++){
            if(a[i-1] > a[i]){
               result.push_back(1); 
            }
            result.push_back(a[i]);
        }
        cout << result.size() << endl;
        for(int x : result){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;

}