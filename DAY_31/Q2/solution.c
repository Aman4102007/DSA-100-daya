// Day 31 - Question 2
// Problem: Valid Parentheses

bool isValid(char *s){int n=strlen(s);char st[n];int top=-1;for(int i=0;i<n;i++){char c=s[i];if(c=='('||c=='['||c=='{')st[++top]=c;else{if(top==-1)return false;char t=st[top--];if((c==')'&&t!='(')||(c==']'&&t!='[')||(c=='}'&&t!='{'))return false;}}return top==-1;}
