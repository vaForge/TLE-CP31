#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; string s;
        cin>>n;
        cin>>s;
        //inputs
        int action=0;
        for(int i =0;i<n;i++){
            if(s[i]=='.' && (s[i+1]=='.' && i+1<n) && (s[i+2]=='.' && i+2<n)){
                action=2;
                break;
            }
            else if(s[i]=='.'){
                action++;
            }
        }
        cout<<action<<endl;
    }
    return 0;
}