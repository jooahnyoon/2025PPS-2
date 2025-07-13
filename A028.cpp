#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    string bigNum(string a, string b){
        string result = "";
        if(a.length() < b.length()){
            swap(a,b);
        }
        int dif = a.length() - b.length();
        b = string(dif,'0') + b;
        int carry = 0;
        for(int i = a.length()-1;i>=0;--i){
            int sum = (a[i] - '0')+(b[i] - '0') + carry;
            carry = sum / 10;
            result.push_back((sum%10)+'0');
        }
        if(carry){
            result.push_back(carry + '0');
        }
        return result;
    }
};  

int main(){
    Solution run;
    string num1, num2, num;
    cout << "num = ";
    cin >> num1 >> num2;
    num = run.bigNum(num1, num2);
    cout << "answer:" << num << endl;
    return 0;
}
