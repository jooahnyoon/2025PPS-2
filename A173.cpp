#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution{
public:
    int solution(vector<int> numbers){
        int answer = 0;
        int a[10] = {0};
        for(int i=0;i<numbers.size();++i){
            a[numbers[i]]++;
        }
        for(int i=0;i<10;++i){
            if(a[i] == 0){
                answer += i;
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
    cout << "numbers = ";
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
