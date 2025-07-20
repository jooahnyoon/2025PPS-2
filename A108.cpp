#include <iostream>
using namespace std;
class Solution{
public:
    void find(int num){
        int a = num;
        int b = 0;
        int c = 0;
        int begin = 0;
        int last = 0;
        while(num>0){
            int d = num % 10;
            b = (b * 10) + d;
            num = num / 10;
        }
        begin = a + b;
        c = begin;
        while(c>0){
            int d = c % 10;
            last = (last * 10) + d;
            c = c / 10;
        }
        if(begin == last){
            cout << "YES" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
};

int main(){
    Solution run;
    int n, num;
    int arr[n];
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> num;
        arr[i] = num;
    }
    for(int i=0;i<n;++i){
        run.find(arr[i]);
    }
    return 0;
}