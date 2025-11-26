#include <iostream>
#include "functions.h"
// units: Kg, Meters, Seconds

class engine{
    public:
        int engineWeight;
        int thrust;
};



// ------------------------ Functions for data ------------------------ // 

double takeOffWeight(int engineW){
    return dryMass(engineW) + crewWeight() + fuelWeight();

}

double thrustToWeightRatio(int engineThrust,int numberOfEngines, double aircraftWeight){
    double weightInNewtons = aircraftWeight * 9.8;

    return (engineThrust * numberOfEngines)/weightInNewtons;

}



// ----------- MAIN FUNCTION ----------- //


int main() {
    engine GE9X;
    GE9X.engineWeight = 9800;
    GE9X.thrust = 455000; //Newtons


    std::cout << "The TOW is: " << takeOffWeight(GE9X.engineWeight) << std::endl;
    std::cout << "The Thrust/Weight ratio is: " << thrustToWeightRatio(GE9X.thrust, 2, takeOffWeight(GE9X.engineWeight)) << std::endl;
    
    // Retorna 0 para indicar que o programa rodou com sucesso
    return 0;
}