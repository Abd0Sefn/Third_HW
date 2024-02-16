#include<iostream>
using namespace std;
int main(){
    int n, max = -1, min = -1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(max == -1 || max < arr[i]){
            max = arr[i];
        }
        else if (min == -1 || min > arr [i]){
            min = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == max)
            arr[i] = min;
        else if(arr[i] == min)
            arr[i] = max;
    }
    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
    return 0;
}