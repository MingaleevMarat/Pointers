// Transfer parametrs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void Exchange(int& a, int& b);
void FillRand(int arr[], const unsigned int b);
void Print(int arr[], const unsigned int b);
void main()
{
    setlocale(LC_ALL, " ");
    int a = 2;
    int b = 3;
    std::cout << a << "\t" << b << std::endl;
    Exchange(a, b);
    std::cout << a << "\t" << b << std::endl;

    /*const int b = 5;
    int arr[b];
    FillRand(arr, b);
    Print(arr, b);*/
    
}
void Exchange(int& a, int& b)
{
    int buffer = a;
    a = b;
    b = buffer;
}
void FillRand(int arr[], const unsigned int b)
{
    for (int i = 0; i < b; ++i)
    {
        *(arr + i) = rand() % 100;
    }

}
void Print(int arr[], const unsigned int b)
{
    for (int i = 0; i < b; ++i)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}