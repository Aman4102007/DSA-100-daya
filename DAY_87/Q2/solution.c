// Day 87 - Question 2
// Problem: Koko Eating Bananas

int minEatingSpeed(int* piles, int pilesSize, int H){int lo=1,hi=0;for(int i=0;i<pilesSize;i++){if(piles[i]>hi)hi=piles[i];}while(lo<hi){int mid=lo+(hi-lo)/2;long long t=0;for(int i=0;i<pilesSize;i++)t+=(piles[i]+mid-1)/mid;if(t<=H)hi=mid;else lo=mid+1;}return lo;}
