#include <stdio.h>

int main() {
    int num;
    printf("Enter the desired number of lines : ");
    scanf("%d", &num);
    
    for(int i=0; i<num; i++){
        printf("Hello World\n");
    }
    return 0;
}
