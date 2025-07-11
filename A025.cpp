#include <iostream>

using namespace std;
class Solution{
public:
    int powerFour(int num){
        int f = 1;
        if(num == 1){
            return true;
        }
        while(num >= f){
            f *= 4;
            if(num == f){
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution run;
    int result, num;
    cout << "n = ";
    cin >> num;
    result = run.powerFour(num); 
    if(result == 1){
        cout << "true" << endl; 
    }
    else{
        cout << "false" << endl; 
    }
    return 0;
}