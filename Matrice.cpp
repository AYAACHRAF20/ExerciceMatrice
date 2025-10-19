#include "Matrice.h"

Matrice::Matrice()
{
	cout << "donner le nombre de lignes" << endl;
	cin >> this->ligne;
	cout << "donner le nombre de colonnes" << endl;
	cin >> this->colonne;
	this->data = new int* [this->ligne];
	
	for (int i = 0; i < this->ligne; i++) {
		this->data[i] = new int[this->colonne];
	}
	for (int i = 0; i < this->ligne; i++) {
		for (int j = 0; j < this->colonne; j++) {
			this->data[i][j] = 0;
		}
	}
}

Matrice::Matrice(const Matrice& m)
{
    this->ligne = m.ligne;
    this->colonne = m.colonne;
	
    this->data = new int*[ligne];
    for(int i = 0; i < this->ligne; i++)
    {
        this->data[i] = new int[colonne];
        for(int j = 0; j < this->colonne; j++)
        {
            this->data[i][j] = m.data[i][j]; 
        }
    }
}

void Matrice::afficher() const
{
	for (int i = 0; i < this->ligne; i++) {
		for (int j = 0; j < this->colonne; j++) {
			cout << "M[" << i << "][" << j << "]=" << this->data[i][j] << endl;
		}
	}
}


void Matrice::remplir()
{
	cout << "remplissage des valeurs de la matrice" << endl;
	for (int i = 0; i < this->ligne; i++) {
		for (int j = 0; j < this->colonne; j++) {
			cout << "M[" << i << "][" << j << "]=" << endl;
			cin >> this->data[i][j];
		}
	}
}

Matrice::~Matrice()
{
	for (int i = 0; i < this->ligne; i++) {
		delete[] this->data[i];
		this->data[i] = nullptr;
	}
	delete[] this->data;
	this->data = nullptr;
}
