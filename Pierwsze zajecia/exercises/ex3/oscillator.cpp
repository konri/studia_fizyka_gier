#include "oscillator.h"

bill::vector oscillator::Force(){
  //return -k*std::get<0>(present)/mass; //obliczamy sile sprezystosci
    double sunMass = 3.0;
    bill::vector sunPosition = bill::vector({0.,0.,0.});
return mass*sunMass / pow(bill::vector::norm(sunPosition - std::get<0>(present)),3) * (sunPosition - std::get<0>(present));

}

oscillator::oscillator(bill::BillIntegrator algorithm, double k, bill::vector position, bill::vector velocity, double mass, bill::vector color):bill::BillMaterialPoint(algorithm,position,velocity,mass,color){
	this->k = k;
}
