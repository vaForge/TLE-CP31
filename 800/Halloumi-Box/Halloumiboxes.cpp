#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> copy(n);
        for(int i=0;i<n;i++){
            copy[i] = a[i];
        }
        bool check = true;
        sort(copy.begin(), copy.end());
        for(int i=0;i<n;i++){
            if(copy[i]!=a[i]){
                check = false;
                break;
            }
        }
        if(check == true || k > 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}