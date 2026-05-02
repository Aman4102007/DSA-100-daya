// Day 20 - Question 2
// Problem: 3Sum

#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& a){
    sort(a.begin(),a.end());
    int n=a.size();
    vector<vector<int>> res;
    for(int i=0;i<n;i++){
        if(i>0&&a[i]==a[i-1]) continue; // skip dup
        int l=i+1,r=n-1;
        while(l<r){
            int s=a[i]+a[l]+a[r];
            if(s==0){
                res.push_back({a[i],a[l],a[r]});
                while(l<r&&a[l]==a[l+1]) l++; // skip dup
                while(l<r&&a[r]==a[r-1]) r--; // skip dup
                l++;r--;            
            }else if(s<0) l++; else r--;        
        }
    }
    return res;
}