#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int sum = 0;
    int n, r;
    int rest[42] = {0};
    for(int i=0;i<10;++i){
        cin >> n;
        r = n % 42;
        rest[r]++;
    }
    int count = 0;
    for(int j=0;j<42;++j){
        if(rest[j] > 0){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
