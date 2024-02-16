#include <iostream>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int tmp = -1;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(tmp == -1 || num != tmp ){
            cout << num << " ";
            tmp = num;
        }
    }
    return 0;
}