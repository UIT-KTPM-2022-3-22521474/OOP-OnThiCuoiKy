#include <iostream>
using namespace std;

class IntArr
{
private:
	int count;
	int* values;
public:
	IntArr();
	IntArr(int, int);
	IntArr(int);
	IntArr concat(const IntArr&);
	void push(int);
	friend istream& operator>>(istream&, IntArr&);
	friend ostream& operator<<(ostream&, IntArr&);
	~IntArr();
};

int main()
{
	cout << "Project 02: Class IntArr - 2022_2023_HK1." << endl;
	IntArr l1;
	IntArr l2(3, 2);
	IntArr l3(2);
	IntArr l4 = l2.concat(l3);
	l2.push(3);
	cin >> l2;
	cout << l2;
	return 0;
}

IntArr::IntArr()
{
	count = 0;
	values = nullptr;
}

IntArr::IntArr(int n, int v)
{
	count = n;
	values = new int[count];
	for (int i = 0; i < count; i++)
	{
		values[i] = v;
	}
}

IntArr::IntArr(int n)
{
	count = n;
	int v = 0;
	values = new int[count];
	for (int i = 0; i < count; i++)
	{
		values[i] = v;
	}
}

IntArr IntArr::concat(const IntArr& ia)
{
	IntArr result(count + ia.count);
	for (int i = 0; i < count; i++) 
	{
		result.values[i] = values[i];
	}
	for (int i = 0; i < ia.count; i++) 
	{
		result.values[count + i] = ia.values[i];
	}
	return result;
}

void IntArr::push(int value)
{
	int* newValues = new int[count + 1];
	for (int i = 0; i < count; i++)
	{
		newValues[i] = values[i];
	}
	newValues[count] = value;
	delete[] values;
	values = newValues;
	count++;
}

istream& operator>>(istream& is, IntArr& ia)
{
	delete[] ia.values;
	cout << "Enter the number of elements: ";
	is >> ia.count;
	ia.values = new int[ia.count];
	for (int i = 0; i < ia.count; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		is >> ia.values[i];
	}
	return is;
}

ostream& operator<<(ostream& os, IntArr& ia)
{
	os << "\nIntArr values: ";
	for (int i = 0; i < ia.count; i++) 
	{
		os << ia.values[i] << " ";
	}
	os << endl;
	return os;
}

IntArr::~IntArr()
{
	return;
}