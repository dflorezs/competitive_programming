#include<stdio.h>

sum();

int main(){
    int a, b, c;
    char s[101];
    
    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);

    printf("%d %s", sum(a, b, c), s);
    
    return 0;

}

int sum(int a, int b, int c){
    return a + b + c;
}

