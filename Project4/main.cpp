#include <stdio.h>
#include <math.h>

int main() {
    // Задані значення
    double a = 3.16;
    double b = 7.11;
    double x = -1.23;

    // Обчислення виразу
    double numerator = exp(a * x) * cos(b - x); // Чисельник
    double denominator = sin(a + x);           // Знаменник

    // Перевірка знаменника, щоб уникнути ділення на нуль
    if (denominator == 0) {
        printf("Помилка: знаменник дорівнює нулю!\n");
    }
    else {
        double result = numerator / denominator;
        printf("Результат: %lf\n", result);
    }

    return 0;
}