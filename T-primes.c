#include <stdio.h>
#include <math.h>
 
#define MAX_N 100005
#define MAX_SQRT 1000005
 
int isPrime[MAX_SQRT];
 
// Sieve of Eratosthenes to find primes up to sqrt(MAX)
void sieve() {
    for (int i = 2; i < MAX_SQRT; i++) {
        isPrime[i] = 1;
    }
    for (int i = 2; i * i < MAX_SQRT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX_SQRT; j += i) {
                isPrime[j] = 0;
            }
        }
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
 
    sieve();
 
    for (int i = 0; i < n; i++) {
        long long x;
        scanf("%lld", &x);
 
        // Check if the square root of x is a prime number
        long long sqrt_x = sqrt(x);
        if (sqrt_x * sqrt_x == x && isPrime[sqrt_x]) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
 
    return 0;
}