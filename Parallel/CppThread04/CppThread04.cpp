// CppThread04.cpp: 定义控制台应用程序的入口点。
//

#include <iostream>
#include <thread>
using namespace std;

void foo(int x)
{
	cout << "foo(" << x << ") is running..." << endl;
	this_thread::sleep_for(chrono::seconds(5));
	cout << "foo(" << x << ") is over." << endl;
}

int main()
{
	cout << "main start..." << endl;

	thread t1(foo, 1);
	t1.detach();

	cout << "main is over." << endl;
	return 0;
}