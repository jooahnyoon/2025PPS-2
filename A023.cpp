#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

class Solution{
public:
    int addDigits(int num){
        int sum = 0;
        while(num>0){
            sum += (num % 10);
            num = num / 10;
        }
        return sum;
    }
};  

int main(){
    Solution run;
    vector<int> g;
    int num;
    cout << "num = ";
    cin >> num;
    while(num >= 10){
        num = run.addDigits(num);
    }
    cout << "answer:" << num << endl;
    return 0;
}
