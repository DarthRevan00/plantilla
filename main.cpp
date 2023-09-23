#include <iostream>
#include <random>
#include "tour.h"
#include "rnd.h"
#include <chrono>
#include <ctime>

using namespace std;
int main()
{
	Tour t {532};
	t.shuffleTour();
	t.visualizar();
	return 0;
}

