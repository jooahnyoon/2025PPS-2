#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int sum = 0;
    int n, num;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> num;
        sum += num;
    }
    sum -= (n-1);
    cout << "\n" << sum << endl;
    return 0;
}
