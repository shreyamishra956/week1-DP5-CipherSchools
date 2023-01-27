#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sr=0, er=matrix.size()-1;
        int sc=0, ec=matrix[0].size()-1;
        vector<int> order;

        while(sr<=er && sc<=ec) {
        for(int i=sc; i<=ec; i++) {
            order.push_back(matrix[sr][i]);
        }
        sr++;

        for(int i=sr; i<=er; i++) {
            order.push_back(matrix[i][ec]);
        }
        ec--;

        if(sr>er || sc>ec) break;
        
        for(int i=ec; i>=sc; i--) {
            order.push_back(matrix[er][i]);
        }
        er--;

        for(int i=er; i>=sr; i--) {
            order.push_back(matrix[i][sc]);
        }
        sc++;
        }

        return order;
}

int main() {
    
}