#include<iostream>
using namespace std;
int main(){
    int n, min1, min2, min3;
    cin >> n;
    int arr[n];
    cin >> arr[0] >> arr [1] >> arr[2];
    if (arr[0] < arr[1]){
        min1 = arr[0];
        min2 = arr[1];
    }
    else{
        min1 = arr[1];
        min2 = arr[0];
    }
    min3 = arr[2];
    for(int i = 3; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(min1 > arr[i]){
            min3 = min2;  
            min2 = min1;
            min1 = arr[i];
        }
        else if ( min2 > arr[i]){
            min3 = min2;
            min2 = arr[i];
        }
        else if (min3 > arr[i]){
            min3 = arr[i];
        }
    }
    cout << min1 << " " << min2 << " " << min3;
    return 0;
}