//This is a simple particle simulation in C. It simulates particles moving in a 2D space with basic physics.

#include <stdio.h>
#include "particle.h"

int main(){
    struct Particle p;
    p.x = 1.f; //initial x position
    p.y = 1.f; //initial y position
    printf("Initial position: (%f, %f)\n", p.x, p.y);


    return 0;
}
