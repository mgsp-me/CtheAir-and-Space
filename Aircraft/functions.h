#ifndef FUNCTIONS_H
#define FUNCTIONS_H


double mainStructureWeight();

double dryMass(int engineWeight);

double crewWeight();

double fuelWeight();

double takeOffWeight(int engineW);

double thrustToWeightRatio(int engineThrust,int numberOfEngines, double aircraftWeight);

double gravity(float groundGravity, float height, float radiusOfPlanet);


#endif