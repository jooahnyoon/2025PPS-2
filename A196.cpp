#include <iostream>
using namespace std;

int main(){
    int n, v;
    while(n < 1 || n > 100){
        cin >> n;
    }
    int arr[n];
    int count = 0;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    while(v < -100 || v > 100){
        cin >> v;
    }
    for(int i=0;i<n;++i){
        if(v == arr[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
