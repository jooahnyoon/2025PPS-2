#include <iostream>
using namespace std;
class Solution{
public:
    void find(int a, int b){
        int sum = 0;
        int count = 0;
        int num[b];
        num[0] = 0;
        for(int i=1;count<=b;++i){
            for(int j=1;j<=i;++j){
                count++;
                num[count] = i;
                sum += num[count];
                if(count == b){
                    for(int i=0;i<a;++i){
                        sum -= num[i];
                    }
                    cout << sum << endl;
                    return;
                }
            }
        }
    }
};

int main(){
    Solution run;
    int a, b;
    cin >> a >> b;
    run.find(a, b);
    return 0;
}
