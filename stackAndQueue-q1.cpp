#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        stack<char> brackets;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
                brackets.push(s[i]);
            }
            
            else {
                if(brackets.empty()) return false;
                
                if((brackets.top()=='(' && s[i]==')') ||
                   (brackets.top()=='{' && s[i]=='}') ||
                   (brackets.top()=='[' && s[i]==']') )
                   brackets.pop();
                else return false;
            }
        }
        return(brackets.empty());
    }

    int main() {
        
    }