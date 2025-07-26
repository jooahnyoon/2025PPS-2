#include <iostream>
using namespace std;

int main(){
    int y, year;
    while((y < 1000) || (y > 3000)){
        cin >> y;
    }
    year = y - 543;
    cout << year << endl;
    return 0;
}
