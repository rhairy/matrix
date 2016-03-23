#include<iostream>
#include "Matrix.h"

using namespace std;

Matrix::Matrix(int m, int n) : m_rows(m), m_cols(n)
{
	matrix = new double[m * n];
}


Matrix::~Matrix()
{
}

void Matrix::interchange(int row1, int row2)
{
	int *tmp_row = new int[m_cols];
	
	/* Copy row1 into a temp array */
	for (int i = row1 * m_cols, j = 0; i < row1 * m_cols + m_cols; i++, j++) {
		tmp_row[j] = matrix[i];
	}
	/* Copy row2 into row1. */
	for (int i = row2 * m_cols, j = row1 * m_cols; i < row2 * m_cols + m_cols; i++, j++) {
		matrix[j] = matrix[i];
	}

	/* Copy tmp_row into row2. */
	for (int i = row2 * m_cols, j = 0; i < row2 * m_cols + m_cols; i++, j++) {
		matrix[i] = tmp_row[j];
	}

	delete[] tmp_row;
}

void Matrix::print()
{
	for (int m = 0; m < m_rows; m++) {

		for (int n = 0; n < m_cols; n++) {
			cout << matrix[m * m_cols + n] << "\t";
		}
		cout << "\n";
	}
}

void Matrix::setValue(int m, int n, double value)
{
	matrix[m * m_cols + n] = value;
}
