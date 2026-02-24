#include <stdio.h>

int main() {
    int age;
    printf("Apni age enter karein: ");
    
    // User se input lene ke liye scanf ka use hota hai
    scanf("%d", &age); 
    
    printf("Wow! Aap %d saal ke hain.", age);
    return 0;
}
