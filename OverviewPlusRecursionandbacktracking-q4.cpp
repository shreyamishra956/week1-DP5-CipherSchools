#include<bits/stdc++.h>
using namespace std;


class solution
{
public:
    void powerset(string &s, vector<string> &vec, int counter, string str)
    {
        if(counter >= s.length())
        {
            if(str.length() > 0)
                vec.push_back(str);
            return;
        }
        
        
        powerset(s, vec, counter+1, str);
        powerset(s, vec, counter+1, str+s[counter]);
    }
    
	public:
		vector<string> AllPossibleStrings(string s)
		{
		    string str;
		    vector<string> vec;
		    powerset(s, vec, 0, str);
		    sort(vec.begin(), vec.end());
		    return vec;
		}
};


int main()
{
    
}
    