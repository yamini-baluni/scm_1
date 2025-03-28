// #include<stdio.h>
// int main() {
//     int n;
// printf("enter an integer\n");
// scanf("%d", &n);

// while(n!=0)
// {
//     printf("enter an integer\n");
//     scanf("5d", &n);

// }
// printf("you are out of the loop\n");
// return 0;
// }

// int main(){
//     int n;
//     do
//     {
//         printf("enter an integer\n");
//         scanf("5d", &n);
//     } while (n!=0)
    
// printf("you are out of the loop");
// return 0;
    
// }

// int main(){
//     int n;
//     printf("enter s number\n");
//     scanf("%d", &n);

//     while(n != 0)
//     {

//         if(n < 0)
//                   break;
//         printf("enter a number\n");
//         scanf("%d", &n);
//     }
//     return 0;

// }

// int main() {
//     int a = 5,  b= 3;
//     int incr;

//     incr =  (a>b) &&  (b++);
//     printf("%d\n", incr);
//     printf("%d"  , b);
//     return 0;
// }
// int main() {
//     int a = 5,  b= 3;;
//     int incr;

//     incr =  (a<b) &&  (b++);
//     printf("%d\n", incr);
//     printf("%d"  , b);
//     return 0;
// }

// int main() {
//     int a = 5 , b= 3;
//     int incr;

//     incr = (a>b) || (b++);
//     printf("%d\n", incr);
//     printf("%d" ,b);
//     return 0;
// }

// int main() {
//     int a = 5 , b= 3;
//     int incr;

//     incr = (a<b) || (b++);
//     printf("%d\n", incr);
//     printf("%d" ,b);
//     return 0;
// }

// int main(){
//     char x = 1 , y = 2;
//     if (x&y)
//     printf("result of x&y is 1");
//     if (x&&y)
//     printf("result of x&&y is 1 ");
//     return 0;
// }

// int main() {
//     int var = 75;
//     int var2 = 56;
//     int num;

//     num = sizeof(var) ? (var2>23 ? ((var == 75) ? 'A':0) :0) :0;
//     printf("%d" , num);
//     return 0;


// }
// int main(){
// int a = 1;
// int b = 1;
// int c = ++a || b++;
// int  d = b-- && --a;
// printf("%d %d %d %d" , d ,c, b, a);
// return 0;
// }

// int main(){
//     int i =5 , 3 ,2;
//     printf("%d" , i);
//     return 0;

// }
// int main(){
//     int rows;
//     int columns;
//     char symbol;
//     printf("Enter no. of rows:");
//     scanf("%d", &rows);

//     printf("Enter  no. of columns:");
//     scanf("%d", &columns);

//     // while(getchar() != '\n');
//     printf("Enter symbol to be printed:");
//     scanf("%c", &symbol);

//     for(int i=1;i<=rows;i++){
//         for (int j=1;j<=columns;j++);
//         {
//             printf("%c", symbol);
//         }
//         printf("/n");
//     }
//     return 0;
// }



// int main() {
//     int n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf("  ");
//         }
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf("  "); 
//         }
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n = 4;
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++)
//             printf(" ");
//         for (int j = 1; j <= (2 * i - 1); j++)
//             printf("*");
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float bill, discount;
//     printf("Enter bill amount: ");
//     scanf("%f", &bill);
//     if (bill<=80){
//         discount = 0;
//         printf("payable amount is %.3f", bill - (bill * discount / 100));
//     }
//     else if (bill == 299) {
//         discount = 2;
//         printf("Discounted amount is %.3f", bill - (bill * discount / 100));
//     } else if (bill > 300 && bill < 400) {
//         discount = 3;
//         printf("Discounted amount is %.3f", bill - (bill * discount / 100));
//     } else if (bill > 400 && bill < 500) {
//         discount = 5;
//         printf("Discounted amount is %.3f", bill - (bill * discount / 100) + (bill * 20 / 100));
//     } else if (bill > 500) {
//         discount = 6;
//         printf("Discounted amount is %.3f", bill - (bill * discount / 100) + (bill * 20 / 100));
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int m=n;
//     int sum =0;
//     while (n>0){
//         int last_digit = m%10;
//         m = m/10;
//         sum = sum + last_digit;
//     }
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, originalNum, remainder, n = 0;
//     double result = 0.0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     if ((int)result == num)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;
// }

// input a number and calculate the sum of even digits present in it.
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int m = n;
//     int sum = 0;

//     while (m > 0) {
//         int last_digit = m % 10;
//         m = m / 10;
//         if (last_digit % 2 == 0) {
//             sum = sum + last_digit;
//         }
//     }

//     printf("Sum of even digits is %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int m = n;
//     int sum = 0;

//     while (m > 0) {
//         int last_digit = m % 10;
//         m = m / 10;
//         if (last_digit % 2 != 0) {
//             sum = sum + last_digit;
//         }
//     }
    
//     printf("Sum of odd digits is %d\n", sum);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int m = n;
//     int sum_even = 0;
//     int sum_odd = 0;

//     while (m > 0) {
//         int last_digit = m % 10;
//         m = m / 10;
//         if (last_digit % 2 == 0) {
//             sum_even += last_digit;
//         } else {
//             sum_odd += last_digit;
//         }
//     }

//     if (sum_even < sum_odd) {
//         printf("Smaller sum is of even digits: %d\n", sum_even);
//     } else {
//         printf("Smaller sum is of odd digits: %d\n", sum_odd);
//     }

//     return 0;
// }
// Q1

// #include <stdio.h>

// int main() {
//     int numVideos;
//     printf("Enter the number of videos: ");
//     scanf("%d", &numVideos);

//     int views[numVideos];
//     for (int i = 0; i < numVideos; i++) {
//         printf("Enter the number of views for video %d: ", i + 1);
//         scanf("%d", &views[i]);
//     }

//     double totalRevenue = 0.0;
//     for (int i = 0; i < numVideos; i++) {
//         totalRevenue += views[i] * 0.02;
//     }

//     printf("Total revenue: $%.2f\n", totalRevenue);

//     return 0;
// }


// // Q2 
// #include <stdio.h> 

// int main(){
//     int threshold, n, calory, counter;
//     printf("Enter the threshold: ");
//     scanf("%d", &threshold);

//     printf("Enter the number of days: ");
//     scanf("%d", &n);

//     if (n<=0) {
//         printf("Invalid Number of Days");
//     } else {
//         for (int i=1; i<=n; i++) {
//             printf("Enter Calory intake for day %d: ", i);
//             scanf("%d", &calory);

//             if (calory > threshold) {
//                 counter++;
//             }
//         }
//         printf("Number of days with calory intake greater than threshold: %d\n", counter);

//     }


//     return 0;
// }

// calculate the average number of days user go to the gym
// #include <stdio.h> 

// int main(){
//     float days;
//     float hours;
//     printf("Number of Days: ");
//     scanf("%f", &days);

//     float avg = 0;

//     if (days<=0) {
//         printf("Invalid Input");
//     } else {

//         for (int i=1; i<=days; i++) {
//             printf("Enter Number of hours at Days %d:", i);
//             scanf("%f", &hours);

//             avg += hours;
//         }
//         printf("Average hours: %.2f\n", avg/days);

//     }

//     return 0;
// }

// #include <stdio.h> 

// int main(){
//     int subs, marks, totMarks = 0;
//     printf("Enter number of subjects: ");
//     scanf("%d", &subs);

//     int i;
//     while (i < subs) {
//         printf("Enter marks of subject %d: ", i+1);
//         scanf("%d", &marks);

//         if (marks>0) {
//             totMarks += marks;
//         } else {
//             break;
//         }
//         i++;
//     }
//     printf("Total Marks: %d\n", totMarks);
    

//     return 0;
// }

// using switch case display seasons(autumn,summer,winter,spring) based on the month entered by the user
// #include <stdio.h>

// input any 6 months of your choice and display the days in those months using switch case.
// #include <stdio.h>

// int main() {
//     int month, days;

//     for (int i = 1; i <= 6; i++) {
//         printf("Enter month %d (1-12): ", i);
//         scanf("%d", &month);

//         switch (month) {
//             case 1:
//             case 3:
//             case 5:
//             case 7:
//             case 8:
//             case 10:
//             case 12:
//                 days = 31;
//                 break;
//             case 4:
//             case 6:
//             case 9:
//             case 11:
//                 days = 30;
//                 break;
//             case 2:
//                 days = 28;
//                 break;
//             default:
//                 printf("Invalid month\n");
//                 continue; 
//         }

//         printf("Month %d has %d days\n", month, days);
//     }

//     return 0;
// }

// IN THE MONTH OF SUMMER, UR FRIDGE IS ALWAYS FILLED WITH COLDDRINK BOTTLES AND AAPKO EK PROGRAM BANANAN HAI KI AAPKO EK THRESHHOLD RAKHNI HAI KI MINIMUM ITNI BOTTLES HONI CHAHIYE COZ IF FRIENDS COME OR WTV. AND IF NOT, REMINDER ANA CHAHIYE KI LELO. FOR EXAMPLE 100 BOTTLES HAI AND THRESHOLD IS 40. SO IF 60 BOTTLES CONSUMED, I GET A NOTIFICATION TO REFILL THEM.
// #include <stdio.h>
// int main(){
//     int bottles, threshold, bottlesused;
//     printf("Enter the total number of bottles: ");
//     scanf("%d", &bottles);

//     printf("Enter the number of bottles used: ");
//     scanf("%d", &bottlesused);

//     printf("Enter the threshold: ");
//     scanf("%d", &threshold);

//     if (bottlesused > threshold) {
//         printf("Notification: Refill the bottles\n");
//     } else {
//         printf("You have enough bottles\n");
//     }

//     return 0;
// }

#include <stdio.h> 

int main(){
    int threshold, curr_stock, total_stock;

    scanf("%d %d %d", &threshold, &curr_stock, &total_stock);

    if (threshold<0 || curr_stock<0 || total_stock<=0) {
        printf("Invalid Input");
    } else {
        if (curr_stock < threshold) {
            printf("Purchase more bottles!");
        }
    }

    return 0;
}