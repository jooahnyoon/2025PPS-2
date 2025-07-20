#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution{
public:
    void moveZeros(vector<int>& nums){
        for(int i=0;i<nums.size();++i){
            if(nums[i] == 0){
               nums.erase(nums.begin()+i);
               nums.push_back(0);
            }
        }
        cout << "[";
        for(int j=0;j<nums.size();++j){
            if(j == nums.size()-1){
                cout << nums[j]; 
            }
            else{
                cout << nums[j] << ","; 
            }
        }
        cout << "]" << endl;
    }
};

int main(){
    Solution run;
    vector<int> g;
    string line;
    int n, result;
    cout << "nums = ";
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
    run.moveZeros(g);
    return 0;
}