#include<stdio.h>


int main(){
    char an;
    scanf("%c", &an); 
    if (an >= 'a' && an <= 'z') {
        printf("lowercase\n");
    }
    else if (an >= 'A' && an <= 'Z') {
        printf("Uppercase\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}
