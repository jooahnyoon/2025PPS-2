#include <iostream>
using namespace std;

int main(){
    int n, c, v;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;++i){
        cin >> c >> v;
        a[i] = c / v;
        b[i] = c % v;
    }
    for(int j=0;j<n;++j){
        cout << "You get "<< a[j] << " piece(s) and your dad gets " << b[j] << " piece(s)." << endl;
    }
    return 0;
}
