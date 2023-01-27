#include<bits/stdc++.h>
using namespace std;

 int trap(vector<int>& height) {
        int unit=0;
        int n=height.size();
        int lmax[n], rmax[n];
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];

        for(int i=1; i<n; i++) {
            lmax[i] = max(height[i], lmax[i-1]);
        }

        for(int i=n-2; i>=0; i--) {
            rmax[i] = max(height[i], rmax[i+1]);
        }

        for(int i=1; i<n-1; i++) {
            unit += (min(lmax[i], rmax[i])) - height[i];
        }

        return unit;
    }

int main() {

}