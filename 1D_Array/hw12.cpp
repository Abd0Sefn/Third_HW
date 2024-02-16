#include<iostream>
using namespace std;
int main(){
    int i;
    cin >> i;
    int arr[201]{};
    int check[1000]{};
    int z;
    arr[0] = 0;
    for(int i = 1; i < 201; i++){
        z = arr[i - 1] - i ;
         if(check[z] == 0 && z > 0){
            arr[i] = z;
            check[arr[i]] = -1;
         }
         else{
            arr[i] = arr[i - 1] + i ;
            check[arr[i]] = -1;
         }
    }
    cout << arr[i];
    return 0;
}