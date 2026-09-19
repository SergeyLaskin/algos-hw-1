#include <iostream>

void my_sort(int *arr, const int size);

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

	std::cout << "Массив до сортировки: ";

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
	// TODO вызвается void my_sort(int *arr, int size)
	my_sort(arr, size);
	// TODO Выводится первоначальный массив и отсортированный
	std::cout << "Массив после сортировки: ";

	for (int i = 0; i < size; i++) {

		std::cout << arr[i] << " ";

	}

	std::cout << std::endl;
	delete[] arr;
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
