#include <iostream>
using namespace std;

class Solution{
public:
    long long solution(int price, int money, int count){
        long long answer = 0;
        for(int i=1;i<=count;++i){
            answer += (price * i);
        }
        answer -= money;
        return answer;
    }
};

int main(){
    Solution run;
    int price, money, count;
    cin >> price >> money >> count;
    long long n = run.solution(price, money, count);
    cout << n << endl;
    return 0;
}
