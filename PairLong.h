#ifndef PAIRLONG_H
#define PAIRLONG_H

#include <iostream>

using namespace std;

// Базовый класс: Пара чисел
class Pair {
public:
    // Поля класса
    int first;  // Первое число
    int second; // Второе число

    // Конструктор по умолчанию
    Pair() {
        first = 0;
        second = 0;
    }

    // Конструктор с параметрами
    Pair(int firstNum, int secondNum) {
        first = firstNum;
        second = secondNum;
    }

    // Метод для вывода пары чисел на экран
    void print() {
        cout << "(" << first << ", " << second << ")";
    }
};

// Производный класс: Длинное число
class Long : public Pair {
public:
    // Поля класса
    int high; // Старшая часть числа
    int low;  // Младшая часть числа

    // Конструктор с параметрами
    Long(int firstNum, int secondNum, int highNum, int lowNum) : Pair(firstNum, secondNum) {
        high = highNum;
        low = lowNum;
    }

    // Метод для вывода длинного числа на экран
    void print() {
        cout << "Пара: ";
        Pair::print(); // Вызываем метод print() базового класса
        cout << ", Старшая часть: " << high << ", Младшая часть: " << low;
    }
};

#endif // PAIRLONG_H

