#include "SimpleParticle.h"
#include <iostream>

using namespace std;
float SimpleParticle::getLife() const
{
    return life;
}

float SimpleParticle::getMaxLife() const
{
    return maxLife;
}

int SimpleParticle::getParticleType() const
{
    return particleType;
}

void SimpleParticle::update(float dt)
{
    life -= dt * 0.5;
    position = vec3(position.x * (velocity.x / 30 + 1), position.y * (velocity.y / 30 + 1), 0);
    cout << "position is:" << position << endl;
    //update position, velocity, etc...
}

void SimpleParticle::setLife(float life)
{
    this->life = life;
    this->maxLife = life;
}

void SimpleParticle::setPosition(vec3 pos) 
{
    this->position = pos;
}

vec3 SimpleParticle::getRandomizePosition() const
{
    return position;
}

float SimpleParticle2::getLife() const
{
    return life;
}

float SimpleParticle2::getMaxLife() const
{
    return maxLife;
}

void SimpleParticle2::update(float dt)
{
    life -= dt * 0.5;
    position = vec3(position.x * (velocity.x / 30 + 1), position.y, 0);
    cout << "position is:" << position << endl;
}

void SimpleParticle2::setLife(float life)
{
    this->life = life;
    this->maxLife = life;
}

void SimpleParticle2::setPosition(vec3 pos)
{
    this->position = pos;
}

void SimpleParticle2::setVelocity(vec2 velo)
{
    this->velocity = velo;
}

vec3 SimpleParticle2::getRandomizePosition() const
{
    return position;
}
