#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> a,int n){
    vector<int> b,c;
    int mx = *max_element(a.begin(), a.end());
    for(int i=0;i<n;i++){
        if(a[i] != mx)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
        if(b.empty()){
            cout<<-1<<endl;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int x:b){
                cout<<x<<" ";
            }
            cout<<endl;
            for(int x:c){
                cout<<x<<" ";
            }
            cout<<endl;
        }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>> a[i];
        }
        //inputs done
        solve(a,n);

    }
    return 0;
}