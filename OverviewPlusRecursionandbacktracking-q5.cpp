#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    vector<vector<int>> vec;
    
    int fun(int m, int n, int x, int y)
    {
        if(x == m-1 && y == n-1){
            return vec[x][y] = 1;
        }
        if(x >= m || y >= n){
            return 0;
        }
        
        if(vec[x][y] != -1)
            return vec[x][y];
        
        return vec[x][y] = fun(m, n, x+1, y) + fun(m, n, x, y+1);
    }
    
    int uniquePaths(int m, int n) {
        vec.resize(m+1, vector<int> (n+1, -1));
        return fun(m, n, 0, 0);
    }
};



int main()
{

}