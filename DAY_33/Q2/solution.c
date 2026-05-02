// Day 33 - Question 2
// Problem: Evaluate Reverse Polish Notation

int evalRPN(char** tokens, int tokensSize){int st[tokensSize];int top=-1;for(int i=0;i<tokensSize;i++){char *t=tokens[i];if(t[0]=='+'||t[0]=='-'||t[0]=='*'||t[0]=='/'){
int b=st[top--];int a=st[top];int r;switch(t[0]){case '+':r=a+b;break;case '-':r=a-b;break;case '*':r=a*b;break;default:r=a/b;}
st[++top]=r;}
else{st[++top]=atoi(t);} }return st[top];}