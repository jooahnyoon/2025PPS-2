#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution{
public:
    int account(vector<int>nums){
        vector<int>result;
        int sum = 0;
        for(int i=0;i<nums.size();++i){
            if(nums[i] == 0){
                result.pop_back();
            }
            else{
                result.push_back(nums[i]);
            }
        }
        for(int j=0;j<result.size();++j){
            sum += result[j];
        }
        return sum;
    }
};

int main(){
    Solution run;
    vector<int> g;
    int k;
    cin >> k;
    int a[k];
    for(int i=0;i<k;++i){
        cin >> a[i];
        g.push_back(a[i]);
    }
    int n = run.account(g);
    cout << n << endl;
    return 0;
}
