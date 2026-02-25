#include <stdio.h>

int main() {
    int age;

    printf("Apni umar (age) likhiye: ");
    scanf("%d", &age); // User se input lena

    if (age >= 18) {
        printf("Aap Vote de sakte hain! \n");
    } 
    else {
        printf("Aap abhi chote hain, Vote nahi de sakte. \n");
    }

    return 0;
}
