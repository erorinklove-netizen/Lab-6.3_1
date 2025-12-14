// Lab 6.3_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Якимів Наталія
// Варіант 7
#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

// звичайна функція
int FindMinOdd(int* a, const int size);

// шаблон функції
template <typename T>
T FindMinOdd(T* a, const int size);

int main()
{
    const int n = 10;
    int a[n] = { 12, 7, 4, 9, 2, 15, 8, 3, 6, 11 };

    // виведення масиву
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;

    int r1 = FindMinOdd(a, n);
    cout << "Min odd element = " << r1 << endl;

    int r2 = FindMinOdd<int>(a, n);
    cout << "Min odd element (template) = " << r2 << endl;

    return 0;
}

// ітераційна звичайна функція
int FindMinOdd(int* a, const int size)
{
    int minOdd = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0 && a[i] < minOdd)
            minOdd = a[i];
    }
    return minOdd;
}

// ітераційна шаблонна функція
template <typename T>
T FindMinOdd(T* a, const int size)
{
    T minOdd = T(INT_MAX);
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0 && a[i] < minOdd)
            minOdd = a[i];
    }
    return minOdd;
}
