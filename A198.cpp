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
    int s, c, l, a, b;
    while(s < 1 || s > 1000000){
        cin >> s;
    }
    while(c < 1 || c > 1000000 || c < s){
        cin >> c;
    }
    while(l < 1 || c > 1000000000){
        cin >> l;
    }
    int arr[s];
    for(int i=1;i<=s;++i){
        cin >> arr[i];
    }
    
    cout << endl;
    return 0;
}
