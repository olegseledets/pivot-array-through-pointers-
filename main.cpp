#include <iostream>

const int ARR_SIZE = 10;

void expand(int *ptr_arr, int *ptr_expArr) {
  for (int i = ARR_SIZE - 1; i >= 0; --i)
		*(ptr_expArr + i) = *(ptr_arr + (ARR_SIZE - 1) - i);
}

int main() {
  int arr[ARR_SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int expandArr[ARR_SIZE];
  int *ptr_arr = arr;
  int *ptr_expArr = expandArr;
  expand(ptr_arr, ptr_expArr);
  for (int i = 0; i < ARR_SIZE; ++i) {
		std::cout << *(ptr_expArr + i) << ' ';
  }
}

/*
Что нужно сделать:
Написать функцию, которая принимает указатель на тип int, по которому размещены 10 переменных типа int. Функция ничего не возвращает, но по тому же указателю элементы должны лежать в обратном порядке.

Функция принимает корректные типы данных, тип возвращаемого значения -- void
Функция не использует библиотек кроме <iostream>
По переданному указателю лежат переменные в обратном порядке
*/