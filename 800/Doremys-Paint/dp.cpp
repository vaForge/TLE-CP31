#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i <n;i++){
            cin>>a[i];
        }
        if(n==2){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            map<int,int>m;
            for(int i=0;i<n;i++){
                m[a[i]]++;
            }
            if(m.size()>2){
                cout<<"NO"<<endl;
            }
            else{
                int f1 = m.begin()->second;
                int f2 = m.rbegin()->second;
                if(f1==f2){
                    cout<<"YES"<<endl;
                }
                else if( n%2==1 && abs(f1-f2)==1){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}