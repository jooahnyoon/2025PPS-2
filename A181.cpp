#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int arr[3];
    int origin = b;
    for(int i=0;b>0;++i){
        arr[i] = b % 10;
        b /= 10;
    }
    for(int i=0;i<3;++i){
        cout << (a * arr[i]) << endl;
    }
    cout << (a * origin) << endl;
    return 0;
}
