#include "ArrayHelper.h"

template<typename T>
ArrayHelper<T>::ArrayHelper()
{
}

template<typename T>
ArrayHelper<T>::~ArrayHelper()
{
}

template<typename T>
T ArrayHelper<T>::Accumulate(T * data, int startIndex, int elementCount)
{
	T sum = 0;
	for (int i = startIndex; i < startIndex + elementCount; i++) {
		sum += data[i];
	}
	return sum;
}

template<typename T>
void ArrayHelper<T>::Display(T * array, int size, int numberOfElementsInOneLine, int oneElementLenght)
{
	cout << "Displaying the Container";
	for (int i = 0; i < size; i++) {
    if ((i) % numberOfElementsInOneLine == 0)
      cout << endl;
		cout << setw(oneElementLenght) << array[i] << ",";
	}
  cout<<endl<<endl;
}

template<typename T>
int ArrayHelper<T>::MaxIndex(T * array, int size)
{
	T max = array[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (array[i] > max) {
			max = array[i];
			index = i;
		}
	}
	return index;
}

template<typename T>
T * ArrayHelper<T>::Merge(T * firstArray, int firstArraySize, T * secondArray, int secondArraySize)
{
	T* finalArray = new T[firstArraySize + secondArraySize];
	for (int i = 0; i < firstArraySize; i++) {
		finalArray[i] = firstArray[i];
	}
	for (int i = firstArraySize; i < secondArraySize+firstArraySize; i++) {
		finalArray[i] = secondArray[i-firstArraySize];
	}
	return finalArray;
}

template<typename T>
int ArrayHelper<T>::MinIndex(T * array, int size)
{
	T min = array[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (array[i] < min) {
			min = array[i];
			index = i;
		}
	}
	return index;
}

template<typename T>
T ArrayHelper<T>::Multiply(T * array, int startIndex, int elementCountTobeMultiplied)
{
	T multiply = 1;
	for (int i = startIndex; i < startIndex + elementCountTobeMultiplied; i++) {
		multiply *= array[i];
	}
	return multiply;
}

template<typename T>
void ArrayHelper<T>::Sort(T * array, int size)
{
	T temp;
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (array[j] >array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

template<typename T>
void ArrayHelper<T>::Swap(T & operand1, T & operand2)
{
  T temp;
  temp=operand1;
  operand1=operand2;
  operand2=temp;
}
