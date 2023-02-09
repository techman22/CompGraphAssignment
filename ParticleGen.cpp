#include "ParticleGen.h"

void ParticleGen::respawn(SimpleParticle& particle) const
{
	particle.setLife(1.0f);
}
