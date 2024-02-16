#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int frequency[771]{};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        frequency[arr[i]+500]++;
    }
    int repeat = frequency[0], max = 0;
    for(int i = 0; i < 771; i++){
        if(repeat < frequency[i]){
            repeat = frequency[i];
            max = i;
        }
    }
    cout << max - 500 << " repeated " << repeat << " times: the largest";
    return 0;
}