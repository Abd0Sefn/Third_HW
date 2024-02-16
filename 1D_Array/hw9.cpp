#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int frequency[10]{};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        int tmp = arr[i];
        while(tmp){
            frequency[tmp % 10]++;
            tmp /= 10;
        }
    }
    for(int i = 0; i < 10; i++){
        cout << i << " " << frequency[i] <<endl;
    }
    return 0;
}