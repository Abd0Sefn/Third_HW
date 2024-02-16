#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int tmp;
    int arr[n];
    int num[501]{};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        num[arr[i]]++;
    }
    for(int i = 0;i < 501; i++){
        while(num[i]--){
            cout << i;
        }
    }
    return 0;
}