// ExerciceMatrice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Matrice.h"
int main()
{
	/*Matrice M;
	M.remplir();
	M.afficher();
	Matrice * M1 = new Matrice();
	M1->remplir();
	M1->afficher();
	delete M1;*/
	Matrice T[3];
	for (int i = 0; i < 3; i++) {
		cout << "Remplir la matrice " << i + 1 << endl;
		T[i].remplir();
	}
	cout << "afficher les matrices" << endl;
	for(int i = 0; i < 3; i++) {
		cout << "\n" << "Matrice " << i + 1 << endl;
		T[i].afficher();
	}
	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
