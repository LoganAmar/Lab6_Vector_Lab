/**
* Logan Amar
* CPE 2600 Lab5
* myveclab.h
* Main source file
*/

struct vect{
    char name;
    int x;
    int y;
    int z;
};

vect add(vect a, vect b);

vect sub(vect a, vect b);

vect scalar(vect a, int scalar);

int dot(vect a, vect b);

void new_vector(char name, int x, int y, int z);