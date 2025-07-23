#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
    vector<string> g;
    int n;
    string str;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> str;
        g.push_back(str);
    }
    map<string, int> m;
    for(string s : g){
        m[s]++;
    }
    int max = 0;
    string max_name = "";
    for(auto p : m){
        if(p.second > max){
            max = p.second;
            max_name = p.first;
        }
    }
    cout << max_name << endl;
    return 0;
}
