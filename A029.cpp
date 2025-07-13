#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    vector<int>openDoor(int n, int n1){
        vector<int> arr(n+1);
        arr[0] = 1;
        arr[1] = n1;
        for(int i=2;i<arr.size();++i){
            if(arr[i-1] == 1){
                arr[i] = 0;
            }
            else{
                arr[i] = 1;
            }
        }
        for(int i=4;i<arr.size();i+=2){
            if(arr[i-2] == arr[i]){
                continue;
            }
            else{
                arr[0] = 0;
            }
        }
        for(int i=6;i<arr.size();i+=3){
            if(arr[i-3] == arr[i]){
                continue;
            }
            else{
                arr[0] = 0;
            }
        }
        return arr;
    }
};  

int main(){
    Solution run;
    vector<int> g;
    int n, n1;
    cin >> n >> n1;
    vector<int> num = run.openDoor(n, n1);
    if(num[0] == 0){
        cout << "Love is open door" << endl;
    }
    else{
        for(int i=2;i<num.size();++i){
            cout << num[i] << endl;
        }
    }
    return 0;
}
