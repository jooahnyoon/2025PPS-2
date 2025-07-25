#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution{
public:
    int solution(vector<int> number){
        int answer = 0;
        int n = number.size();
        for(int i = 0; i < n - 2; ++i){
            for(int j = i + 1; j < n - 1; ++j){
                for(int k = j + 1; k < n; ++k){
                    if(number[i] + number[j] + number[k] == 0){
                        answer++;
                    }
                }
            }
        }
        return answer;
    }
};

int main(){
    Solution run;
    vector<int> g;
    string line;
    int n;
    getline(cin, line);
    for(int i=0;i<line.size();++i){
        if(line[i] == '[' || line[i] == ']' || line[i] == ','){
            line[i] = ' ';
        } 
    }
    istringstream iss(line);
    while(iss >> n){
        g.push_back(n);
    }
    int result = run.solution(g);
    cout << "result = " << result << endl;
    return 0;
}
