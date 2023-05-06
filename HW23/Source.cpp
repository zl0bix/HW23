#include<iostream>

void switch_num(int num1, int num2, int num3);

int& ref_index(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			return arr[i];
	}
		 return arr[0];
}

void null_arr(int arr1[], const int length1, int arr2[], const int length2);

int main() {
	//HW23.1
	std::cout << "\n\n\t\tHW23.1\n\n";
	int n1=3, n2=4, n3=9;
	int ptrnum1 = n1;
	int ptrnum2 = n2;
	int ptrnum3 = n3;
	switch_num(n1, n2, n3);

	//HW23.2
	std::cout << "\n\n\t\tHW23.2\n\n";
	const int size2 = 5;
	int arr2[size2]{ 5,4,-3,2,-1 };
	std::cout << ref_index(arr2, size2) << std::endl;

	//HW23.3
	std::cout << "\n\n\t\tHW23.3\n\n";
	const int sizeFirst = 7;
	int arrFirst[sizeFirst]{ 3, 6, 4, 1, 4, 8, 2 };
	const int sizeSecond = 6;
	int arrSecond[sizeSecond]{ 5, 3, 1, 5, 10, 8 };
	null_arr(arrFirst, sizeFirst, arrSecond, sizeSecond);



	system("pause");
	return 0;
}
void switch_num(int num1, int num2, int num3) {

	if (num1 >= num2 && num1 >= num3) {
		int* ptrnum2 = &num1;
		int* ptrnum3 = &num1;
		std::cout << num1 << ' ' << *ptrnum2 << ' ' << *ptrnum3;
	}
	else if (num2 > num1 && num2 >= num3) {
		int* ptrnum1 = &num2;
		int* ptrnum3 = &num2;
		std::cout << num2 << ' ' << *ptrnum1 << ' ' << *ptrnum3;
	}
	else {
		int* ptrnum1 = &num3;
		int* ptrnum2 = &num3;
		std::cout << num3 << ' ' << *ptrnum1 << ' ' << *ptrnum2;
	}
}
	
void null_arr(int arr1[], const int length1, int arr2[], const int length2) {
	int k = 0;
	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int i;
		for(i = 0; i < length1; i++)//*(point+i) = i;*(arr1+i)
			for (int j = 0; j < length2; j++) {
				int k;
				k = *(ptr1 + i);
				if (*(ptr2 + j) == k)
					*(ptr2 + j) = 0;		
			}
		std::cout << std::endl;
		for (int h = 0; h < length2; h++)
			std::cout << *(ptr2 + h) << ' ';
		std::cout << std::endl;
}
