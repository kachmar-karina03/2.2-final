//C:\lol
//llll
//�����

// Lab_02.cpp
// < ������ ����� > // ����������� ������ No 2. // ˳��� ��������.
// ������ 0.2

#pragma once
#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double Pi = 4 * atan(1.); // ����� �
    double a;    // ������� ��������
    double z1; // ��������� ���������� 1-�� ������
    double z2; // ��������� ���������� 2-�� ������
    
    cout << "a="; cin >> a;
  
    z1 = (sin(4 * a) / (1 + cos(4 * a)) * (cos(2 * a)) / (1 + cos(2 * a)));
    z2 = cos((3.0 / 2 * Pi) - a) / sin((3. / 2 * Pi) - a);

    cout << endl;
    cout << "z1 =" << z1 << endl;
    cout << "z2 =" << z2 << endl;

    cin.get();
    system("pause");
    return 0;
}
