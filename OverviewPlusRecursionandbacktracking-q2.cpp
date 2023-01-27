#include<bits/stdc++.h>
using namespace std;

void combi(string digi, string str, vector<string> &vec, int i, unordered_map<char, string> &mp)
    {
        if(i >= digi.length())
        {
            vec.push_back(str);
            return;
        }
        
        
        for(int count=0; count<mp[digi[i]].length(); count++)
        {
            combi(digi, str+mp[digi[i]][count], vec, i+1, mp);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        string str;
        vector<string> vec;
        if(digits.size() == 0)
            return {};
            
        unordered_map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        
        
        combi(digits, str, vec, 0, mp);
        return vec;
    }

int main()
{
    
}