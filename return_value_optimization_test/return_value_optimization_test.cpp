// return_value_optimization_test.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

	// object 자체를 리턴하는 무식한 코딩된 함수를 호출한다.
	// 이게 실행되는 동안 copy constructor or operator=가 실행되는지 보세요.
	vector3 d = foo(a.x, a.y, a.z);

	// 결과물 출력
	cout << d.x << "," << d.y << "," << d.z << endl;

	return 0;
}

