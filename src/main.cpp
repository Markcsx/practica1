/*
 * main.cpp
 *
 */

//
// Programa principal

// C++ headers
#include <iostream>
#include <fstream>
#include <cstdlib> // EXIT_SUCCESS
using namespace std;

// Llista de includes a afegir
#include "repte010a.h"

int
main(int argc, char const *argv[])
{
	ofstream fitxer;

	fitxer.open("repte010a.txt");
	Repte010a(cout);
	Repte010a(fitxer);
	fitxer.close();

	return EXIT_SUCCESS;
}
