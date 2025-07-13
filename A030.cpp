#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

class Solution{
public:
    void findMood(int d, int n, double n1, double n2, double n3, double n4){
        double good = 0.0;
        double bad = 0.0;
        if(n == 0){
            good = 1.0;
        }
        else{
            bad = 1.0;
        }
        for(int i=0;i<d;++i){
            double new_good = good * n1 + bad * n3;
            double new_bad = good * n2 + bad * n4;
            good = new_good;
            bad = new_bad;
        }
        cout << (int)(good * 1000 + 0.5) << endl;
        cout << (int)(bad * 1000 + 0.5) << endl;
    }
};  

int main(){
    Solution run;
    int d, n;
    double n1, n2, n3, n4;
    cin >> d >> n >> n1 >> n2 >> n3 >> n4;
    run.findMood(d, n, n1, n2, n3, n4);
    return 0;
}
