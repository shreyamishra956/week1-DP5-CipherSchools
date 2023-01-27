#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    
    
    void permutation(vector<int> vec, int counter, vector<vector<int>> &ans)
    {
        if(counter >= vec.size())
        {
            ans.push_back(vec);
            return;
        }
        for(int i = counter; i < vec.size(); i++)
        {
            swap(vec[counter], vec[i]);
            permutation(vec, counter+1, ans);
            swap(vec[counter], vec[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& vec) 
    {
        vector<vector<int>> ans;
        permutation(vec, 0, ans);
        return ans;
    }
};



int main()
{

}