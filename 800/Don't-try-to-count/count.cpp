#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        string x , s;
        cin>>n>>m;
        cin>>x>>s;
        if(x.find(s)!=string::npos){
            cout<<0<<endl;
            continue;
        }
        int cnt = 0;
        while(x.size() < n+s.size()){
            x+=x;
            cnt++;
            if(x.find(s)!= string::npos){
                cout<<cnt<<endl;
                break;
            }
        }
        if(x.find(s)==string::npos){
            cout<<-1<<endl;
        }
    }
    return 0;
}