/*
    Интерактивная программа, вычисляющая
    площадь прямоугольника.
*/

#include <iostream>
using namespace std;

int main()
{
    int length;
    int width;
    int sum=length*width;

    cout << "Введите длину:";
    cin >> length; //ввод длины(length)

    cout << "Введите ширину:";
    cin >> width; //ввод ширины(width)

    cout << "Площадь равна:";
    cout << sum; //вывод площади

    return 0;
}
