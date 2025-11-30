#include <iostream>
#include "functions.h"

//Variables
int aircraftWeight;


double gravity(float groundGravity, float height, float radiusOfPlanet){
    double ratio = 2*(height/radiusOfPlanet);
    return (groundGravity*(1 - ratio)); 
}
//Coeficiente de sustentação máximo na configuração de lançamento:
//double sustainCoefficient(){}