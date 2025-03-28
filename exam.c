// #include <stdio.h>
// int main(){
//     int a = 10;
// if (a = 5)  
//     printf("True");  
// else  
//     printf("False");

//     return 0;
// }
// True (because a = 5 is an assignment, not a condition check)


//Q1 check if a number is even or odd
// #include <stdio.h> 
// int main(){
//     int num;
//     printf("Enter a number:  ");
//     scanf("%d", &num);

//     if (num%2==0){
//         printf("%d is even.\n", num);
//     }
//     else{
//         printf("%d is odd.\n", num);
//     }
//     return 0;
// }

// Q2 Check if a number is Prime
// #include <stdio.h>
// int main(){
//     int num,i,flag=1;
//     printf("Enter a number:  ");
//     scanf("%d", &num);

//     if (num<=1) flag=0;
//     for (i=2; i<=num /2 ; i++){
//         if (num%i==0){
//             flag =0;
//             break;
//         }
//     }

//     if (flag)
//     printf("%d is a prime number.\n",num);
//     else
//     printf("%d is not a prime number.\n", num);
//     return 0;
// }

// Q3 Find Factorial of a Number

// #include <stdio.h>

// int main() {
//     int num, i;
//     unsigned long long fact = 1;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (i = 1; i <= num; i++)
//         fact *= i;

//     printf("Factorial of %d is %llu\n", num, fact);
//     return 0;
// }

// Q4 Reverse a Number
// #include <stdio.h>
// int main(){
//     int num,rev=0,remainder;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     while (num != 0){
//         remainder  = num % 10;
//         rev = rev*10 + remainder;
//         num /=10;
//     }
//     printf("Reversed number : %d\n", rev);
//     return 0;
// }

// Q5 Check if a Number is Palindrome
// #include <stdio.h>
// int main(){
//     int num, temp, rev= 0, remainder;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     temp = num;
//     while(temp != 0){
//         remainder = temp % 10;
//         rev = rev*10 + remainder;
//         temp /= 10;
//     }
//     if (num==rev)
//     printf("%d is a palindrome.\n", num);
//     else
//     printf("%d ia not a palindrome.\n", num);
//     return 0;
// }

// Q6 Find Sum of Digits of a Number
// #include <stdio.h>
// int main(){
//     int num,sum=0,digit;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     while(num>0){
//         digit = num % 10;
//         sum += digit;
//         num /= 10;
//     }

//     printf("Sum of diigts: %d\n", sum);
//     return 0;
// }

// Q7 Find the Largest Number Among Three Numbers
// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a>=b && a>=c){
//         printf("%d is the largest number.\n",a);
//     }
//     else if(b>=a && b>=c){
//         printf("%d is the largest number.\n",b);
//     }
//     else{
//         printf("%d is the largest number.\n",c);

//     }
//     return 0;
// }

// Q8 Print Fibonacci Series (n terms).
// #include <stdio.h>
// int main(){
//     int n,t1=0,t2=1,nextTerm;
//     printf("Enter number of terms:  ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: %d %d", t1, t2);

//     for (int i=3;i<=n;  i++){
//         nextTerm = t1+t2;
//         printf(", %d", nextTerm);
//         t1=t2;
//         t2=nextTerm;
//     }
//     printf("\n");
//     return 0;
// }

// Q9 Print Multiplication Table of a Number
// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (int i=1; i<=10; i++)
//         printf("%d * %d = %d\n",num,i,num*i);
//         return 0;
        
// }

// 10. Check if a Number is an Armstrong Number
// #include <stdio.h>
// int main(){
    
// }

// You are tasked with developing a program that analysis students' exam results. The program should take two integer inputs: the total marks obtained by a student and the maximum marks. Implement the following logic:

// - If the obtained marks are less than the passing mark, which is 40 percent of the maximum marks, then print "Fail".
// - If the obtained marks are equal to or greater than the passing mark, check the percentage obtained. 

// If the percentage is greater than 90%, print "Excellent"; 
// if percentage in between 75% and 90% (both inclusive), print "Good"; 
// if percentage in between 50% and 74% (both inclusive), print "Average"; and 
// if percentage less than 50%, print "Below Average"

// #include <stdio.h>
// int main(){
//     int obtmarks,maxmarks;
//     int passmarks;

//     printf("");
//     scanf("%d", &obtmarks);
//     printf("");
//     scanf("%d",&maxmarks);

//     passmarks = 0.4*maxmarks;

//     if(obtmarks<passmarks){
//         printf("Fail\n");
//     }
//     else{
//         float percentage = (float)obtmarks/maxmarks*100;
//         if (percentage>90){
//             printf("Excellent\n");
//         }
//         else if (percentage>=75 && percentage<=90){
//             printf("Good\n");
//         }
//         else if (percentage>=50 && percentage<=74){
//             printf("Average\n");
//         }
//         else{
//             printf("Below Average\n");
//         }
//     }
// }


// Develop a program that calculate the monthly mobile bill. The program should take two integer inputs: i) total number of call consumed, ii) total number of sms. Further, consider the following conditions to compute the total mobile bill. 

// Conditions:
// -Fixed rent=100
// -Call charges:
// First 50 calls free 
// 50 <=Calls <=100, the rate is Rs. 0.80/call.
// 100 <Calls <=200, the rate is Rs. 0.50/call.
// Calls>200, the rate is Rs. 0.10/call.
// -SMS charges:
// 	First 100 messages are free
// And for messages>100, the rate is Rs. 0.50/sms
// -An additional surcharge of 10% is added to the total bill 

// #include <stdio.h>
// int main(){
//     int totalCalls, totalSMS;
//     int FixedRent = 100;
//     int freeCallsLimit = 50, freeSMSLimit = 200;
//     float surchargeRate = 0.10;
//     float callRate1= 0.80, callRate2=0.50, callRate3=0.10;
//     float SMSRate = 0.50;

//     scanf("%d", &totalCalls);
//     scanf("%d", &totalSMS);

//       float callCharges =0;

//       if (totalCalls>freeCallsLimit){
//             if(totalCalls<=100){
//                 callCharges = (totalCalls-freeCallsLimit)*callRate1;
//             }
//             else if(totalCalls<=200){
//                 callCharges =  50*callRate1 + (totalCalls-100)*callRate2;
//             }
//             else{
//                 callCharges = 50*callRate1 + 100*callRate2+ (totalCalls-200)*callRate3;
//             }
//       }

//       float SMSCharges = 0;
//       if(totalSMS>freeSMSLimit){
//         SMSCharges = (totalSMS-freeSMSLimit)*SMSRate;
//       }
//       float totalBillBeforeSurcharge = FixedRent + callCharges +  SMSCharges;
//       float Surcharge = surchargeRate*totalBillBeforeSurcharge;
//       float totalBill = totalBillBeforeSurcharge + Surcharge;

//       printf("%.2f",totalBill);
//       return 0 ;
// }

// #include <stdio.h>
// #include <math.h>

// int main(){
//     char operator;
//     double num1, num2;

//     scanf("%lf %lf",&num1, &num2);
//     scanf("%c", &operator);

//     switch(operator){
//         case '+':
//         printf("%.2lf+%.2lf=%.2lf",num1,num2,num1+num2);
//         break;
//         case '-':
//         printf("%.2lf-%.2lf=%.2lf",num1,num2,num1-num2);
//         break;
//         case '*':
//         printf("%.2lf*%.2lf=%.2lf",num1,num2,num1*num2);
//         break;
//         case '/':
//         if(num2 !=0){
//             printf("%.2lf / %.2lf = %.2lf",num1, num2,  num1/num2);
//         }
//         else{
//             printf("Divide by Zero.");
//             return 0;
//         }
//         break;
//         case '%':
//         if (num2!=0){
//             printf("%.2lf %% %.2lf = %.2lf", num1, num2,fmod(num1,num2));
//         }
//         else{
//             printf("Divide by zero.");
//         }
//         break;
//         case '^':
//         printf("%.2lf ^ %.2lf = %.2lf",num1, num2, pow(num1,num2));
//         break;

//         default:
//         printf("Invalid operator.");
       
        
//     }
//     return 0;
// }

// Number of days in a month
// #include <stdio.h>
// int main(){
//     int month;
//     int days;
//     scanf("%d", &month);

//     switch(month){
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//                     printf("30");
//                     break;
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//                     printf("31");
//                     break;
//         case 2:
//                     printf("28 or 29");
                    
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char ch;
//     scanf("%c, &ch");
//     ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) ? printf("Character is an Alphabet") : printf("Character is not an Alphabet");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int level,basic;
//     float gross,house_rent, perks;
//     scanf("%d %d", &level, &basic);

//     switch(level){
//         case 1:
//         perks = 1000+500;
//         break;
//         case 2:
//         perks = 750+200;
//         break;
//         case 3:
//         perks = 500+100;
//         break;
//         case 4:
//         perks = 250+0;
//     }
//     house_rent = 0.25*basic;
//     gross = basic  + house_rent + perks;
//     printf("%f", gross);
//     return 0;
// }

// Write a C Program to input three integer values and the output of the program must display the sum of two largest values out of the three numbers entered. 

// #include <stdio.h>
// int main(){
//     int a,b,c,sum=0;
//     scanf("%d%d%d", &a, &b, &c);
//     if (a>b && a>c){
//         sum = sum+a;
//         if(b>c)
//         sum = sum+b;
//         else
//         sum=sum+c;
//     }
//     else if(b>a && b>c){
//         sum = sum+b;
//         if (a>c)
//         sum = sum+a;
//         else 
//         sum = sum +c;
//         if(a>b)
//         sum = sum+a;
//         else
//         sum = sum+b;
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include <stdio.h>

//     void count(int n){
//         static int d = 1;
//         printf("%d" , n);
//         printf("%d" , d);
// //         d++;
// //         if(n>1) count(n-1);
// //         printf("%d", d);
//     }
//     int main()
//     {
//         count(3);
//         return;
//     }

// swap two numbers if they are positive and different and if they are negative and same then there is no need to swap:
// #include <stdio.h>

// int main() {
//     int a, b;
    
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
    
//     if (a > 0 && b > 0 && a != b) {
//         int temp = a;
//         a = b;
//         b = temp;
//         printf("Swapped: a = %d, b = %d\n", a, b);
//     } else if (a < 0 && b < 0 && a == b) {
//         printf("Numbers are negative and same, no swap needed.\n");
//     } else {
//         printf("Conditions not met for swapping.\n");
//     }

//     return 0;
// }

// using recursion find the sum of digits of a number
#include <stdio.h>

int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Sum of digits: %d\n", sum_of_digits(num));
    return 0;
}
