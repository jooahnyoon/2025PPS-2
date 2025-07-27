#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double d, h, w , k;
    cin >> d >> h >> w;
    double m = sqrt(h*h + w*w);
    k = d / m;
    cout << floor(k * h) << " " << floor(k * w) << endl;
    return 0;
}
