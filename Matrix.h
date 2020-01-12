#pragma once
#include <iostream>
class Matrix
{
public:
	Matrix();
	Matrix(int m, int n);			 //����һ��m*n��ȫ�����
	Matrix(int n);				 //����һ��n*n�ĵ�λ����
	Matrix(const Matrix &);		 //�������캯�������
	Matrix(double* items, int m, int n);//�������鿽��һ������
	~Matrix();

	int getRowNum() const;				//���ؾ��������
	int getColNum() const;				//���ؾ��������

	Matrix Trans() const;				//������ת��
	//��������б任
	//���j=-1,���i����multiply��
	//���j��ȡֵ��Χ�ڣ��򽫵�i������multiply���ӵ�j��
	void RowSwap(int i, int j, double multiply);
	//��������
	void RowSwap(int i, int j);
	double get(int i, int j) const;			//���ؾ����i��j��Ԫ��
	void set(int i, int j, double val);		//���þ����i��j��Ԫ��


	Matrix operator +(const Matrix &m);	 	//�����������
	Matrix operator -(const Matrix &m);	    //�����������
	Matrix operator *(const Matrix &m);     //�����������
	double operator /(const double f);      //������Ϊһ��һ��ʱ���Գ���
	Matrix& operator=(const Matrix &m);
	Matrix operator -();                    //�Ծ���ȡ��
	Matrix Inverse();
	friend std::ostream& operator <<(std::ostream &os, const Matrix &m);//������<<
    Matrix operator *(const double f);         //������Գ����������ں�
	friend Matrix operator *(const double f,const Matrix &m);    //������Գ�����������ǰ
private:
	double *item;		//ָ�������Ԫ�ص�ָ��
	int rowNum;		//��������
	int colNum;		//��������
};