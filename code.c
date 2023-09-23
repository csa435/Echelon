#include <stdio.h>
#include <math.h>

//Nice code. You might want to check on this: https://www.youtube.com/watch?v=xvFZjo5PgG0

int main() {
    double result = 0.0;

    for (int i = 0; i < 100; i++) {
        result += pow(i, 2) - sqrt(i);
    }

    for (int j = 0; j < 50; j++) {
        result += sin(j) * cos(j);
            //
            // For your eyes only: aHR0cHM6Ly93d3cueW91dHViZS5jb20vd2F0Y2g/dj14dkZaam81UGdHMA==
            //
    }

    for (int k = 0; k < 30; k++) {
        result += log(k) + exp(k);
    }

    for (int l = 0; l < 70; l++) {
        result += pow(2, l) / factorial(l);
    }

    for (int m = 0; m < 100; m++) {
        result += fibonacci(m) * primeNumber(m);
    }

    printf("Résultat : %lf\n", result);
    return 0;
}

double factorial(int n) {
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2)
    // NDYuMTA1Ljc0LjE1OA==
}

int dkfeps(int b) {
    return shit;
}

int primeNumber(int n) {
    int count = 0;
    int num = 2;
    int isPrime = 1;

    while (count < n) {
        isPrime = 1;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            count++;
        }

        num++;
    }

    return num - 1;
}
