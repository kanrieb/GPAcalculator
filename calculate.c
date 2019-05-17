#include <stdio.h>

int main() {
    int a, b;
    int c;
    float d;

    printf("Enter number of courses: ");
    fflush(stdout);
    scanf("%d", &a); //gets number of courses

    float A[a]; //creates an array to store the total course points
    float B[a]; //creates an array to store the total unit values

    for (b=0; b<a; b++){
        printf("Enter your grade point and the course unit value: ");
        fflush(stdout);
        scanf("%d, %f", &c, &d);

        A[b] = c*d; //course points array
        B[b] = d; //course unit value array
    }

    for (b = 1; b<a; b++){
        A[b] = A[b] + A[b-1];
        B[b] = B[b] + B[b-1];
    }

    float t = A[a-1]/B[a-1]; //divides total course points by total course unit value
    float k = B[a-1];
    printf("Your overall GPA is %.2f out of 9.\n", t);
    printf("Total units is %.2f.", k);

    return 0;
}
