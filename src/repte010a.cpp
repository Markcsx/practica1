/*
 * repte010a.cpp
 *
 */

#include "repte010a.h"
#include "partit.h"

void Repte010a(ostream& os)
{
	os << endl;
	os << "Repte010a: Classe CPartit" << endl;
	os << "=========================" << endl;

	// Prova objecte construit per defecte

	CPartit	partitBuit;

	os << "Objecte de CPartit construit amb el constructor per defecte" << endl;
	os << "Nom equip local: " << partitBuit.GetLocal() << endl;
	os << "Gols equip local: " << partitBuit.GetGolsLocal() << endl;
	os << "Nom equip visitant: " << partitBuit.GetVisitant() << endl;
	os << "Gols equip visitant: " << partitBuit.GetGolsVisitant() << endl << endl;


	// Prova objecte construit amb el constructor que rep dades

	CPartit	partit("UAB", "UPC");

	os << "Objecte de CPartit construit amb el constructor amb paràmetres" << endl;
	os << "Nom equip local: " << partit.GetLocal() << endl;
	os << "Gols equip local: " << partit.GetGolsLocal() << endl;
	os << "Nom equip visitant: " << partit.GetVisitant() << endl;
	os << "Gols equip visitant: " << partit.GetGolsVisitant() << endl << endl;

	// Prova de les funcions membre de CPartit

	partit.MarcaLocal();
	partit.MarcaVisitant();
	partit.MarcaLocal();

	os << "Nom equip local: " << partit.GetLocal() << endl;
	os << "Gols equip local: " << partit.GetGolsLocal() << endl;
	os << "Nom equip visitant: " << partit.GetVisitant() << endl;
	os << "Gols equip visitant: " << partit.GetGolsVisitant() << endl << endl;

}
