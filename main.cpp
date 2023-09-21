#include <iostream>
#include <random>
#include "tour.h"
#include "rnd.h"

using namespace std;
int main()
{
	// Tour t {532};
	// t.visualizar();
	GTRandom rnd {100};
	cout<<"random: "<<rnd.getNextRandom()<<endl;

	return 0;
}

