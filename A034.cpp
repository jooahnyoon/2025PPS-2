#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int sum = 0;
    int n;
    int num[5] = {0};
    int max = 0;
    int max_i = 0;
    for(int i=0;i<5;++i){
        for(int j=0;j<4;++j){
            cin >> n;
            num[i] += n;
        }
        if(num[i] > max){
            max = num[i];
            max_i = i;
        }
    }
    int number = max_i + 1;
    cout << number << " " << max << endl;
    return 0;
}
