#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution{
public:
    bool lemonadeChange(vector<int>& bills){
        int f = 0;
        int t = 0;
        for(int i=0;i<bills.size();++i){
            if(bills[i] == 5){
               f++;
            }
            else if(bills[i] == 10){
                if(f == 0){
                    return false;
                }
                f--;
                t++;
            }
            else if(bills[i] == 20){
                if((f < 1) || (t < 1)){
                    if(f < 3){
                        return false;
                    }
                    else{
                        f -= 3;
                    }
                }
                else{
                    f--;
                    t--;
                }
            }
        }
        return true;
    }
};

int main(){
    Solution run;
    vector<int> g;
    string line;
    int n, result;
    cout << "bills = ";
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
    cout << "Output: ";
    result = run.lemonadeChange(g); 
    if(result == 1){
        cout << "true" << endl; 
    }
    else{
        cout << "false" << endl; 
    }
    return 0;
}