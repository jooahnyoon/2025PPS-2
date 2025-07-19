#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix){
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> result(col, vector<int>(row));
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
               result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};

int main(){
    Solution run;
    vector<vector<int>> g;
    string line;
    cout << "matrix = ";
    getline(cin, line);
    istringstream iss(line);
    string rowStr;

    while(getline(iss, rowStr, ']')){ 
        size_t idx = rowStr.find_last_of('[');
        if(idx == string:: npos){
            continue;
        }   
        rowStr = rowStr.substr(idx + 1); 
        stringstream rowSS(rowStr);     

        vector<int> row;
        int num;
        char ch;
        while(rowSS >> num){          
            row.push_back(num);
            rowSS >> ch;
        }
        if(!row.empty()){
            g.push_back(row);  
        }     
    }    
    vector<vector<int>> m = run.transpose(g);
    cout << "output: " << "["; 
    for(auto it = m.begin(); it != m.end(); ++it){
        vector<int>row = *it;
        cout << "[";
        for(int i=0;i<row.size();++i){
            if(i != row.size()-1){
                cout << row[i] << ",";
            }
            else{
                cout << row[i];
            }
        }
        if(it == m.end()-1){
            cout << "]";
        }
        else{
            cout << "],";
        }
    } 
    cout << "]" << endl;
    return 0;
}
