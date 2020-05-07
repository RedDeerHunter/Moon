//
// Created by calgary on 05/05/2020.
//

#ifndef INVADERS_MOON_H
#define INVADERS_MOON_H

namespace mat {

    class Matrix //utile pour la taille de l'array dans les fonctions, inutile de le passer en param
    {
    private:
        int _length;
        int _height;
        float** _array;
    public:
        Matrix(int _length, int _height); //crée une matrice avec des valeurs aléatoire de taille length x height
        Matrix(float **_array, int _length,int _height); //crée une matrice avec les valeurs du tableau de taille length x height
        int getLength();
        int getHeight();
        float** getArray();
        int T(); //transpose de la matrice
        int ravel(); //écrase la matrice en une unique ligne
    };

    Matrix dot(Matrix m1, Matrix m2); //T change en fonction de la taille des matrices

    Matrix outer(Matrix m1, Matrix m2); // doivent être des Matrices de tailles 1-D impérativement, retourne le produit

    Matrix vstack(Matrix m1); //vstack sur une matrice

    Matrix vstack(Matrix m1, Matrix m2); //vstack sur deux matrices, reprendra le code de vstack sur la seule matrice

    Matrix zeros_like(Matrix m); //retourne une matrice de taille égale avec uniquement des 0

    Matrix sqrt(Matrix m); // retourne une matrice de taille égale mais avec les racines des valeurs

    float randomU(float low, float high); //aller voir la doc

//T mean(); pas la priorité

//T std(); pas la priorité

}

#endif //INVADERS_MOON_H
