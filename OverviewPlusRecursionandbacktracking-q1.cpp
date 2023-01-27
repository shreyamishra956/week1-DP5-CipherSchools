#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void fun(string str, int open, int close, vector<string> &vec)
    {
        if(open > close)
        {
            return;
        }
        if(open == 0 && close == 0)
        {
            vec.push_back(str);
            return;
        }
        
        if(open > 0)
            fun(str+'(', open-1, close, vec);
        if(close > 0)
        fun(str+')', open, close-1, vec);
    }
    
    vector<string> generateParenthesis(int n) 
    {
        string str;
        vector<string> vec;
        fun(str, n, n, vec);
        return vec;
    }
};


int main()
{

}