#include <stdio.h>

int main() 
{
    int n, i, j, space;

    printf("Enter the size of diamond: ");
    scanf("%d", &n);


   

    // Lower Half
    for (i = n-2; i >= 0; i--) {
        for (space = 1; space < n-i; space++) {
            printf(" ");
        }
        for (j = 0; j < 2*i+1; j++) {
            if (j == 0 || j == 2*i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
     for (i = 0; i < n; i++) {
        for (space = 1; space < n-i; space++) {
            printf(" ");
        }
        for (j = 0; j < 2*i+1; j++) {
            if (j == 0 || j == 2*i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}