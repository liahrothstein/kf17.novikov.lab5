#include <iostream>

int main() {
    int numbers = 50;

    float r;
    float mas[numbers + 1];
    float sum_mas = 0;
    printf("\n Массив %d случайных вещественных чисел от 0 до 1:\n", numbers);
    for (int i = 1; i <= numbers; i++) {
        r = (float)rand() / RAND_MAX;
        mas[i] = r;
        sum_mas += mas[i];
        printf("%6.4f   ", mas[i]);
        if (i % 10 == 0) printf("\n");
    }
    printf("\n \t Сумма = %f    Среднее значение = %f   \n", sum_mas, sum_mas / numbers);
    
    float rf;
    float x1 = 3.5, x2 = 7.8;
    printf("\n %d случайных вещественных чисел от %f до %f:\n", numbers, x1, x2);
    for (int i = 1; i <= numbers; i++) {
        rf = (float)rand() / RAND_MAX;
        rf = x1 + rf * (x2 - x1);
        printf("%6.4f   ", rf);
        if (i % 10 == 0) printf("\n");
    }

    return 0;
}