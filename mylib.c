#include<stdio.h>

//reverse the digits
int reverseDigits(int n) {
    int s = 0;
    while (n > 0) {
        s = s * 10 + (s % 10);
        n = n/ 10;
    }
    return s;
}
 
 // Sum of the digit
  while (temp > 0) {
    int n = temp % 10;
    int powered = 1;
    for (int i = 0; i < digits; i++) {
        powered *= n;
    }
    sum += powered;
    temp /= 10;
}

return sum == original;

//Armstrong Number 

int isArmstrong(int num) {
    int original = num;
    int sum = 0, temp = num, digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

//Adams Number

int isAdams(int num) {
    int sq = num * num;
    int revNum = reverseDigits(num);
    int revSq = revNum * revNum;
    return reverseDigits(sq) == revSq;
}

//Prime And Palindrome

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int isPrimePalindrome(int num) {
    return isPrime(num) && (num == reverseDigits(num));
}
