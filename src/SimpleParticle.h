#pragma once
#include <random>
#include "Particle.h"
#include "ofMain.h"
#include <cstdlib>
#include <ctime>
using namespace glm;
class SimpleParticle : public Particle
{
public:

    SimpleParticle() {
        life = rand() % 1001 / 1000.0 + 1;
        velocity = vec2(rand() % 2 + 1, rand() % 2 + 1);
        maxLife = life;
        position = vec3((rand() % 1801) / 1000.0 - 0.9, (rand() % 1801) / 1000.0 - 0.9, 0); 
        particleType = rand() % 2;
    }



    float getLife() const override;

    float getMaxLife() const;
    
    int getParticleType() const;

    // Updates the particle for a specified time increment (dt).
    void update(float dt) override;

    void setLife(float life);

    void setPosition(vec3 pos);

    //void setVelocity(vec2 velo);

    vec3 getRandomizePosition() const;

private:

    float life;
    float maxLife;
    int particleType;

    vec2 velocity;

    vec3 position;
};

class SimpleParticle2 : public Particle
{
public:
    SimpleParticle2() {
        life = rand() % 1001 / 1000.0 + 1;
        velocity = vec2(rand() % 2 + 1, rand() % 2 + 1);
        maxLife = life;
        position = vec3((rand() % 1801) / 1000.0 - 0.9, (rand() % 1801) / 1000.0 - 0.9, 0); 
    }

    float getLife() const override;

    float getMaxLife() const;

    // Updates the particle for a specified time increment (dt).
    void update(float dt) override;

    void setLife(float life);

    void setPosition(vec3 pos);

    void setVelocity(vec2 velo);

    vec3 getRandomizePosition() const;
private:

    float life;
    float maxLife;

    vec2 velocity;

    vec3 position;
};