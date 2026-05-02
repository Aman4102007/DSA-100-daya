// Day 33 - Question 1
// Problem: Infix to Postfix Conversion

#include <stdio.h>
int prec(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    if(c=='^') return 3;
    return 0;
}
int main(){
    char s[101], out[101];
    char st[101];
    int top=-1, i=0, j=0;
    if(scanf("%100s",s)!=1) return 0;
    for(i=0; s[i]; i++){
        char c=s[i];
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')|| (c>='0'&&c<='9')){
            out[j++]=c; // operand
        }else if(c=='('){
            st[++top]=c;
        }else if(c==')'){
            while(top!=-1 && st[top]!='('){
                out[j++]=st[top--];
            }
            if(top!=-1) top--; // pop '('
        }else{ // operator
            while(top!=-1 && prec(st[top])>=prec(c)){
                out[j++]=st[top--];
            }
            st[++top]=c;
        }
    }
    while(top!=-1) out[j++]=st[top--];
    out[j]='\0';
    printf("%s",out);
    return 0;
}
