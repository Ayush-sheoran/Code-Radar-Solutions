#include<stdio.h>
#include<ctype.h>

int main(){
    char an;
    scanf("%c", &an); 
    if (an >= 'a' && an <= 'z') {
        printf("lowercase\n");
    }
    else if (an >= '0' && an <= '9') {
        printf("Not an alphabet\n");
    }
    else if (an >= 'A' && an <= 'Z') {
        printf("Uppercase\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
