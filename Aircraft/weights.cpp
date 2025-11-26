#include <iostream>
#include "functions.h"


double mainStructureWeight() {
    double avgInnerDiameter = 8.4;
    double avgOuterDiameter = 9.3;
    double lenght = 64.0;
    const double PI = 3.1415; 
    double density = 53.8; 
    
    double innerAreaTerm = (avgInnerDiameter * avgInnerDiameter) / 4.0;
    double outerAreaTerm = (avgOuterDiameter * avgOuterDiameter) / 4.0;
    
    double area = PI * (outerAreaTerm - innerAreaTerm);
    
    return lenght * area * density * 0.92;
}

double dryMass(int engineWeight) {
    int quantityOfEngines = 2;
    double wingsWeight = 48000;
    double landingGearWeight = 3000;
    int quantityOfLandingGears = 5;
    int payloadMass = 130000;
    
    return (engineWeight * quantityOfEngines) + wingsWeight + (landingGearWeight * quantityOfLandingGears) + mainStructureWeight() + payloadMass;
}

double crewWeight(){
    int crewSize = 10;
    int avgWeightOfAPerson = 74;

    return crewSize * avgWeightOfAPerson;
}

double fuelWeight(){
    double fuelWeight = 60000;
    double fuelTaxi = 750;
    double fuelReserve = 11000;

    return fuelWeight + fuelTaxi + fuelReserve;
}