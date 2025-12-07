#include <iostream>

int main() {
    int numbers = 500, arr[numbers];
    int A = 14, B = 34, rnd;
    int count[B - A + 1] = {0};

    printf("Программа выполняет генерацию 500 целых значений в диапазоне от N до (20+N), где N – номер варианта");
    printf("\nИсполнитель: Новиков Д. А.");
    printf("\nВариант: №14");
    
    srand(time(NULL));

    printf("\n\nСгенерированные числа:\n");
    for (int i = 1; i <= numbers; i++) {
        rnd = A + rand() % (B - A + 1);
        arr[i - 1] = rnd;

        printf("%d ", rnd);
        if (i % 20 == 0) printf("\n");

        count[rnd - A]++;
    }

    printf("\nСтатистика:\n");
    printf("---------------------------------------\n");
    printf("|  Число  |  Количество появлений     |\n");
    printf("---------------------------------------\n");
    for (int i = A; i <= B; i++) {
        printf("| %7d | %25d |\n", i, count[i - A]);
    }
    printf("---------------------------------------\n");

    return 0;
}