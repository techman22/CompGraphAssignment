#pragma once
#include "Particle.h"

class SimpleParticle : public Particle
{
public:

    SimpleParticle() { life = 7;  }

    float getLife() const override;

    // Updates the particle for a specified time increment (dt).
    void update(float dt) override;

    void setLife(float life);

private:

    float life;
};