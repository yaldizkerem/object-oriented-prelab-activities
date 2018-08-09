#ifndef ARRAYHELPER_H
#define ARRAYHELPER_H
#include <iostream>
#include <iomanip>
using namespace std;
template <typename T>

class ArrayHelper {
public:
  ArrayHelper();
  ~ArrayHelper();
	static T Accumulate(T* data, int startIndex, int elementCount);
	static void Display(T* array, int size, int numberOfElementsInOneLine, int oneElementLenght);
	int MaxIndex(T* array, int size);
	T* Merge(T* firstArray, int firstArraySize, T* secondArray, int secondArraySize);
	int MinIndex(T* array, int size);
	static T Multiply(T* array, int startIndex, int elementCountTobeMultiplied);
	void Sort(T* array, int size);
	void Swap(T& operand1, T& operand2);
};
#endif
