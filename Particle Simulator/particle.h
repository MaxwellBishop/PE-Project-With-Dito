//Structure representing a partcle
//Holds the 
//position, velocity, and other propertiesof a particle

#ifndef PARTICLE_H
#define PARTICLE_H

struct Particle {
    float x;
    float y;
    float xSpeed, ySpeed;
    float pos; //position (x,y)
    float d; //displacement (change in position)
    float t; //time
    float v; //velocity (d/t)
};




#endif // PARTICLE_H