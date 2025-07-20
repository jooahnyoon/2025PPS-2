#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution{
public:
    bool check(int n){
        string num = to_string(n);
        if(num.size() < 3){
            return true;
        }
        int dif = num[1] - num[0];
        for(int i=1;i<num.size()-1;++i){
            if(num[i+1] - num[i] != dif){
                return false;
            }
        }
        return true;
    }
    int count(int n){
        int count = 0;
        for(int i = 1; i < n; ++i){
            if(check(i)){
                count++;
            }
        }
        return count;
    }
};

int main(){
    Solution run;
    vector<int> g;
    string n;
    cin >> n;
    int k = stoi(n);
    int num = run.count(k+1);
    cout << num << endl;
    return 0;
}
