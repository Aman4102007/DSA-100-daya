// Day 71 - Question 1
// Problem: Hash Table Using Quadratic Probing

#include <stdio.h>
int main(){
    int m,n; if(scanf("%d%d",&m,&n)!=2)return 0; int arr[m]; for(int i=0;i<m;i++)arr[i]=-1;
    char op[10]; int x;
    for(int q=0;q<n;q++){
        scanf("%s%d",op,&x);
        if(op[0]=='I'){ // INSERT
            for(int i=0;;i++){
                int pos=(x+i*i)%m;
                if(arr[pos]==-1){arr[pos]=x;break;}
            }
        }else{ // SEARCH
            int found=0;
            for(int i=0;;i++){
                int pos=(x+i*i)%m;
                if(arr[pos]==x){found=1;break;}
                if(arr[pos]==-1){break;}
            }
            printf(found?"FOUND\n":"NOT FOUND\n");
        }
    }
    return 0;
}
