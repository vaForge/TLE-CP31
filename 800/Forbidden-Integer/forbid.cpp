#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        
        // When the forbidden integer is not 1, we can use summand 1.
        if(x != 1){
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 1; i <= n; i++){
                cout << 1 << " ";
            }
            cout << endl;
        } 
        else {
            // x == 1 is forbidden.
            if(k == 1) {
                // Only allowed summand would be 1, but 1 is forbidden.
                cout << "NO" << endl;
            }
            else if(k == 2) {
                // Only allowed summand is 2.
                if(n % 2 != 0){
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for(int i = 1; i <= n / 2; i++){
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
            } 
            else {
                // k >= 3: We have at least one summand other than 1 and 2.
                cout << "YES" << endl;
                if(n % 2 == 0){
                    cout << n / 2 << endl;
                    for(int i = 1; i <= n / 2; i++){
                        cout << 2 << " ";
                    }
                    cout << endl;
                } else {
                    // For odd n, use one summand 3 and the rest 2's.
                    int count = (n - 3) / 2 + 1;
                    cout << count << endl;
                    for(int i = 1; i <= (n - 3) / 2; i++){
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }
    }
    return 0;
}
