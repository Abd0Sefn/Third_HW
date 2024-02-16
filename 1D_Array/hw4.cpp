#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    bool is_palindrom = 1;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i <= n / 2; i++){
        if(arr[i] != arr[n - i - 1]){
            is_palindrom = 0;
            break;
        }
    }
    if(is_palindrom == 1)
    cout << "YES";
    else 
    cout << "NO";
    return 0;
}