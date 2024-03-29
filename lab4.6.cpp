#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode* next;
};

void SaveNode(struct studentNode* child, char n[], int a, char s, float g);
void GoNext2(struct studentNode*** walk);

int main() {
    struct studentNode* start, * now1, ** now2;
    start = new struct studentNode;
    SaveNode(start, "one", 6, 'M', 3.11);

    start->next = new struct studentNode;
    SaveNode(start->next, "two", 8, 'F', 3.22);

    start->next->next = new struct studentNode;
    SaveNode(start->next->next, "three", 10, 'M', 3.33);

    start->next->next->next = new struct studentNode;
    SaveNode(start->next->next->next, "four", 12, 'F', 3.44);

    now1 = start;
    now2 = &start;

    GoNext2(&now2);
    
    return 0;
}

void SaveNode(struct studentNode* child, char n[], int a, char s, float g) {
    strcpy(child->name, n);
    child->age = a;
    child->sex = s;
    child->gpa = g;
    child->next = NULL;
}

void GoNext2(struct studentNode*** walk) {
    printf("%s ", (**walk)->name);
    printf("%d ", (**walk)->age);
    printf("%c ", (**walk)->sex);
    printf("%.2f ", (**walk)->gpa);
    printf("\n");

    while (*walk != NULL && (**walk)->next != NULL) {
        *walk = &((**walk)->next);
        printf("%s ", (**walk)->name);
        printf("%d ", (**walk)->age);
        printf("%c ", (**walk)->sex);
        printf("%.2f ", (**walk)->gpa);
        printf("\n");
    }
}

