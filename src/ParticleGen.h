#pragma once
#include "Particle.h"
#include "SimpleParticle.h"

class ParticleGen : public ParticleGenerator<SimpleParticle>
{
	void respawn(SimpleParticle& particle) const override;
};

//class ParticleGen : public ParticleGenerator<SimpleParticle2>
//{
//	void respawn2(SimpleParticle2& particle) const override;
//};