#pragma once
#include "Particle.h"
#include "SimpleParticle.h"

class ParticleGen : public ParticleGenerator<SimpleParticle>
{
	void respawn(SimpleParticle& particle) const override;
};