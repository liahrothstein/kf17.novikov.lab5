#include <iostream>

int main() {
    long t = time(NULL);
    printf("RAND_MAX = %d   t = %ld \n", RAND_MAX, t);
    srand(t);

    int numbers = 50;
    printf("\n %d случайных целых чисел от 0 до 32767:\n", numbers);
    for (int i = 1; i <= numbers; i++) {
        printf("%6d ", rand());
        if (i % 10 == 0) printf("\n");
    }

    printf("\n %d случайных целых чисел от 0 до 99:\n", numbers);
    for (int i = 1; i <= numbers; i++) {
        printf("%5d ", rand() % 100);
        if (i % 5 == 0) printf("\n");
    }
    
    int A = -12, B = 24;
    int rnd;
    printf("\n %d случайных целых чисел от %d до %d:\n", numbers, A, B);
    for (int i = 1; i <= numbers; i++) {
        rnd = A + rand() % (B - A + 1);
        printf("%5d ", rnd);
        if (i % 5 == 0) printf("\n");
    }
    
    int rd;
    int intmas[numbers + 1];
    printf("\n Массив %d случайных целых чисел от 5 до 15:\n", numbers);
    for (int i = 1; i <= numbers; i++) {
        rd = 5 + rand() % 11;
        intmas[i] = rd;
        printf("%3d ", intmas[i]);
        if (i % 10 == 0) printf("\n");
    }

    return 0;
}