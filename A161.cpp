#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution{
public:
    vector<int> solution(vector<string> keymap, vector<string> targets){
        vector<int> answer;
        int minPress[26];
        fill(minPress, minPress + 26, 101);
        for(const string& key : keymap){
            for(int i = 0; i < key.size(); ++i){
                int idx = key[i] - 'A';
                minPress[idx] = min(minPress[idx], i + 1); 
            }
        }
        for(const string& target : targets){
            int total = 0;
            bool fail = false;

            for(char c : target){
                int idx = c - 'A';
                if (minPress[idx] == 101) {
                    fail = true;
                    break;
                }
                total += minPress[idx];
            }

            if(fail){
                answer.push_back(-1);
            } 
            else{
                answer.push_back(total);
            }
        }

        return answer;
    }
};

int main(){
    Solution run;
    vector<string> keymap;
    vector<string> target;
    string line, line2;
    char n;
    
    cout << "keymap = ";
    getline(cin, line);
    for(int i=0;i<line.size();++i){
        if(line[i] == '[' || line[i] == ']' || line[i] == '"'){
            line[i] = ' ';
        }
    }
    stringstream ss(line);
    string word;
    while(getline(ss, word, ',')){
        size_t start = word.find_first_not_of(' ');
        size_t end = word.find_last_not_of(' ');
        if(start != string::npos){
            string w = word.substr(start, end - start + 1);
            keymap.push_back(w);
        }
    }

    cout << "targets = ";
    getline(cin, line2);
    for(int i=0;i<line2.size();++i){
        if(line2[i] == '[' || line2[i] == ']' || line2[i] == '"'){
            line2[i] = ' ';
        }
    }
    stringstream ss2(line2);
    string word2;
    while(getline(ss2, word2, ',')){
        size_t start = word2.find_first_not_of(' ');
        size_t end = word2.find_last_not_of(' ');
        if(start != string::npos){
            string w = word2.substr(start, end - start + 1);
            target.push_back(w);
        }
    }

    vector<int> result = run.solution(keymap, target);

    cout << "[";
        for(int j=0;j<result.size();++j){
            if(j == result.size()-1){
                cout << result[j]; 
            }
            else{
                cout << result[j] << ","; 
            }
        }
        cout << "]" << endl;
    return 0;
}