#include <iostream>
#include "question1.h"

int main() {

    do {
        double mass, velocity;

       
        std::cout << "Enter mass in kilograms: ";
        std::cin >> mass;

        
        std::cout << "Enter velocity in meters per second: ";
        std::cin >> velocity;

    
        double get_kinetic_energy(double mass, double velocity);
        std::cout << "Kinetic Energy: " << get_kinetic_energy << " J";

        

    } while (true);

   

    return 0;
}