#include<bits/stdc++.h>
using namespace std;

int bitonicArray(vector<int>& arr) {
        int start=0, end=arr.size()-1;
         while(start <= end) {
            int mid=start+(end-start)/2;
             
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;

            else if(arr[mid] < arr[mid+1]) start=mid+1;

            else end=mid;
         }
         return 0;
    }

int main() {
    
}