#include <iostream>
using namespace std;

class Solution{
public:
    void change(int num[], int a, int b){
        int temp = num[a];
        num[a] = num[b];
        num[b] = temp;
    }
};

int main(){
    Solution run;
    int n, m, a, b;
    while(n < 1 || n > 100){
        cin >> n;
    }
    int arr[n];
    for(int i=1;i<=n;++i){
        arr[i] = i;
    }
    while(m < 1 || m > 100){
        cin >> m;
    }
    for(int i=1;i<=m;++i){
        cin >> a >> b;
        run.change(arr, a, b);
    }
    for(int i=1;i<=n;++i){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
