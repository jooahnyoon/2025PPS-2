#include <iostream>
using namespace std;

int main(){
    int a, b, c, result1, result2, result3, result4;
    cin >> a >> b >> c;
    result1 = (a+b)%c;
    result2 = ((a%c)+(b%c))%c;
    result3 = (a*b)%c;
    result4 = ((a%c)*(b%c))%c;
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    cout << result4 << endl;
    return 0;
}
