// Classe CCadena
// (C) Pràctica FES 2015-2016
// 19/04/2016
//
// Definició de la classe CCadena que permet gestionar cadenes de caràcters.

#ifndef CADENA_H
#define CADENA_H

// C++ headers
#include <iostream>
using namespace std;

class CCadena {
 public:
	// class constructor
	CCadena();
	CCadena(const char* text);
	CCadena(const CCadena& cadena);
	// class destructor
	~CCadena();

	CCadena& operator=(const CCadena& cadena);
	CCadena  operator+(const CCadena& cadena) const;

	bool operator==(const char* text);
	bool operator==(const CCadena& obj) const;
	bool operator==(char caracter) const;

	// FRIEND FUNCTIONS
	friend ostream& operator<<(ostream &os, const CCadena& cadena);
	friend istream& operator>>(istream &is, CCadena &cadena);

 private:
    int m_numCars;
    char *m_pText;
};

#endif /* CADENA_H */
