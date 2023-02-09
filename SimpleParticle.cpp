#include "SimpleParticle.h"

float SimpleParticle::getLife() const
{
    return life;
}

void SimpleParticle::update(float dt)
{
    life -= dt;
}

void SimpleParticle::setLife(float life)
{
    this->life = life;
}
