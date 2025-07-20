#include <iostream>
using namespace std;
class Solution{
public:
    int find(int m, int a[]){
        int count = 0;
        int i=0;
        int n, rest;
        while(m>0 && i<6){
            n = m / a[i];
            count += n;
            m = m % a[i];
            i++;
        }
        return count;
    }
};

int main(){
    Solution run;
    int price;
    cin >> price;
    int n = 1000 - price;
    int a[6];
    a[0] = 500;
    a[1] = 100;
    a[2] = 50;
    a[3] = 10;
    a[4] = 5;
    a[5] = 1;
    int num = run.find(n, a);
    cout << num << endl;
    return 0;
}