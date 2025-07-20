#include <iostream>
using namespace std;
class Solution{
public:
    void find(int n){
        int count = 0;
        int a = 0;
        int b = 0;
        for(int i=1;count<n;++i){
            for(int j=1;j<=i;++j){
                count++;
                if(i % 2 == 0){
                    a = j;
                    b = i - j + 1;
                }
                else{
                    a = i - j + 1;
                    b = j;
                }
                if(count == n){
                    cout << a << "/" << b << endl;
                    return;
                }
            }
        }
    }
};

int main(){
    Solution run;
    int n;
    cin >> n;
    run.find(n);
    return 0;
}
