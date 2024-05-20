#include <iostream>
#include <string>
using namespace std;

#include "HeaderJantung.h"
#include "Headermanusia.h"

int main() {
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;

}
