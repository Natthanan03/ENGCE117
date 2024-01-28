// Online C compiler to run C program online
#include <stdio.h>

void Add(int A[], int B[], int answer[], int size){
    int carry = 0;
    int i = size - 1;
    answer[i + 1] = (A[i] + B[i] + carry) % 10;
    carry = (A[i] + B[i] + carry) / 10;
    i--;
    
    answer[i + 1] = (A[i] + B[i] + carry) % 10;
    carry = (A[i] + B[i] + carry) / 10;
    i--;
    
    answer[i + 1] = (A[i] + B[i] + carry) % 10;
    carry = (A[i] + B[i] + carry) / 10;
    i--;
    
    answer[i + 1] = (A[i] + B[i] + carry) % 10;
    carry = (A[i] + B[i] + carry) / 10;
    i--;
    
    answer[i + 1] = (A[i] + B[i] + carry) % 10;
    carry = (A[i] + B[i] + carry) / 10;
    i--;
    
    answer[i + 1] = (A[i] + B[i] + carry) % 10;
    carry = (A[i] + B[i] + carry) / 10;
    i--;
    answer[0] = carry;
}

void subtraction(int A[], int B[], int answer[], int size){
    int borrow = 0;
    int i = size - 1;
    answer[i + 1] = (A[i] - B[i] - borrow + 10) % 10;
    borrow = (A[i] - B[i] - borrow) < 0;
    i--;
    
    answer[i + 1] = (A[i] - B[i] - borrow + 10) % 10;
    borrow = (A[i] - B[i] - borrow) < 0;
    i--;
    
    answer[i + 1] = (A[i] - B[i] - borrow + 10) % 10;
    borrow = (A[i] - B[i] - borrow) < 0;
    i--;
    
    answer[i + 1] = (A[i] - B[i] - borrow + 10) % 10;
    borrow = (A[i] - B[i] - borrow) < 0;
    i--;
    
    answer[i + 1] = (A[i] - B[i] - borrow + 10) % 10;
    borrow = (A[i] - B[i] - borrow) < 0;
    i--;
    
    answer[i + 1] = (A[i] - B[i] - borrow + 10) % 10;
    borrow = (A[i] - B[i] - borrow) < 0;
    i--;
    answer[0] = borrow;
}
void printArrayNum(int arr[], int size) {
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d ", arr[4]);
    printf("%d ", arr[5]);
    printf("\n");
}

void printArray(int arr[], int size) {
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d ", arr[4]);
    printf("%d ", arr[5]);
    printf("%d ", arr[6]);
    printf("\n");
}

int main() {
    int A[6];
    int B[6];
    int answer[7];
    char operator;
    
    printf("Enter Number A :\n");
    printf("A[0] : ");
    scanf("%d",&A[0]);
    printf("A[1] : ");
    scanf("%d",&A[1]);
    printf("A[2] : ");
    scanf("%d",&A[2]);
    printf("A[3] : ");
    scanf("%d",&A[3]);
    printf("A[4] : ");
    scanf("%d",&A[4]);
    printf("A[5] : ");
    scanf("%d",&A[5]);
    
    printf("Enter Number B :\n");
    printf("B[0] : ");
    scanf("%d",&B[0]);
    printf("B[1] : ");
    scanf("%d",&B[1]);
    printf("B[2] : ");
    scanf("%d",&B[2]);
    printf("B[3] : ");
    scanf("%d",&B[3]);
    printf("B[4] : ");
    scanf("%d",&B[4]);
    printf("B[5] : ");
    scanf("%d",&B[5]);
    
    printf("Operator : \n");
    scanf(" %c", &operator);
    
    switch (operator) {
        case '+':
            Add(A, B, answer, 6);
            break;
        case '-':
            subtraction(A, B, answer, 6);
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }
    
    printf("\nIndex      x 0 1 2 3 4 5\n");
    printf("Number A :   ");
    printArrayNum(A, 6);
    printf("Operator :                  %c\n", operator);
    printf("Number B :   ");
    printArrayNum(B, 6);
    printf("           ---------------------\n");
    printf("Answer :   ");
    printArray(answer, 7);
    printf("           =====================");

    return 0;
}

