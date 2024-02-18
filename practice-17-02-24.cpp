// practice-17-02-24.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    const int stroki = 3;
    const int stolbiki = 5;
    double sum = 0.0;

    double massive[stroki][stolbiki];

        cout << "Введите элементы двумерного массива \n";

        for (int i = 0; i < stroki; ++i) {
            for (int j = 0; j < stolbiki; ++j) {
                cin >> massive[i][j];
            }
        }

        cout << "Средние арифметические элементов строк:\n";

        for (int i = 0; i < stroki; ++i) {
           
            for (int j = 0; j < stolbiki; ++j) {
                sum += massive[i][j];
            }

            double sred = sum / stolbiki;
            cout << "Строка " << i + 1 << ": " << sred << endl;
        }
}

