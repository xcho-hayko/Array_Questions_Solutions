#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
#include<vector>
#include<ctime>

void question1() {
	const int size = 10;
	int arr1[size];
	int arr2[size];
	int arr3[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr1[i];
		std::cout << "Please input the value of " << i + 1 << "th element of second array :";
		std::cin >> arr2[i];

	}

	std::cout << "This is new array where in odd indexes elements are equal in elements of first array which have even index and in elements which have odd index are equal to elements of second array which have even indexes" << std::endl << " { ";
	for (int i = 0; i < size; i++) {
		if ((i & 1) == 0 && i + 1 < size) {
			arr3[i] = arr1[i + 1];
		}
		else if ((i & 1) == 1 && i - 1 >= 0) {
			arr3[i] = arr2[i - 1];
		}
		std::cout << arr3[i] << ", ";
	}
	std::cout << "}" << std::endl;
}

void question2() {
	const int size = 10;
	int arr1[size];
	int arr2[size];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array but it must be two digit number :";
		do {
			if (count > 0)
				std::cout << "Please input the corect value for " << i + 1 << "th element it must be two digit number :";

			std::cin >> arr1[i];
			count++;
		} while (arr1[i] > 99 || arr1[i] < 9);
		count = 0;
		arr2[i] = arr1[i] % 10;
	}
	std::cout << "This is new array where every element is equal to low magnificient digit in similar element of first array" << std::endl << " { ";
	for (int i = 0; i < size; i++) {
		std::cout << arr2[i] << ", ";
	}
	std::cout << "}" << std::endl;
}

void question3() {
	const int size = 10;
	int arr1[size];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array but it must be two digit number :";
		do {
			if (count > 0)
				std::cout << "Please input the corect value for " << i + 1 << "th element it must be two digit number :";

			std::cin >> arr1[i];
			count++;
		} while (arr1[i] > 99 || arr1[i] < 1);
		count = 0;
		int tmp = arr1[i];
		sum += tmp % 10;
		tmp /= 10;
		sum += tmp % 10;
	}
	std::cout << "The sum of digits is equal :" << sum;
}

void merge(int* arr1, int* arr2, const int size1, const int size2, int* arr3) {
	int j = 0;
	for (int i = 0; i < size1; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr1[i];
		arr3[j] = arr1[i];
		j++;
	}
	for (int i = 0; i < size2; i++) {
		std::cout << "Please input the value of " << i + 1 << "th element of second array :";
		std::cin >> arr2[i];
		arr3[j] = arr2[i];
		j++;
	}

}

template <typename T>
void insertion_sort(T *arr, const int size) {
	for (int j = 1; j < size; j++) {
		int key = arr[j];
		int i = j - 1;
		while (i >= 0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
}

void question4() {
	const int size1 = 7, size2 = 9;
	int arr1[size1];
	int arr2[size2];
	int arr3[size1 + size2];
	merge(arr1, arr2, size1, size2, arr3);

	insertion_sort(arr3, size1 + size2);

	std::cout << "This is new array where every element of two other arrays are sorted" << std::endl << " { ";
	for (int i = 0; i < size1 + size2; i++) {
		std::cout << arr3[i] << ", ";
	}
	std::cout << "}" << std::endl;
}

template <typename T>
void print(T* arr, const int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "}" << std::endl;
}

void question5() {
	const int size = 10;
	int arr1[size];
	int arr2[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr1[i];
		std::cout << "Please input the value of " << i + 1 << "th element of second array :";
		std::cin >> arr2[i];
	}

	std::vector <int> arr3;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr1[i] == arr2[j]) {
				arr3.push_back(arr1[i]);
				break;
			}
		}
	}

	std::cout << "This is the new array which contained all doesn't repeat elements of two other arrays :" << std::endl << " { ";
	for (int i = 0; i < (int)arr3.size(); i++) {
		std::cout << arr3[i] << ", ";
	}
	std::cout << " }" << std::endl;
}

void question6() {
	const int size = 12;
	double arr1[size];
	double sum = 0;
	for (int i = 0; i < size; i++) {
		arr1[i] = ((double)i * (double)i) - ((double)2 * (double)i) + (19.3 * cos((double)i));
		sum += arr1[i];
	}
	sum /= size;
	std::cout << "This is your original array :" << std::endl << " { ";
	print(arr1, size);
	double arr2[size];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr1[i] < sum) {
			arr2[j] = arr1[i];
			j++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr1[i] >= sum) {
			arr2[j] = arr1[i];
			j++;
		}
	}

	std::cout << "This is your new array where in first chapter is located all elements which is smaller then average and in second chapter all other elements :" << std::endl << " { ";
	print(arr2, size);
}

void question7() {
	const int size = 16;
	double arr[size];
	double sum_2div_indexes = 0.0, sum_3div_indexes = 0.0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		if ((i & 1) == 0) {
			sum_2div_indexes += arr[i];
		}
		if ((i % 3) == 0) {
			sum_3div_indexes += arr[i];
		}
	}

	std::cout << "The diference each element which have index's which divided on two and elements which have index's which divided on tree is :" << sum_2div_indexes - sum_3div_indexes << std::endl;

}

void question8() {
	const int size = 9;
	int arr[size];
	int max_pos_index = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		if (arr[i] > arr[max_pos_index] && (arr[i] & 1) == 1 && arr[i] > 0) {
			max_pos_index = i;
		}
	}
	if (max_pos_index == 0 && arr[max_pos_index] <= 0 && (arr[max_pos_index] & 1) == 0) {
		std::cout << "This array not contained element which have odd and positive value ." << std::endl;
	}
	else
	{
		std::cout << "The index of element which have odd and positive value is :" << max_pos_index << std::endl;
	}

}

void question9() {
	const int size = 9;
	int arr[size];
	int arr1[size];
	int arr2[size + size];
	int max_pos_index = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		arr1[i] = cos(arr[i] * arr[i]) + (2.97 * pow(log10(i * i), 2));
	}
	std::cout << "This is second array :" << std::endl << " { ";
	print(arr1, size);
	merge(arr, arr1, size, size, arr2);

	insertion_sort(arr2, size + size);

	std::cout << "This is new array where every element of two other arrays are sorted" << std::endl << " { ";
	print(arr1, size);
}

void question10() {
	const int size = 17;
	int arr[size];
	double arr1[size];
	int max_pos_index = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		if (cos(arr[i]) > 0) {
			arr1[i] = ((arr[i] * arr[i] * arr[i]) - 7.5);
		}
		else {
			arr1[i] = (arr[i] * arr[i]) - 5 * pow(2.71,sin(arr[i]));
		}
	}
	insertion_sort(arr1, size);
	std::cout << "This is new sorted array" << std::endl << " { ";
	print(arr1, size);
}

int sum_digits(int num) {
	int sum = 0;
	while (num) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

void question11() {
	const int size = 17;
	int arr[size];
	int arr1[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		arr1[i] = sum_digits(arr[i]);
	}
	std::cout << "This is new array where every element is equal to similar elements digits sum in original array :" << std::endl << " { ";
	print(arr1, size);
}

void question12() {
	const int size = 12;
	int arr[size];
	int count_of_changes=0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		if (i > 0)
		{
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] < key) {
				arr[j + 1] = arr[j];
				j--;
				count_of_changes++;
			}
			arr[j + 1] = key;
		}
	}
	std::cout << "Sorting time the count of changes is :" << count_of_changes << std::endl;
}

void question13() {
	const int size = 12;
	int arr[size];
	int count_of_negative_odds = 0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		if (arr[i] < 0 && arr[i] % 2 == 1) {
			count_of_negative_odds++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 3 == 0) {
			arr[i] = count_of_negative_odds;
		}
	}
	std::cout << "This is new array where every element which divided on 3 changed whit negative and odd elements count :" << std::endl << " { ";
	print(arr, size);
}

void question14() {
	const int size = 14;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		if (i < size / 2) {
			std::cin >> arr[i + size / 2];
		}
		else {
			std::cin >> arr[i - size / 2];
		}
	}

	std::cout << "This is new array :" << std::endl << " { ";
	print(arr, size);
	std::cout << "The count of changes :" << size << std::endl;
}

void question15() {
	srand((int)time(0));
	const int size = 14;
	int arr[size];
	int num;
	int max = 0;
	std::cout << "Plese input the searched number :";
	std::cin >> num;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 300;
		if (arr[i] - num > arr[max] - num) {
			max = i;
		}
	}
	std::cout << "The value of farest element whit your number is :" << arr[max] << std::endl << "And it's index is :" << max;

}

void question16() {
	const int size = 12;
	int arr[size];
	int count = 0;
	int sum = 0;
	bool isnt_neg = true;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		if (isnt_neg && arr[i] < 0) {
			isnt_neg = false;
		}
		if (isnt_neg) {
			sum += arr[i];
			count++;
		}
	}
	std::cout << "The count of positive elemnts each first negative element is :" << count << std::endl << "And the sum of this elemnts is:" << sum << std::endl;

}

void question17() {
	srand((int)time(0));
	const int size = 14;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 300;
	}
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);
	for (int i = 1; i < size - 1; i++)
	{
		if (arr[i] < arr[i-1] && arr[i] < arr[i+1])
		{
			count++;
			i++;
		}
	}
	std::cout << "The count of local minimums in this array is :" << count;

}

void question18() {
	srand((int)time(0));
	const int size = 14;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 300;
	}
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);
	for (int i = 1; i < size - 1; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
		{
			count++;
			i++;
		}
	}
	std::cout << "The count of local minimums in this array is :" << count;

}

void question19() {
	srand((int)time(0));
	const int size = 14;
	int arr[size];
	std::vector <int> vec;
	int sum= 0;
	bool is_neg = false,isnt_zero = true;
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 300) - 150 ;
	}
	arr[rand() % size] = 0;
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);
	for (int i = 0; i < size; i++)
	{
		if (!is_neg && arr[i] < 0) {
			is_neg = true;
		}
		if (isnt_zero && arr[i] == 0 && is_neg) {
			isnt_zero = false;
		}
		if (isnt_zero && is_neg) {
			vec.push_back(arr[i]);
			sum += arr[i];
		}
	}

	std::cout << "The elements which loketed beetwen first negative element and zero element is :" << std::endl << " { ";
	for (int i : vec) {
		std::cout << i << ", ";
	}
	std::cout << "} " << std::endl << "And there sum is :" << sum << std::endl;
}

void question20() {
	srand((int)time(0));
	const int size = 14;
	int arr[size];
	std::vector <int> vec;
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 300) - 150;
	}
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < arr[i - 1]) {
			if (vec.size() > 0 ? vec[vec.size() - 1] != i-1 : true ) {
				vec.push_back(i-1);
			}
			vec.push_back(i);
		}
	}


	std::cout << "The elements which is monoton lawer is :" << std::endl << " { ";
	for (int i : vec) {
		std::cout << i << ", ";
	}
	std::cout << "} " << std::endl;
}

void question21() {
	srand((int)time(0));
	const int size = 14;
	int arr[size];
	std::vector <int> vec;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 20) - 10;
	}
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);
	insertion_sort(arr, size);

	for (int i = 1; i < size; i++) {

		if (arr[i] == arr[i - 1]) {
			count++;
		}
		else {
			if (i - count == 0) { vec.push_back(arr[i - 1]); count--; }
			while (count <= 2 && count >= 1) {
				vec.push_back(arr[i - 1]);
				count--;
			}
			count = 1;
			if (i == size - 1) { vec.push_back(arr[i]); }
		}
	}
	std::cout << "The elements which is repeated two or few times :" << std::endl << " { ";
	for (int i : vec) {
		std::cout << i << ", ";
	}
	std::cout << "} " << std::endl;

}

void question22() {
	srand((int)time(0));
	const int size = 10;
	int arr[size];
	std::vector <int> vec;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 20) - 10;
	}
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);
	for (int j = 0; j < size; j++)
	{
		if (arr[j] < 0) {
			vec.push_back(arr[j]);
		}
	}
	for (int j = 0; j < size; j++)
	{
		if (arr[j] == 0) {
			vec.push_back(arr[j]);
		}
	}
	for (int j = 0; j < size; j++)
	{
		if (arr[j] > 0) {
			vec.push_back(arr[j]);
		}
	}
	std::cout << "The new array where first located negative elements then zero elements and then positive elements :" << std::endl << " { ";
	for (int i : vec) {
		std::cout << i << ", ";
	}
	std::cout << "} " << std::endl;

}

void question23() {
	const int size = 10;
	int arr[size];
	double arr1[size];
	double value = 1;

	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
		arr1[i] = (double)arr[i] * (double)arr[i] + 0.3;
	}
	std::cout << "This is your second array :" << std::endl << " { ";
	print(arr1, size);

	for (int i = 1; i < size; i+=2) {
		double tmp = (arr[i] * arr1[i]) / arr[i - 1] * arr1[i - 1];
		value *= tmp;
	}
	std::cout << "The value of expretion is :" << value;
}

void question24() {
	const int size = 10;
	int arr[size];
	int arr1[size];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array but it must be two digit number :";
		do {
			if (count > 0)
				std::cout << "Please input the corect value for " << i + 1 << "th element it must be two digit number :";

			std::cin >> arr[i];
			count++;
		} while (arr[i] > 99 || arr[i] < 1);
		arr1[i] = arr[i] % 10 - arr[i] / 10;
	}

	std::cout << "This is your new array where every element is equal of digits diference from original array similar element :" << std::endl << " { ";
	print(arr, size);
}

void question25() {
	const int size = 10;
	int arr[size];
	int neg_count=0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr[i];
	}
	insertion_sort(arr, size);
	std::cout << "The new sort array :" << std::endl << " { ";
	print(arr, size);
	for (int j = 0 , i = 0;  j < (size - neg_count) / 2; i++)
	{
		if (arr[i] >= 0) {
			int tmp = arr[neg_count+j];
			arr[neg_count + j] = arr[size-1 - j];
			arr[size-1 - j] = tmp;
			j++;
		}
		else {
			neg_count++;
		}
	}
	std::cout << "The new expleced sort array :" << std::endl << " { ";
	print(arr, size);

}

void question26() {
	const int size = 12;
	int arr1[size];
	int arr2[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of first array :";
		std::cin >> arr1[i];
		std::cout << "Please input the value of " << i + 1 << "th element of second array :";
		std::cin >> arr2[i];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr1[i] == arr2[j]) {
				arr1[i] = 0;
				break;
			}
		}
	}

	std::cout << "First array where all similar values of second array changed in zeros" << std::endl << " { ";
	print(arr1, size);
}

void question27() {
	srand((int)time(0));
	const int size = 14;
	int arr[size];
	int count_mon = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = (rand() % 300) - 150;
	}
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);

	for (int i = 1; i < size; i++)
	{
		if (arr[i] > arr[i - 1]) {
			count++;
		}
		else {
			if (count > 0) {
				count_mon++;
			}
			count = 0;
		}
	}
	std::cout << "The which is monoton abovest times is :" << count_mon << std::endl ;

}

void question28() {
	srand((int)time(0));
	const int size = 10;
	int arr[size];
	int sum_odd = 0;
	int sum_even = 0;
	for (int i = 0; i < size; i += 2)
	{
		arr[i] = (rand() % 20) - 10;
		arr[i + 1] = (rand() % 20) - 10;
		sum_odd = arr[i + 1];
		sum_even = arr[i];
	}
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);
	std::cout << "The balance of sum of odd index elements and sum of even index elements is :" << sum_odd % sum_even << std::endl;
}

void question29() {
	srand((int)time(0));
	const int size = 10;
	int arr[size];
	int avg = 0;
	int count = 0;
	for (int i = 0; i < size; i ++)
	{
		arr[i] = (rand() % 20) - 10;
		avg += arr[i];
	}
	std::cout << "This is your array : " << std::endl << " { ";
	print(arr, size);
	avg /= size;
	std::cout << "The average is :" << avg << std::endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > avg) {
			count++;
		}
	}
	std::cout << "The precent of elements which value is law then average of array is :" << ((float)count / (float)size) * 100.00 <<std::endl;
}

void question30() {
	const int size = 10;
	int arr1[size];
	int arr2[size];
	int max1 = 0;
	int max2 = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of first array" << std::endl;
		std::cin >> arr1[i];
		std::cout << "Please input the " << i + 1 << "th element of second array" << std::endl;
		std::cin >> arr2[i];
		if (arr1[max1] < arr1[i]) {
			max1 = i;
		}
		if (arr2[max2] < arr2[i]) {
			max2 = i;
		}
	}
	int tmp = arr1[max1];
	arr1[max1] = arr2[max2];
	arr2[max2] = tmp;
	std::cout << "This is your first array before change : " << std::endl << " { ";
	print(arr1, size);
	std::cout << "This is your second array before change : " << std::endl << " { ";
	print(arr2, size);

}

int main() {
	int quiz_num;
	std::cout << "Please input the number of question ";
	do {
		std::cout << "the number of question must be biger then 1 and smaller then 30:";
		std::cin >> quiz_num;

	} while (quiz_num > 30 || quiz_num < 0);

	switch (quiz_num)
	{
	case 1:
		question1();
		break;
	case 2:
		question2();
		break;
	case 3:
		question3();
		break;
	case 4:
		question4();
		break;
	case 5:
		question5();
		break;
	case 6:
		question6();
		break;
	case 7:
		question7();
		break;
	case 8:
		question8();
		break;
	case 9:
		question9();
		break;
	case 10:
		question10();
		break;
	case 11:
		question11();
		break;
	case 12:
		question12();
		break;
	case 13:
		question13();
		break;
	case 14:
		question14();
		break;
	case 15:
		question15();
		break;
	case 16:
		question16();
		break;
	case 17:
		question17();
		break;
	case 18:
		question18();
		break;
	case 19:
		question19();
		break;
	case 20:
		question20();
		break;
	case 21:
		question21();
		break;
	case 22:
		question22();
		break;
	case 23:
		question23();
		break;
	case 24:
		question24();
		break;
	case 25:
		question25();
		break;
	case 26:
		question26();
		break;
	case 27:
		question27();
		break;
	case 28:
		question28();
		break;
	case 29:
		question29();
		break;
	case 30:
		question30();
		break;

	default:
		break;
	}

	return 0;
}
