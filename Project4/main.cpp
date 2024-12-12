#include <stdio.h>
#include <math.h>

int main() {
    // ����� ��������
    double a = 3.16;
    double b = 7.11;
    double x = -1.23;

    // ���������� ������
    double numerator = exp(a * x) * cos(b - x); // ���������
    double denominator = sin(a + x);           // ���������

    // �������� ����������, ��� �������� ������ �� ����
    if (denominator == 0) {
        printf("�������: ��������� ������� ����!\n");
    }
    else {
        double result = numerator / denominator;
        printf("���������: %lf\n", result);
    }

    return 0;
}