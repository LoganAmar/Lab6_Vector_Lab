#include "myvectop.h"

vect add(vect a, vect b){
    vect returnval;
    returnval.x = a.x + b.x;
    returnval.y = a.y + b.y;
    returnval.z = a.z + b.z;

    return returnval;
}

vect sub(vect a, vect b){
    vect returnval;
    returnval.x = a.x - b.x;
    returnval.y = a.y - b.y;
    returnval.z = a.z - b.z;

    return returnval;
}

vect scalar(vect a, int scalar){
    vect returnval;

    returnval.x = a.x * scalar;
    returnval.y = a.y * scalar;
    returnval.z = a.z * scalar;

    return returnval;
}

int dot(vect a, vect b){
    return a.x * b.x + a.y * b.y + a.z * a.z;
}