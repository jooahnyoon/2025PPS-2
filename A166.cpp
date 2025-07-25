#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution{
public:
    int solution(string t, string p){
        int answer = 0;
        int p_len = p.length();
        for(int i=0;i<=t.size()-p_len;++i){
            string com = t.substr(i,p_len);
            if(com <= p){
                answer++;
            }
        }
        return answer;
    }
};

int main(){
    Solution run;
    string t, p;

    cout << "t = ";
    cin >> t;
    t.erase(0,1);
    t.pop_back();

    cout << "p = ";
    cin >> p;
    p.erase(0,1);
    p.pop_back();

    int n = run.solution(t, p);
    cout << "result = " << n << endl;
    return 0;
}
