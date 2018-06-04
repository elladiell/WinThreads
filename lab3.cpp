#include "lab3.h"
#include <Windows.h>
#include <iostream>

HANDLE mutex;
HANDLE semaphores[10];
using namespace std;

unsigned int lab3_task_number()
{
	return 10;
}


DWORD WINAPI thread_function_d(LPVOID arg) {
	//1st interval, not waiting
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	} // 1/4
	for (int i = 0; i < 4; ++i)
		//for d c e b
		ReleaseSemaphore(semaphores[0], 1, nullptr);
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}; // 2/4
	   // the end of 2nd interval
	ReleaseSemaphore(semaphores[4], 1, nullptr);
	//for d e g f
	for (int i = 0; i < 4; ++i)
		ReleaseSemaphore(semaphores[0], 1, nullptr);
	//wait for 4
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[4], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	} // 3/4
	  // the end of 3rd interval
	ReleaseSemaphore(semaphores[5], 1, nullptr);
	//for d g h i
	for (int i = 0; i < 4; ++i)
		ReleaseSemaphore(semaphores[0], 1, nullptr);
	//wait for 5
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[5], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}; // 4/4
	ReleaseSemaphore(semaphores[6], 1, nullptr);
	//i k
	for (int i = 0; i < 2; ++i)
		ReleaseSemaphore(semaphores[0], 1, nullptr);
	//end!
	return 0;
}

DWORD WINAPI thread_function_c(LPVOID arg) {
	//1st interval, not waiting
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}
	for (int i = 0; i < 4; ++i)
		//for d c e b
		ReleaseSemaphore(semaphores[1], 1, nullptr);
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	} // 2/2
	  // the end of 2nd interval
	ReleaseSemaphore(semaphores[4], 1, nullptr);
	//for d e g f
	for (int i = 0; i < 4; ++i)
		ReleaseSemaphore(semaphores[1], 1, nullptr);
	//end!
	return 0;
}

DWORD WINAPI thread_function_a(LPVOID arg) {
	//1st interval, not waiting
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}
	for (int i = 0; i < 4; ++i)
		//for d c e b
		ReleaseSemaphore(semaphores[2], 1, nullptr);
	//end!
	return 0;
}

DWORD WINAPI thread_function_e(LPVOID arg) {
	//1st interval, not waiting
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}
	for (int i = 0; i < 4; ++i)
		//for d c e b
		ReleaseSemaphore(semaphores[3], 1, nullptr);
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	} // 2/3
	  // the end of 2nd interval
	ReleaseSemaphore(semaphores[4], 1, nullptr);
	//for d e g f
	for (int i = 0; i < 4; ++i)
		ReleaseSemaphore(semaphores[2], 1, nullptr);
	//wait for 4
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[4], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}// 3/3
	 // the end of 3rd interval
	ReleaseSemaphore(semaphores[5], 1, nullptr);
	//for d g h i
	for (int i = 0; i < 4; ++i)
		ReleaseSemaphore(semaphores[1], 1, nullptr);
	//end!
	return 0;
}

DWORD WINAPI thread_function_b(LPVOID arg) {
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}	// 1/1
		// the end of 2nd interval
	ReleaseSemaphore(semaphores[4], 1, nullptr);
	//for d e g f
	for (int i = 0; i < 4; ++i)
		ReleaseSemaphore(semaphores[3], 1, nullptr);
	//end!
	return 0;
}

DWORD WINAPI thread_function_g(LPVOID arg) {
	//wait for 4
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[4], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}// 1/2
	 // the end of 3rd interval
	ReleaseSemaphore(semaphores[5], 1, nullptr);
	//for d g h i
	for (int i = 0; i < 4; ++i)
		ReleaseSemaphore(semaphores[2], 1, nullptr);
	//wait for 5
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[5], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	} // 2/2
	ReleaseSemaphore(semaphores[6], 1, nullptr);
	//i k
	for (int i = 0; i < 2; ++i)
		ReleaseSemaphore(semaphores[1], 1, nullptr);
	//end!
	return 0;
}

DWORD WINAPI thread_function_f(LPVOID arg) {
	//wait for 4
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[4], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}// 1/1
	 // the end of 3rd interval
	ReleaseSemaphore(semaphores[5], 1, nullptr);
	//for d g h i
	for (int i = 0; i < 4; ++i)
		ReleaseSemaphore(semaphores[3], 1, nullptr);
	//end!
	return 0;
}

DWORD WINAPI thread_function_h(LPVOID arg) {
	//wait for 5
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[5], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}// 1/1
	ReleaseSemaphore(semaphores[6], 1, nullptr);
	//i k
	for (int i = 0; i < 2; ++i)
		ReleaseSemaphore(semaphores[2], 1, nullptr);
	//end!
	return 0;
}

DWORD WINAPI thread_function_i(LPVOID arg) {
	//wait for 5
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[5], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3

	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}	// 1/1
	ReleaseSemaphore(semaphores[6], 1, nullptr);
	//i k
	for (int i = 0; i < 2; ++i)
		ReleaseSemaphore(semaphores[3], 1, nullptr);
	//wait for 6
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[6], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	} // 2/2
	ReleaseSemaphore(semaphores[7], 1, nullptr);
	return 0;
}

DWORD WINAPI thread_function_k(LPVOID arg) {
	//wait for 6
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[6], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	//wait for 0 1 2 3
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[0], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[1], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[2], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[3], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}	// 1/1
	ReleaseSemaphore(semaphores[7], 1, nullptr);
	return 0;
}

DWORD WINAPI thread_function_m(LPVOID arg) {
	//wait for 7
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[7], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	while (true) {
		auto waitBreak = WaitForSingleObject(semaphores[7], INFINITE);
		if (waitBreak == WAIT_OBJECT_0)
		{
			break;
		}
	}
	char c = *((char*)arg);
	for (int i = 0; i < 3; ++i)
	{
		while (true)
		{
			auto waitBreak = WaitForSingleObject(mutex, INFINITE);
			if (waitBreak == WAIT_OBJECT_0)
			{
				cout << c << flush;
				ReleaseMutex(mutex);
				break;
			}
		}
		Sleep(10);
	}// 1/1
	return 0;
}

int lab3_init()
{
	DWORD threadID;
	mutex = CreateMutex(nullptr, false, nullptr);
	// creating semaphores
	for (int i = 0; i < 10; ++i)
	{

		semaphores[i] = CreateSemaphore(nullptr, 0, 8, nullptr);
	}

	HANDLE threads[11];

	char d = 'd';
	char c = 'c';
	char a = 'a';
	char e = 'e';
	char b = 'b';
	char g = 'g';
	char f = 'f';
	char h = 'h';
	char i = 'i';
	char k = 'k';
	char m = 'm';


	threads[0] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_d, &d, 0, &threadID);
	threads[1] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_c, &c, 0, &threadID);
	threads[2] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_a, &a, 0, &threadID);
	threads[3] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_e, &e, 0, &threadID);

	threads[4] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_b, &b, 0, &threadID);

	threads[5] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_g, &g, 0, &threadID);
	threads[6] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_f, &f, 0, &threadID);

	threads[7] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_h, &h, 0, &threadID);
	threads[8] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_i, &i, 0, &threadID);

	threads[9] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_k, &k, 0, &threadID);

	threads[10] = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)thread_function_m, &m, 0, &threadID);



	WaitForMultipleObjects(11, threads, true, INFINITE);

	for (int i = 0; i < 11; ++i)
	{
		CloseHandle(threads[i]);
	}
	for (int i = 0; i < 10; ++i)
	{
		CloseHandle(semaphores[i]);
	}
	CloseHandle(mutex);

	return 0;
}