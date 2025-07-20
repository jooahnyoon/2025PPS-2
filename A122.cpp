#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution{
public:
    bool rotateString(string s, string goal){
        for(int i=0;i<s.size();++i){
            s = s.substr(1) + s[0];
            if(s == goal){
               return true;
            }
        }
        return false;
    }
};

int main(){
    Solution run;
    vector<int> g;
    string s, goal;
    int n, result;
    cout << "s = ";
    getline(cin, s);
    cout << "goal = ";
    getline(cin, goal);
    int check = run.rotateString(s, goal);
    if(check == 1){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}