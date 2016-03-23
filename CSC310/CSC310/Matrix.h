#pragma once
class Matrix
{
public:
	Matrix(int m, int n);
	~Matrix();
	void interchange(int row1, int row2);
	void print();
	void setValue(int m, int n, double value);
private:
	int m_rows;
	int m_cols;
	double *matrix;
};

