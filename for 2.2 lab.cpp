//C:\lol
//llll
//матем

// Lab_02.cpp
// < Качмар Каріни > // Лабораторна робота No 2. // Лінійні програми.
// Варіант 0.2

#pragma once
#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double Pi = 4 * atan(1.); // число пі
    double a;    // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу
    
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
