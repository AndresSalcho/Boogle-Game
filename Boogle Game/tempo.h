#pragma once
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

class Tempo {
private:
	int segundos, Si;
public:
	Tempo();
	~Tempo();
	int reloj();
};