#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> rotation(vector<vector<int>>& matrix) {
        
        vector<vector<int>> ans(matrix[0].size(), vector<int>(matrix.size()));
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<matrix[i].size(); j++) {
                ans[j][i] = matrix[i][j];
            }
        }

        for(int i=0; i<matrix.size(); i++) {
            reverse(ans[i].begin(), ans[i].end());
        }
        
        return ans;
 }

 int main() {
    
 }