#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution{
public:
    int solution(int n){
        int answer = 0;
        for(int i=2;i<n;++i){
            if(n % i == 1){
                return i;
            }
        }
        return answer;
    }
};

int main(){
    Solution run;
    vector<int> g;
    int n, result;
    cout << "n = ";
    cin >> n;
    result = run.solution(n);
    cout << "result = " << result << endl;
    return 0;
}
