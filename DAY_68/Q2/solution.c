// Day 68 - Question 2
// Problem: Alien Dictionary

char* findOrder(char **words, int n, int k){
    int g[26][26]={0}, indeg[26]={0};
    for(int i=0;i<n-1;i++){
        int a=0; while(words[i][a] && words[i+1][a] && words[i][a]==words[i+1][a]) a++;
        if(words[i][a] && words[i+1][a]){int u=words[i][a]-'a', v=words[i+1][a]-'a'; if(!g[u][v]){g[u][v]=1; indeg[v]++;}}
    }
    int q[26], front=0, back=0;
    for(int i=0;i<k;i++) if(indeg[i]==0) q[back++]=i;
    static char res[1005]; int idx=0;
    while(front<back){int u=q[front++]; res[idx++]=u+'a'; for(int v=0;v<k;v++) if(g[u][v]){if(--indeg[v]==0) q[back++]=v;}}
    res[idx]='\0';
    static char out[1005]; strcpy(out,res); return out;}
