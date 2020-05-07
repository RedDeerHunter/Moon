#include <iostream>
#include "Moon.cpp"

int main() {
    float** t;
    t = new float*[1];
    for(int i = 0; i < 1; ++i)
        t[i] = new float[5];

    float z = 0.0;
    for(int i = 0; i<1; i++){
        for(int j = 0; j<5; j++){
            z = z + 1.0;
            t[i][j] = z;
        }
    }


    float** t2;
    t2 = new float*[5];
    for(int i = 0; i < 5; ++i)
        t2[i] = new float[1];

    float z2 = 0.0;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<1; j++){
            z2 = z2 + 1.0;
            t2[i][j] = z2;
        }
    }

    mat::Matrix m = mat::Matrix(t,5,1);
    mat::Matrix m3 = mat::Matrix(t2,1,5);
    //m.ravel();
    mat::Matrix m2 = mat::dot(m,m3);
    //mat::Matrix m3 = mat::outer(m,m2);


    /*for(int i = 0; i<m2.getHeight(); i++){
        for(int j = 0; j<m2.getLength(); j++){
            std::cout << "|" << m2.getArray()[i][j];
        }
        std::cout << "|"  << std::endl;
    }*/


    return 0;
}
