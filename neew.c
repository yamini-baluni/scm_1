// #include <stdio.h>
// int  main(){
    // int i = 10;
    // int *p ,*q;
    // p= &i;
    // q = p;

//     int i = 10, j=  20;
//     int *p, *q;
//     p = &i;
//     q = &j;
//     *q = *p;
// }

// #include <stdio.h>

// void minMax(int arr[], int len, int *min, int *max)
// {
//     *min = *max = arr[0];
//     int i;
//     for (i = 1; i < len; i++)
//     {
//         if (arr[i] > *max)
//             *max = arr[i];
//         if (arr[i] < *min)
//             *min = arr[i];
//     }
// }

// int main()
// {
//     int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
//     int min, max;
//     int len = sizeof(a) / sizeof(a[0]);
//     minMax(a, len, &min, &max);
//     printf("Minimum value in the array is: %d and Maximum value is: %d", min, max);
//     return 0;
// }

// #include <stdio.h>

// int *findMid(int a[], int n)
// {
//     return &a[n / 2];
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     int *mid = findMid(a, n);
//     printf("%d", *mid);
//     return 0;
// }

// void fun(const int *p)
// {
//     *p = 0;
// }
// int main(){
//     const int i = 10;
//     fun(&i);
//     return 0;a
// }
// int main(){
//     int a[] = {5,16,7,89,45,32,23,10};
//     int *p = &a[2];
//     printf("%d", *(--p));
//     printf("%d", *(p--));
//     return 0;
// }

 //enter marks in 5 subjects enter using arrays and using pointers and find the sum other marks obtained and total in the end and when you enter a negative number the it will give invalid number and pls enter new number.
//  #include <stdio.h>

//  int main() {
//      int marks[5]; 
//      int *ptr = marks; 
//      int sum = 0, i;
 
//      for (i = 0; i < 5; i++) {
//          printf("Enter marks for subject %d: ", i + 1);
//          scanf("%d", (ptr + i));
         
//          while (*(ptr + i) < 0) {
//              printf("Invalid number! Please enter a non-negative value for subject %d: ", i + 1);
//              scanf("%d", (ptr + i));
//          }
 
//          sum += *(ptr + i); 
//      }
 
//      printf("\nTotal Marks Obtained: %d\n", sum);
//      printf("Total Marks Possible: 500\n"); 
 
//      return 0;
//  }



// int main() {
//     int hours, total = 0;

//     printf("Enter the number of hours to track logins: ");
//     scanf("%d", &hours);

//     int loginData[hours];

//     for (int i = 0; i < hours; i++) {
//         printf("Hour %d: Enter the number of students logged in: ", i + 1);
//         scanf("%d", &loginData[i]);
//         total += loginData[i]; 
//     }

//     printf("\nLogin Report:\n");
//     for (int i = 0; i < hours; i++) {
//         printf("Hour %d: %d students logged in\n", i + 1, loginData[i]);
//     }

//     printf("\nTotal students logged in: %d\n", total);

//     return 0;
// }

// int  fun(){
//     int count = 0;
//     count++;
//     return count;
// }
// int main(){
//     printf("%d",  fun());
//     printf("%d",fun());
//     return 0;
// }

// int  fun(){
//     static int count = 0;
//     count++;
//     return count;
// }
// int main(){
//     printf("%d",  fun());
//     printf("%d",fun());
//     return 0;

// #include <stdio.h>

// int main() {
//     int i, j;
//     int rows = 3; 

//     for (i = 1; i <= rows; i++) {
        
//         for (j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }
        
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i, j;
//     int rows = 3; 

//     for (i = rows; i >= 1; i--) {
//         for (j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }}
// }

// #include <stdio.h>
// int main(){
//     int a =20;
//     int b(int a);{
//         if(a<=1)
//         return a;
//         return b(a-1)+a;
//     } nb }

// 
// sum of digits using recursion 
// #include <stdio.h>
// int sumOfDigits(int n) {
//     if (n == 0)
//         return 0; 
//     return (n % 10) + sumOfDigits(n / 10); 
// }

// int main() {
//     int num = 1001;
//     printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));
//     return 0;
// }

#include <stdio.h>

// Bubble Sort Function
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {17, 14, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);
    
    printf("Sorted array: ");
    printArray(arr, n);
    
    return 0;
}
