/*
 * Partit.h
 *
 * Pràctiques Fonaments d'Enginyeria del Software
 */

#ifndef PARTIT_H_
#define PARTIT_H_
#include "cadena.h"

// Afegeix a continuació els includes que necessitis. Per poder declarar variables
// de tipus CCadena hauràs de fer l'include de l'arxiu .h corresponent.

class CPartit {
public:
	// [PAS 2]
	// Declara les següents funcions membre de la classe
	// 2.1 Un constructor per defecte que inicialitzi el nom dels equips
	//     locals i visitants a la paraula "indefinit" i inicialitzi els
	//     seus gols al valor zero.
	CPartit();
	// 2.2 Un constructor que rebi com a paràmetre el nom de l'equip local i visitant.
	//	   Guardarà aquests noms a les variables membre de la classe corresponents,
	//     i inicialitzara els seus gols al valor zero
	CPartit(CCadena nomlocal, CCadena nomvisit);
	// 2.3 Les funcions 'getters' que retornin el valor guardat
	//	   a cada variable membre de la classe, amb noms
	//	   - GetLocal
	//	   - GetVisitant
	//	   - GetGolsLocal
	//	   - GetGolsVisitant
	CCadena GetLocal();
	CCadena GetVisitant();
	int GetGolsLocal();
	int GetGolsVisitant();
	// 2.4 Les funcions per incrementar respectivament en un els gols de
	//	   l'equip local i visitant.
	//	   - MarcaLocal
	//	   - MarcaVisitant
	void MarcaLocal();
	void MarcaVisitant();
private:
	// [ PAS 1]
	// Declara les variables membre (o atributs) de la classe per matenir
	// - el nom de l'equip local (cadena de caràcters)
	// - els gols de l'equip local (sencer)
	// - el nom de l'equip visitant (cadena de caràcters)
	// - els gols de l'equip visitant (sencer)
	CCadena m_nomlocal;
	CCadena m_nomvisit;
	int m_GolsLocal;
	int m_GolsVisitant;
};

#endif /* PARTIT_H_ */
