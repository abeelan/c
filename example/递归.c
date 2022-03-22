# include <stdio.h>
# include <math.h>

int main() {
    float recursive(int n);

    printf("%f\n", recursive(10));

    return 0;
}

float recursive(int n) {
    if (n == 1) {
        return 1.0;
    }

    return sqrt(2 * n -1) + recursive(n - 1);
}