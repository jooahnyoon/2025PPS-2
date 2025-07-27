#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution{
public:
    void solution(const string& str){
        bool tag = false;
        stack<char> stk;

        for(char c : str){
            if(c == '<'){
                while(!stk.empty()){
                    cout << stk.top();
                    stk.pop();
                }
                tag = true;
                cout << c;
            }
            else if(c == '>'){
                tag = false;
                cout << c;
            }
            else if(tag){
                cout << c;
            }
            else{
                if(c == ' '){
                    while(!stk.empty()){
                        cout << stk.top();
                        stk.pop();
                    }
                    cout << ' ';
                }
                else{
                    stk.push(c);
                }
            }
        }

        // 마지막 단어 뒤집기
        while(!stk.empty()){
            cout << stk.top();
            stk.pop();
        }
        cout << endl;
    }
};

int main(){
    Solution run;
    vector<string> g;
    string s, n;
    getline(cin, s);
    run.solution(s);
    return 0;
}
