#include <iostream>

using namespace std;
class Solution{
public:
    int PriceYeoung(int t){
        int m, res;
        int y = 0;
        m = t / 59;
        res = t % 59;
        if(m == 0){
            if(res >= 30){
                y = 20;
            }
            else if(res > 0){
                y = 10;
            }
        }
        else if(m > 0){
            y = (20 * m);
            if(res >= 30){
                y += 20;
            }
            else if(res > 0){
                y += 10;
            }
        }
        return y;
    }

    int PriceMeen(int t){
        int m, res;
        int y = 0;
        m = t / 119;
        res = t % 119;
        if(m == 0){
            if(res >= 60){
                y = 30;
            }
            else{
                y = 15;
            }
        }
        else if(m > 0){
            y = (30 * m);
            if(res >= 60){
                y += 30;
            }
            else{
                y += 15;
            }
        }
        return y;
    }
};

int main(){
    Solution run;
    int n, time, pri_Y, pri_M;
    int sum_Y = 0;
    int sum_M = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> time;
        pri_Y = run.PriceYeoung(time);
        pri_M = run.PriceMeen(time);
        sum_Y += pri_Y;
        sum_M += pri_M;
    }
    if(sum_Y < sum_M){
        cout << "Y " << sum_Y << endl;
    }
    else if(sum_Y > sum_M){
        cout << "M " << sum_M << endl;
    }
    else{
        cout << "Y M " << sum_Y << endl;
    }
    return 0;
}