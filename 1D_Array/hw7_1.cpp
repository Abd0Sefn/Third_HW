#include<iostream>
using namespace std;
int main(){
    int n, q;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> q;
    while(q--){
        int x, ans = -1;
        cin >> x;
        for(int i = n - 1; i >= 0; i--){
            if (x == arr[i]){
                ans = i;
                break;
            }
        }
        cout << ans;
    }
    return 0;
}