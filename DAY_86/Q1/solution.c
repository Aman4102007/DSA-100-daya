// Day 86 - Question 1
// Problem: Square Root using Binary Search

#include <stdio.h>
int main(){
    long long n; if(scanf("%lld",&n)!=1) return 0; // read input
    long long lo=0, hi=n, ans=0; // binary search bounds
    while(lo<=hi){
        long long mid=(lo+hi)/2; // middle
        long long sq=mid*mid; // square of mid
        if(sq==n){ ans=mid; break; }
        if(sq<n){ ans=mid; lo=mid+1; }
        else hi=mid-1;
    }
    printf("%lld",ans); // output integer sqrt
    return 0;
}
