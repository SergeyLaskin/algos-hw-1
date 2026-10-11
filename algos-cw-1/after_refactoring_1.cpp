#include <iostream>
#include <cmath>

void print_array(int* arr, const int size, int i);
void mid_sa(int* arr, const int size, float sa, int i);


int main()
{
    int i = 0; int* arr; int size = 0;
    std::cout << "Введите длину последовательности ";
    std::cin >> size;
    std::cout << std::endl;
    arr = new int[size];

    for(; i <= 3; i++) {
        print_array(arr, size, i);
        std::cout << std::endl;
        mid_sa(arr, size, 0, i);
        std::cout << std::endl;
    }
    delete []arr;
    return 0;
}

void print_array(int* arr, const int size, int i) {

    std::cout << "Последовательность № " << i << std::endl;
    for (int j = 0; j < size; j++) {
        arr[j] = rand() % 10;
        std::cout << " " << arr[j];
    }
    std::cout << std::endl;
}

void mid_sa(int* arr, const int size, float sa, int i) {

    for(int j = 0; j < size; j++) {
        sa += arr[j];
    }
    sa = sa / 10;
    std::cout << "Среднее последовательности № " << i;
    std::cout << " = " << sa << std::endl;
}