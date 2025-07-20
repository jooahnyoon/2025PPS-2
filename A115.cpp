#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;
class Solution{
    public:
        int maxNumberOfBalloons(string text){
            int list[26] = {0};
            for(char ch : text){
                list[ch - 'a']++;
            }
            int b = list['b' - 'a'];
            int min = b;
            int a = list['a' - 'a'];
            if(a < min){
                min = a;
            }
            int l = list['l' - 'a'] / 2;
            if(l < min){
                min = l;
            }
            int o = list['o' - 'a'] / 2;
            if(o < min){
                min = o;
            }
            int n = list['n' - 'a'];
            if(n < min){
                min = n;
            }
            return min;
        }
};

int main(){
    Solution run;
    string line;
    cout << "text = ";
    getline(cin, line);
    int num = run.maxNumberOfBalloons(line);
    cout << num << endl;
    return 0;
}