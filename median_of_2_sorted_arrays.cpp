#include<bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> l_a,vector<int> r_a){
    vector<int> f_a;
    int left =0;
    int right =0;

    while(left<l_a.size() && right < r_a.size()){
        if (l_a[left]<=r_a[right]){
            f_a.push_back(l_a[left]);
            left++;
        }
        else{
            f_a.push_back(r_a[right]);
            right++;
        }
    }
    while(left<l_a.size()){
        f_a.push_back(l_a[left]);
        left++;
    }

    while(right<r_a.size()){
        f_a.push_back(r_a[right]);
        right++;
    }

    return f_a;


}

class Solution {
public:
    double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
        vector<int> cb = merge(n1, n2);

        int n = cb.size();
        if (n % 2 == 0) {
            return (cb[n / 2 - 1] + cb[n / 2]) / 2.0;
        } else {
            return cb[n / 2];
        }
    }
};