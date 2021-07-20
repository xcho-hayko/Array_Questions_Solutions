#include<iostream>

void question1() {
	const int size =14;
	int arr[size];
	int count = 0;
	for (int  i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		if ((arr[i] & (int)1) == 0) {
			count++;
		}
	}
	std::cout << "This is the count of even elements :" << count << std::endl;
}

void question2() {
	const int size = 12;
	int arr[size];
	int avg = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		avg += arr[i];
	}
	arr[4] = avg/size;
	std::cout << "This is your new array where the 5th element is equal to average of firs array " << std::endl << "{";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "}" << std::endl;
}

void question3() {
	const int size = 11;
	int arr[size];
	int avg = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		avg += arr[i];
	}
	avg /= size;
	
	for (int i = 0; i < size; i++)
	{
		arr[i] > 0 ? (arr[i] > avg ? count++ : false) : (-1 * arr[i] > avg ? count++ : false);
	}
	std::cout << "This is the count of elements which is above then average of elements in array :" << count << std::endl;
}

void question4() {
	const int size = 10;
	int arr[size];
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		if (arr[max] < arr[i]) {
			max = i;
		}
	}

	int  tmp = arr[0];
	arr[0] = arr[max];
	arr[max] = tmp;

	std::cout << "This is your new array where the element which have maximal value is swaped whit firs element of array:" << std::endl << "{";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "}" << std::endl;
}

void question5() {
	const int size = 9;
	int arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		if (arr[max] < arr[i]) {
			max = i;
		}
		else if(arr[min]>arr[i]) {
			min = i;
		}
	}

	int  tmp = arr[min];
	arr[min] = arr[max];
	arr[max] = tmp;

	std::cout << "This is your new array where the element which have maximal value element is swaped whit minimal value element of array:" << std::endl << "{";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "}" << std::endl;
}

void question6() {
	const int size = 9;
	int arr[size];
	int odd_count = 0;
	int even_count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		arr[i] & (int)1 ? odd_count++ : even_count++;
	}
	if (odd_count > even_count) {
		std::cout << "The count of odd elements in your array is many then count of evens" << std::endl;
	}
	else if (odd_count < even_count) {
		std::cout << "The count of even elements in your array is many then count of odds" << std::endl;
	}
	else {
		std::cout << "The count of even elements and count of odd elements in your array is equal" << std::endl;
	}
}

void question7() {
	const int size = 15;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		if(arr[0] < arr[i]){
			count++;
		}
	}
	std::cout << "Count of elements which is biger then first element of array is: " << count << std::endl;
}

void question8() {
	const int size = 16;
	int arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		if (arr[max] < arr[i]) {
			max = i;
		}
		else if (arr[min] > arr[i]) {
			min = i;
		}
	}
	std::cout << "The index of minimal element in this array is: " << min << std::endl;
	std::cout << "The index of maximal element in this array is: " << max << std::endl;
}

void question9() {
	const int size = 15;
	int arr[size];
	int avg = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		avg += arr[i];
	}
	avg /= size;
	for (int i = 0; i < size; i++)
	{
		arr[i] = avg - arr[i];
	}
	std::cout << "The new array where every element is equal of first array (average - every element) is : \n{";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", " ;
	}
	std::cout << "}" << std::endl;

}

void question10() {
	const int size = 17;
	int arr[size];
	int avg = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		if (arr[i] < 0) {
			count++;
			avg += arr[i];
		}
	}
	avg /= count;
	avg *= -1;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > avg) {
			sum += arr[i];
		}else if(arr[i] < 0 && -arr[i] > avg){
			sum += -arr[i];
		}
	}
	std::cout << "The sum of elements which biger then average of moduls negative elements is equal: " << sum << std::endl;
}

void question11() {
	const int size = 14;
	int arr[size];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		if ((arr[i] & (int)1) == 0 && arr[i] > 0) {
			count++;
			sum += arr[i];
		}
	}
	std::cout << "The count of positive elemnts in this array :" << count << std::endl << "And the sum of this elements is :" << sum << std::endl;

}

void question12() {
	const int size = 14;
	double arr[size];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];

		double key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		if (j+1 >= 0)
		arr[j + 1] = key;
	}
	std::cout << "The sum of maximal and minimal values elements is :" << arr[0] + arr[size-1]<<std::endl;
}

void question13() {
	const int size = 15;
	int arr[size];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];

		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		if (j + 1 >= 0)
			arr[j + 1] = key;
	}
	std::cout << "The sum of maximal and minimal values elements is :" << arr[0] + arr[size - 1] << std::endl;
	std::cout << "The difference of maximal and minimal values elements is :" << arr[size - 1] - arr[0] << std::endl;
}

void question14() {
	const int size = 17;
	int arr[size];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];
		if ((arr[i] & (int)1) == 1) {
			sum += arr[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 3 == 0) {
			arr[i] = sum;
		}
	}

	std::cout << "This is your new array where the all element which divided in 3 changed whit sum of odd elements value :" << std::endl << "{";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "}" << std::endl;
}

void question15() {
	const int size = 14;
	double arr[size];
	int count = 0;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the " << i + 1 << "th element of array" << std::endl;
		std::cin >> arr[i];

		double key = arr[i];
		int j = i - 1;
		while (j >= 0 && j < size/2 && arr[j] < key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		while (j >= size/2 && j < size && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		if (j + 1 >= 0)
			arr[j + 1] = key;
	}

	std::cout << "This is your new array where the element in [0...6] indexes are arranged in ascending order and elements in [7...13] indexes in descending order :" << std::endl << "{";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "}" << std::endl;

}

void question16() {
	const int size = 12;
	double arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];

		if (arr[i] > arr[max]) {
			max = i;
		}
		else if (arr[i] < arr[min]) {
			min = i;
		}
	}

	std::cout << "Count of elements which located in range of maximal value element and minimal value element is: " << ((max - min > 0) ? (max - min) : (min - max)) - 1 << std::endl;
}

void question17() {
	const int size = 15;
	int arr[size];
	int mul = 1;
	int count_of_negative = 0;
	int count_of_zeros = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];

		if (arr[i] > 0) {
			mul *= arr[i];
		}
		else if (arr[i] < 0) {
			count_of_negative++;
		}
		else
		{
			count_of_zeros++;
		}
	}
	std::cout << "The count of negative elements in this array is :" << count_of_negative << std::endl;
	std::cout << "The count of zero elements in this array is :" << count_of_zeros << std::endl;
	std::cout << "The multiplication of positive elements in this array is :" << mul << std::endl;
}

void question18() {
	const int size = 12;
	double arr[size];
	int max = 0;
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];

		if (arr[i] > arr[max]) {
			max = i;
		}
		else if (arr[i] < arr[min]) {
			min = i;
		}
	}

	std::cout << "Interval of elements values in this array is: " << arr[max] - arr[min] << std::endl;
}

void question19() {
	const int size = 19;
	int arr[size];
	int sum = 0;
	bool is_negative = true;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];

		if (arr[i] > 0 && is_negative) {
			sum += arr[i];
		}
		else if (arr[i] < 0 && is_negative) {
			is_negative = false;
		}
	}
	if (is_negative) {
		std::cout << "You don't have negative element in this array." << std::endl;
	}
	else {
		std::cout << "The sum of element which are to the negative is :" << sum << std::endl;
	}
}

void question20() {
	const int size = 19;
	int arr[size];
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];

		if (arr[i] % 3 == 0) {
			arr[i] = 0;
			count++;
		}
	}

	std::cout << "New array where all valus of elements which divided in 3 is changed whit 0 is :" << std::endl << " { ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << " }" << std::endl << "And counts of changes is :" << count << std::endl;
}

void question21() {
	const int size = 12;
	double arr[size];
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];
		if (arr[i] < arr[min]) {
			min = i;
		}
	}

	arr[min] *= 3;
	double tmp = arr[min];
	arr[min] = arr[size - 1];
	arr[size - 1] = arr[min];

	std::cout << "New array where minimal value elent is maltiply whit 3 and swaped whit lastr element :" << std::endl << " { ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << " }" << std::endl;
}

void question22() {
	const int size = 15;
	double arr[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];
	}
	std::cout << "Your array is : " << std::endl << "{ ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << " }" << std::endl;
	std::cout << "New array where array is raversed : " << std::endl << "{";
	for (int i = 0; i < size / 2; i++)
	{
		double tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << " }" << std::endl;
}

void question23() {
	const int size = 14;
	int arr[size];
	int mul = 1;
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];
		if ((i & 1) == 0) {
			sum += arr[i];
		}
		if ((arr[i] & 1) == 1) {
			mul *= arr[i];
		}
	}

	std::cout << "The multiple of odd value elements is :" << mul << std::endl;
	std::cout << "The sum of even index elements is :" << sum << std::endl;
}

void question24() {
	const int size = 12;
	double arr[size];
	double sum = 0;
	int count = 0;
	std::cout << "Please input the value of " << size - 1 << "th (or last) element of this array :";
	std::cin >> arr[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];
		if (arr[i] < arr[size - 1]) {
			sum += arr[i];
			count++;
		}
	}
	std::cout << "The sum of elements which smaller then last element of array is :" << sum << ". And cuont of this elements is :" << count << std::endl;
}

void question25() {
	const int size = 15;
	int arr[size];
	int sum = 0;
	for (int i = 0; i < size - 1; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];
		if (arr[i] > 0) {
			sum += arr[i];
		}
	}
	std::cout << "The new array where avery element are equal to similarly element of first array diference to sum of positive elements of first array is :" << std::endl << " { ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << " }" << std::endl;
}

void question26() {
	const int size = 15;
	double arr[size];
	double mul_positive = 1;
	double mul_negative = 1;
	for (int i = 0; i < size - 1; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];
		if (arr[i] > 0) {
			mul_positive *= arr[i];
		}
		else if (arr[i] < 0) {
			mul_negative *= arr[i];
		}
	}
	if (mul_negative < 0) {
		mul_negative *= -1;
	}
	std::cout << "The diference in multiple of every positive element and multiple of every negative element is :" << mul_positive - mul_negative;
}

void question27() {
	const int size = 19;
	int arr[size];
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];

		if (arr[i] > arr[max]) {
			max = i;
		}
	}

	for (int i = 0; i < size; i++) {
		if ((arr[i] & 1) == 0) {
			arr[i] = arr[max];
		}
	}

	std::cout << "New array where every element even element is changed whit maximal value element of this array :" << std::endl << "{";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << " }" << std::endl;
}

void question28() {
	const int size = 17;
	int arr[size];
	int avg = 0;
	int sum = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];

		if (arr[i] > 0) {
			avg += arr[i];
			count++;
		}
	}
	avg /= count;
	count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0 && -arr[i] > avg) {
			sum += arr[i];
			count++;
		}
		else if (arr[i] > avg) {
			sum += arr[i];
			count++;
		}
	}

	std::cout << "The sum of elements which absolut value biger then average of positive value elements is :" << sum << ". And count of this elements are :" << count << std::endl;
}

void question29() {
	const int size = 17;
	double arr[size];
	double sum_negative = 0;
	double sum_positive = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i + 1 << "th element of this array :";
		std::cin >> arr[i];

		if (arr[i] > 0) {
			sum_positive += arr[i];
		}
		else if (arr[i] < 0) {
			sum_negative += arr[i];
		}
	}
	sum_negative *= -1;
	std::cout << "The rest of sum of positive numbers and absolute value of sum of negative elements in this array is :" << (int)sum_negative % (int)sum_positive << std::endl;

}

void question30() {

	const int size = 12;
	double arr[size];
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << "Please input the value of " << i << "th element of this array :";
		std::cin >> arr[i];
		if (arr[i] < arr[min]) {
			min = i;
		}
	}
	std::cout << "The sum of minimal value element of array and it's index is :" << arr[min] + min << std::endl;
}

int main() {
	int quiz_num;
	std::cout << "Please input the number of question ";
	do {
		std::cout << "the number of question must be biger then 1 and smaller then 30:";
		std::cin >> quiz_num;

	} while (quiz_num > 30 || quiz_num < 0);

	switch (quiz_num) {
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
}