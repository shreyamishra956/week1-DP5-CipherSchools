#include<bits/stdc++.h>
using namespace std;

void mergeSortedArrays(vector<int> &arr1, int m, vector<int> &arr2, int n) {
    int i=m-1, j=n-1, k=(m+n)-1;
    while(i >= 0 && j >= 0) {
        if(arr1[i] > arr2[j]) {
            arr1[k] = arr1[i];
            i--;
            k--;
        }
        else {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    while(j >= 0) {
        arr1[k] = arr2[j];
        j--;
        k--;
    }
}

int main() {
    
}