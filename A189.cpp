#include <iostream>
using namespace std;

int main(){
    int h, m;
    while(h < 0 || h > 23){
        cin >> h;
    }
    while(m < 0 || m > 59){
        cin >> m;
    }
    m -= 45;
    if(m < 0){
        h--;
        m += 60;
    }
    if(h < 0){
        h = 23;
    }
    cout << h << " " << m << endl;

    return 0;
}
