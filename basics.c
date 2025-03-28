// Hello World program
// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }

// C program to add two numbers
// #include <stdio.h>

// int main() {
//     int a, b, sum = 0;
  
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);

    // Calculate the addition of a and b
    // using '+' operator
//     sum = a + b;

//     printf("Sum: %d", sum);

//     return 0;
// }

// Write a program to find the size of int, float, double, and char.
// #include <stdio.h>

// int main() {
    
//     printf("Size of int : %u bytes\n", sizeof(int));
//     printf("Size of float : %u bytes\n", sizeof(float));
//     printf("Size of double : %u bytes\n", sizeof(double));
//     printf("Size of char : %u bytes\n", sizeof(char));

//     return 0;

// }

// Q4: Write a Program to Swap the values of two variables.

// #include <stdio.h>

// int main() {
//     int a , b , temp;
//     printf("Enter value for a: ");
//     scanf("%d", &a);
//     printf("Enter value for b: ");
//     scanf("%d", &b);

//     temp = a;
//     a = b;
//     b = temp;

//     printf("After , value of a: %d\n", a);
//     printf("After , value of b: %d\n", b);

//     return 0;
// }


// Q5) C countries participated in an event that happened in April of 2021 and 2022 in
// Dubai. There were K categories in which Gold, Silver and Bronze prizes were given
// to the participants. Given a country and type of medal, write a C program to get the
// total number of (required type) medals have been won by the given country
// (in 2021 and 2022 combined).
// C Passed, 10 marks

#include <stdio.h>
     int main() {
            int C, N, M;
            scanf("%d %d %d", &C, &N, &M);
            int medals[C][3][2];
            for (int i = 0; i < C; i++) {
                for (int j = 0; j < 3; j++) {
                    for (int k = 0; k < 2; k++) {
                        scanf("%d", &medals[i][j][k]);
                    }
                }
            }
            int total = 0;
            for (int i = 0; i < C; i++) {
                total += medals[i][M - 1][N - 1];
            }
            printf("%d", total);
            return 0;
     }

