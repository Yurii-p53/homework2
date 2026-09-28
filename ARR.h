#pragma once
#include <iostream>

#include<Fraction.h>

using namespace std;
template<class T>
class Array
{
	T* arr = nullptr;
	int size;

public:

	Array();

	explicit Array(int s);

	Array(const Array& obj);

	Array& operator=(const Array& obj);

	~Array();

	void setRand() const;

	void show() const;

	void add(const T& value);

	void remove(int index);

	void insert(const T& index, int value);

	void sort() const;

	void reverse();

	void clear();

	void resize(int newSize);

	void fill(const T& value) const;

	int getSize();

	int countValue(const T& value) const;

	int findValue(const T& value) const;

	int get(int index) const;

	void set(int index, const T& value) const;

	// int getMax() const;

	// int getMin() const;

	//int getSum() const;

	// double getAvg() const;

	bool contains(const T& value) const;

	T& operator[](int idx);

	friend ostream& operator<<(ostream& out, const Array& obj);
	friend istream& operator>>(istream& in, Array& obj);


	Array operator-() const {
		Array result(size);
		for (int i = 0; i < size; i++) {
			result.arr[i] = -arr[i];
		}
		return result;
	}

	Array operator/(int n) const {
		if (n == 0) return *this;
		Array result(size);
		for (int i = 0; i < size; i++) {
			result.arr[i] = arr[i] / n;
		}
		return result;
	}

	Array& operator++() {
		for (int i = 0; i < size; i++) {
			arr[i]++;
		}
		return *this;
	}

	bool operator!() const {
		return size == 0 || arr == nullptr;
	}

	
};

template<class T>
Array<T>::Array() : arr(nullptr), size(0)
{

}
template<class T>
Array<T>::Array(int s)
{
	size = s;
	arr = new int[size] {0};
}
template<class T>
Array<T>::Array(const Array& obj) {
	cout << "copyconstr array\n";
	size = obj.size;
	arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = obj.arr[i];
	}
}
template<class T>
Array<T>& Array<T>::operator=(const Array& obj) {
	if (this == &obj)
	{
		return *this;
	}

	delete[] arr;

	size = obj.size;
	arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = obj.arr[i];
	}
	return *this;

	cout << "copycontsr with oper\n";
}

template<class T>
Array<T>::~Array()
{
	delete[] arr;
}
template<class T>
void Array<T>::setRand() const
{
	cout << "No implementation for " << typeid(T).name << endl;
}

template<>
void Array<int>::setRand() const
{
	int minValue = 0, int maxValue = 9;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (maxValue - minValue + 1) + minValue;
	}
}

template<>
void Array<Fraction>::setRand() const
{
	int minValue = 0, int maxValue = 9;
	for (int i = 0; i < size; i++)
	{
		arr[i] = Fraction(rand() % (maxValue - minValue + 1) + minValue);
	}
}

	
template<class T>
void Array<T>::show() const
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>	
void Array<T>::add(int value)
{
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete[] arr;
	size++;
	arr = temp;
}


template<class T>
void Array<T>::remove(int index)
{

}


template<class T>
void Array<T>::sort() const
{

}


template<class T>
void Array<T>::reverse()
{

}

template<class T>
void Array<T>::clear()
{

}

template<class T>
void Array<T>::resize(int newSize)
{

}

template<class T>
bool Array<T>::contains(const T& value) const {

}


template<class T>
int Array<T>::findValue(const T& value) const {
}


template<class T>
int Array<T>::get(int index) const {

}


template<class T>
void Array<T>::set(int index, const T& value) const {

}


template<class T>
int Array<T>::countValue(const T& value) const {

}

template<class T>
bool Array<T>::operator[](int index) {
	return arr[index];
}

template<class T>
int Array<T>::getSize()
{
	return size;
}
