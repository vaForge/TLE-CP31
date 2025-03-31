#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(abs(a[i]) < min){
            min = abs(a[i]);
        }
    }
    cout<<min<<endl;
    return 0;
}