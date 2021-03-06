// CppOmp03.cpp: 基于OpenMP的多线程编程示例03
//

#include <omp.h>
#include <iostream>
using namespace std;

int main()
{
	int a[5];
#pragma omp parallel
	{
#pragma omp for
		for (int i = 0; i < 5; i++) a[i] = i * i;
#pragma omp master
		for (int i = 0; i < 5; i++) cout << "a[" << i << "] = " << a[i] << endl;
#pragma omp barrier
#pragma omp for
		for (int i = 0; i < 5; i++) a[i] += i;
	}
	system("pause");
	return 0;
}
