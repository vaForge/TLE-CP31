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
        if(n==2){
            if(a[0] % 2 == a[1]%2){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }else{
            int sum =0 , presum = 0;
            bool color = false;
            for(int i=0;i<n;i++){
                sum += a[i];
            }
            for(int i=0;i<n;i++){
                presum += a[i];
                int rem = sum - presum;
                if(presum % 2 == rem % 2){
                    color = true;
                    break;
                }
            }
            if(color){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}