#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int num[501]{};
    for(int i = 0; i < n; i++){
        if(num[arr[i]] == 0){
            cout << arr[i] << " ";
            num[arr[i]] = 1;
        }
    }
    return 0;
}