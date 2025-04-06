#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int negone = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == -1) negone++;
        }
        int posone = n - negone , cnt =0;
        while(posone < negone || negone %2 == 1){
            posone++;negone--;
            cnt++;
        }
        cout<<cnt<<endl;

    }
}