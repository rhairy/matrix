#include<iostream>
#include"Matrix.h"

using namespace std;

int main()
{
	Matrix *A = new Matrix(3, 4);

	A->setValue(0, 0, 0);
	A->setValue(0, 1, 1);
	A->setValue(0, 2, 0);
	A->setValue(0, 3, 0);

	A->setValue(1, 0, 0);
	A->setValue(1, 1, 0);
	A->setValue(1, 2, 1);
	A->setValue(1, 3, 0);

	A->setValue(2, 0, 1);
	A->setValue(2, 1, 0);
	A->setValue(2, 2, 0);
	A->setValue(2, 3, 0);

	A->print();

	A->interchange(2, 0);
	cout << "***" << endl;

	A->print();

	return 0;
}