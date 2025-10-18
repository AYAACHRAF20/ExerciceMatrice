#pragma once
#include<iostream>
using namespace std;
class Matrice
{
private:
	int** data;
	int ligne;
	int colonne;
public:
	Matrice();
	void afficher() const;
	void remplir();
	~Matrice();
};

