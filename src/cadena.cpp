// Classe CCadena
// (C) Pràctica FES 2015-2016
// 19/04/2016
//
// Definició de la classe CCadena que permet gestionar cadenes de caràcters.


#include <stdio.h>
#include <string.h>

// Custom headers
#include "cadena.h"

// class constructor
CCadena::CCadena()
{
  m_numCars = 0;
  m_pText = new char[1];
  m_pText[0] = 0;
}

CCadena::CCadena(const char* text)
{
  m_numCars = strlen(text);
  m_pText = new char[m_numCars + 1];
  strcpy(m_pText, text);
}

CCadena::CCadena(const CCadena& cadena)
{
  m_numCars = cadena.m_numCars;
  m_pText = new char[m_numCars + 1];
  strcpy(m_pText, cadena.m_pText);
}

// class destructor
CCadena::~CCadena()
{
  delete[] m_pText;
}

CCadena& CCadena::operator=(const CCadena& cadena)
{
    if (this != &cadena)
    {
      delete[] m_pText;
      m_numCars = cadena.m_numCars;
      m_pText = new char[m_numCars + 1];
      strcpy(m_pText, cadena.m_pText);
    }
    return (*this);
}

CCadena CCadena::operator+(const CCadena& cadena) const
{
    CCadena res;
    res.m_numCars = m_numCars + cadena.m_numCars;
    res.m_pText = new char[res.m_numCars + 1];
    strcpy(res.m_pText, m_pText);
    strcpy(&res.m_pText[m_numCars], cadena.m_pText);

    return res;
}

bool CCadena::operator==(const char* text)
{
    return strcmp(m_pText, text) == 0;
}

bool CCadena::operator==(const CCadena& obj) const
{
    return strcmp(m_pText, obj.m_pText) == 0;
}

bool CCadena::operator==(char caracter) const
{
    return m_pText[0] == caracter;
}

// Funcions Friend
ostream& operator<<(ostream &os, const CCadena& cadena)
{
    os << cadena.m_pText;
    return os;
}

istream& operator>>(istream &is, CCadena &cadena)
{
    char text[300];
    is >> text;

    delete[] cadena.m_pText;
    cadena.m_numCars = strlen(text);
    cadena.m_pText = new char[cadena.m_numCars + 1];
    strcpy(cadena.m_pText, text);

    return is;
}
