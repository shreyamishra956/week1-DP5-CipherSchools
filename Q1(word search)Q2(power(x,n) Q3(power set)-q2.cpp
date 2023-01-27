#include<bits/stdc++.h>
using namespace std





class Solution {
public:
    double myPow(double x, int n) {
        double ans = x;
        if(n == 0) return 1;
        if(n > 0)
        {
            double mult = 1;
            while(n > 1)
            {
                if(n % 2 == 0)
                {
                    ans = ans * ans;
                    n = n/2;
                }
                else
                {
                    n = n-1;
                    mult = mult * ans;
                }
            }
            ans = ans * mult;
        }
        else
        {
            long long temp = n;
            long long m = -temp;
            double mult = 1;
            while(m > 1)
            {
                if(m % 2 == 0)
                {
                    ans = ans * ans;
                    m = m/2;
                }
                else
                {
                    m = m-1;
                    mult = mult * ans;
                }
            }
            ans = ans * mult;
            ans = 1/ans;
        }
        return ans;
    }
};



int main()
{
    
}