#include "PairLong.h"
#include <iostream>
#include <clocale>

using namespace std;

int main() {
    // ��� ����������� ����������� �������� ����� � �������
    setlocale(LC_ALL, "Russian");

    // ������� ���� �����
    Pair p1(1, 2);

    // ������� ���� ����� �� �����
    cout << "���� �����: ";
    p1.print();
    cout << endl;

    // ������� ������� �����
    Long l1(3, 4, 5, 6);

    // ������� ������� ����� �� �����
    cout << "������� �����: ";
    l1.print();
    cout << endl;

    return 0;
}

