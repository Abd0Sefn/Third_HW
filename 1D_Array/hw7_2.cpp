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
    int arr2[q];
    for(int j = 0; j < q; j++){
         cin >> arr2[j];
    }
    int ans[q];
    for(int i = n - 1, j = 0; i >= 0; i--){
        ans[j] = -1;
        if(j == q)
        break;
        if (arr2[j] == arr[i]){
            ans[j] = i;
            j++;
        }
        else if(i == 0){
            i = n;
            j++;
        }
    }
    for(int i = 0; i < q; i++)
    cout << ans[i] << " ";
    return 0;
}