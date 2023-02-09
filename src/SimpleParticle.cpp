#include "SimpleParticle.h"
#include <iostream>

using namespace std;
float SimpleParticle::getLife() const
{
    return life;
}

void SimpleParticle::update(float dt)
{
    life -= dt * 0.5;
    cout << "life is:" << life << endl;
    //update position, velocity, etc...
}

void SimpleParticle::setLife(float life)
{
    this->life = life;
}
