#include <math.h> 

int max_prime_factor(int n);

int main() {
   int n;

   n = 612852475143
   printf("Max prime factor: %d", max_prime_factor(n));
}

int max_prime_factor(int n) {
   int i, max = -1;
   while(n % 2 == 0) {
      max = 2;
      n = n/2; //reduce n by dividing this by 2
   }
   for(i = 3; i <= sqrt(n); i=i+2){ //i will increase by 2, to get
     // only odd numbers
      while(n % i == 0) {
         max = i;
         n = n/i;
      }
   }
   if(n > 2) {
      max = n;
   }
   return max;
}
