// return_value_optimization_test.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include "vector3.h"
#include <array>
#include "Test.h"

using namespace std;

struct AA {};

int main()
{
	vector3 a(rand(), rand(), rand());
	cout << a.x << "," << a.y << "," << a.z << endl;

	cout << "------------\n";

	// object ��ü�� �����ϴ� ������ �ڵ��� �Լ��� ȣ���Ѵ�.
	// �̰� ����Ǵ� ���� copy constructor or operator=�� ����Ǵ��� ������.
	vector3 d = foo(a.x, a.y, a.z);

	// ����� ���
	cout << d.x << "," << d.y << "," << d.z << endl;

	return 0;
}

