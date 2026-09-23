#include <iostream>

void my_sort(int *arr, const int size);
void print_array(const char message[], int* arr, const int size);

// TODO Интерфейс пользователя должен быть на русском языке
int main() {
    // TODO Пользователь вводит размер массив и элементы массива
	int size;
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	
	int* arr = new int[size];
	
	std::cout << "Введите элементы массива: ";

	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	
	print_array("Массив до сортировки", arr, size);
	

	std::cout << std::endl;
	// TODO вызвается void my_sort(int *arr, int size)
	my_sort(arr, size);
	// TODO Выводится первоначальный массив и отсортированный
	print_array("Массив после сортировки", arr, size);

	std::cout << std::endl;
	delete[] arr;
}

void print_array(const char msg[], int* arr, const int size) {
    std::cout << msg;

    for (int i = 0; i < size; i++) {
        std::cout << " " << arr[i];
    }

    std::cout << std::endl;
}


void my_sort(int *arr, const int size) {
	// TODO
	for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - 1 - i; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }

        }

    }
}
