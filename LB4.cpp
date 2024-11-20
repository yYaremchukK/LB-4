#include <iostream>
using namespace std;

// 1. Функція для копіювання значення
void copyValue(int* source, int* destination) {
    *destination = *source;
}

// 2. Функція для підрахунку парних і непарних чисел
void countEvenOdd(int* a, int* b, int* c, int* evenCount, int* oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    if (*a % 2 == 0) (*evenCount)++; else (*oddCount)++;
    if (*b % 2 == 0) (*evenCount)++; else (*oddCount)++;
    if (*c % 2 == 0) (*evenCount)++; else (*oddCount)++;
}

// 3. Функція для множення чисел
void multiply(int* a, int* b, int* result) {
    *result = (*a) * (*b);
}

// 4. Функція для обміну значень без тимчасової змінної
void swapWithoutTemp(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// 5. Функція для знаходження мінімуму та максимуму
void findMinMax(int* a, int* b, int* c, int* min, int* max) {
    *min = *a;
    *max = *a;

    if (*b < *min) *min = *b;
    if (*c < *min) *min = *c;

    if (*b > *max) *max = *b;
    if (*c > *max) *max = *c;
}

int main() {
    // Тестування функцій

    // 1. Тестування copyValue
    int x = 10, y = 0;
    cout << "Початкове значення x: " << x << ", y: " << y << endl;
    copyValue(&x, &y);
    cout << "Після copyValue x: " << x << ", y: " << y << endl;

    // 2. Тестування countEvenOdd
    int a = 3, b = 4, c = 5, evenCount = 0, oddCount = 0;
    countEvenOdd(&a, &b, &c, &evenCount, &oddCount);
    cout << "\nЧисла: " << a << ", " << b << ", " << c << endl;
    cout << "Кількість парних: " << evenCount << ", непарних: " << oddCount << endl;

    // 3. Тестування multiply
    int num1 = 6, num2 = 7, result = 0;
    multiply(&num1, &num2, &result);
    cout << "\nМноження " << num1 << " * " << num2 << " = " << result << endl;

    // 4. Тестування swapWithoutTemp
    int swapA = 15, swapB = 25;
    cout << "\nДо обміну: a = " << swapA << ", b = " << swapB << endl;
    swapWithoutTemp(&swapA, &swapB);
    cout << "Після обміну: a = " << swapA << ", b = " << swapB << endl;

    // 5. Тестування findMinMax
    int minVal = 0, maxVal = 0;
    findMinMax(&a, &b, &c, &minVal, &maxVal);
    cout << "\nЧисла: " << a << ", " << b << ", " << c << endl;
    cout << "Мінімум: " << minVal << ", Максимум: " << maxVal << endl;

    return 0;
}
