#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution{
public:
    string solution(string number, int k){
        string answer = "";
        for(char i : number){
            while(!answer.empty() && answer.back() < i && k > 0){
                answer.pop_back();
                k--;
            }
            answer.push_back(i);
        }
        while(k > 0){
            answer.pop_back();
            k--;
        }
        return answer;
    }
};

int main(){
    Solution run;
    int k;
    string num, result;
    cout << "number = ";
    cin >> num;
    cout << "k = ";
    cin >> k;
    result = run.solution(num, k);
    cout << result << endl; 
    return 0;
}