#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution{
public:
    int count(int a, int b){
        int big, small;
        if(a < b){
            big = b;
            small = a;
        }
        else if(a == b){
            return a;
        }
        else{
            big = a;
            small = b;
        }
        int result = big;
        while(true){
            if(result % a == 0 && result % b == 0){
                return result;
            }
            result += big;
        }
    }
};

int main(){
    Solution run;
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;++i){
        cin >> a[i] >> b[i]; 
    }
    for(int i=0;i<n;++i){
        int num = run.count(a[i], b[i]);
        cout << num << endl;
    }
    return 0;
}
