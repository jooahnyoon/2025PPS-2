#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution{
public:
    bool solution(int x){
        bool answer = true;
        int sum = 0;
        int num = x;
        while(x > 0){
            sum += (x % 10);
            x = x/10;
        }
        if(num % sum != 0){
            answer = false;
        }
        return answer;
    }
};

int main(){
    Solution run;
    int result, x;
    cout << "x = ";
    cin >> x;
    result = run.solution(x); 
    if(result == 1){
        cout << "true" << endl; 
    }
    else{
        cout << "false" << endl; 
    }
    return 0;
}