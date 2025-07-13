#include <iostream>
#include <algorithm>
using namespace std;

class Solution{
public:
    int findNum(int k, int n){
        if(k == 0){
            return n;
        }
        int sum = 0;
        for(int i=1;i<=n;++i){
            sum += findNum(k-1, i);
        }
       return sum;
    }
};  

int main(){
    Solution run;
    int count;
    cin >> count;
    int k[count];
    int n[count];
    for(int i=0;i<count;++i){
        cin >> k[i] >> n[i];
    }
    for(int i=0;i<count;++i){
       cout << run.findNum(k[i], n[i]) << endl;
    }
    return 0;
}
