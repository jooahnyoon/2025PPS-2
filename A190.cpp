#include <iostream>
using namespace std;

int main(){
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    if(a1 == a2){
        if(a2 == a3){
            cout << 10000 + (a1 * 1000) << endl;
        }
        else{
            cout << 1000 + (a1 * 100) << endl;
        }
    }
    else if(a1 == a3){
       cout << 1000 + (a1 * 100) << endl;
    }
    else if(a2 == a3){
       cout << 1000 + (a2 * 100) << endl;
    }
    else{
        int max = 0;
        if(a1 > a2){
            max = a1;
        }
        else{
            max = a2;
        }
        if(a3 > max){
            max = a3;
        }
        cout << max * 100 << endl;
    }
    return 0;
}
