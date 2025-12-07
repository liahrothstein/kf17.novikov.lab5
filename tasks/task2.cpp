#include <iostream>

int main() {
    float r, sum, avg, totalAvg, totalSum = 0;
    int numbers = 1000, series = 10;

    printf("Программа выполняет генерацию 1000 значений случайных вещественных значений от 0 до 1");
    printf("\nИсполнитель: Новиков Д. А.");

    srand(time(NULL));

    for (int s = 1; s <= series; s++) { /*Цикл по сериям*/
        sum = 0;
        printf("\n\nСерия %d: \n", s);

        for (int i = 1; i <= numbers; i++) { /*Цикл по значениям*/
            r = (float)rand() / RAND_MAX;
            sum += r;
            totalSum += r;

            if (i % 10 == 0) { /*Вывод каждого 10 числа*/
                printf("%6.4f ", r);
                if ((i / 10) % 10 == 0) printf("\n");
            }
        }

        avg = sum / numbers;
        printf("\nСреднее значение серии %d = %f\n", s, avg);
    }

    totalAvg = totalSum / (series * numbers);
    printf("\nСреднее значение всех чисел = %f\n", totalAvg);

    return 0;
}