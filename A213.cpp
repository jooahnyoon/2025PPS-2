#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum1 = 0;
    int sum2 = 0;
    for(int i=1;i<=n;++i){
        cin >> arr[i];
        if(i % 3 == 0){
            continue;
        }
        sum1 += arr[i];
    }
    for(int j=1;j<=n;++j){
        if((j - 2) % 3 == 0){
            continue;
        }
        sum2 += arr[j];
    }

    if(sum1 >= sum2){
        cout << sum1 << endl;
    }
    else{
        cout << sum2 << endl;
    }
    return 0;
}
