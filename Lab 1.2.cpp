#include <stdio.h>
#include <string.h>

void GetSet(int n, int set[]) {
  
    for (int i = 0; i < n; i++) {
        printf("Member %d: ", i + 1);
        scanf("%d", &set[i]);
    }

    printf("Values of the received set are:  ");

    for (int i = 0; i < n; i++) {
        printf("%d ", set[i]);
    }
    printf("\n");
}

int main() {
    int num;

    printf("Please enter the number of members in the set: ");
    scanf("%d", &num);

    int set[num];
    GetSet(num, set);

    return 0;
}

