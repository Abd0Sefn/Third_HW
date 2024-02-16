#include<iostream>
using namespace std;
int main(){
    int n, I = -1, J = -1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(I == -1 || arr[I] + arr[J] + J - I > arr[i] + arr[j] + j - i){
                I = i;
                J = j;
            }
        }
    }
    cout << arr[I] + arr[J] + J - I;
    return 0;
}