#include <iostream>
#include <vector>
using namespace std;

int main(){
    int sum = 0;
    int n, cost;
    int max = 0;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> cost;
        sum += cost;
        if(cost > max){
            max = cost;
        }
    }
    sum -= max;
    cout << sum << endl;
    return 0;
}
