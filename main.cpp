#include "PairLong.h"
#include <iostream>
#include <clocale>

using namespace std;

int main() {
    // Для правильного отображения русского языка в консоли
    setlocale(LC_ALL, "Russian");

    // Создаем пару чисел
    Pair p1(1, 2);

    // Выводим пару чисел на экран
    cout << "Пара чисел: ";
    p1.print();
    cout << endl;

    // Создаем длинное число
    Long l1(3, 4, 5, 6);

    // Выводим длинное число на экран
    cout << "Длинное число: ";
    l1.print();
    cout << endl;

    return 0;
}

