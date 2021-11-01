// Pointers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//#define POINTERS_BASICS
#define POINTERS_AND_ARRAYS
void main()
{
    setlocale(LC_ALL, " ");
#ifdef POINTERS_BASICS // Inactive Preprocessor Block
    //Если определено POINTERS_BASICS, то ниже следующий код, до директивы #endif
    int a = 2;
    int* pa = &a;
    std::cout << a << std::endl;// Значение 'a' 
    std::cout << &a << std::endl;// Адрес 'a'
    std::cout << pa << std::endl; // Адрес 'a' хранящийся в указателе 'pa'
    std::cout << &pa << std::endl;// Выводим адрес 'pa' 
    std::cout << *pa << std::endl;
#endif // POINTERS_BASICS

#ifdef POINTERS_AND_ARRAYS
    const int n = 5;
    int arr[n] = { 3,5,8,13,21 };
    std::cout << *arr << std::endl;
    for (int i = 0; i < n; ++i)
    {
        std::cout<<*(arr + i) << "\t";
    }
#endif // POINTERS_AND_ARRAYS


}
