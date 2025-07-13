#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    string line;
    int count;
    char n;
    double num;
    cin >> count;
    cin.ignore();
    double number[count];

    for(int i=0;i<count;++i){
        getline(cin, line);
        istringstream iss(line);
        iss >> num;
        while(iss >> n){
            if(n == '@'){
                num *= 3;
            }
            else if(n == '%'){
                num += 5;
            }
            else if(n == '#'){
                num -= 7;
            }
            else{
                cout << "enter a wrong char" << endl;
            }
        }
        number[i] = num;
    }
    for(int j=0;j<count;++j){
        cout << fixed << setprecision(2) << number[j] << endl;
    }
    return 0;
}