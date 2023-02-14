#include "ParticleGen.h"
#include <random>

void ParticleGen::respawn(SimpleParticle& particle) const
{
	particle.setLife(rand() % 1001 / 1000.0 + 1);
	particle.setPosition(vec3((rand() % 1801) / 1000.0 - 0.9, (rand() % 1801) / 1000.0 - 0.9, 0));

	//randomization here
	//int r = (rand() % 6) + 1;
}

//void ParticleGen::respawn2(SimpleParticle2& particle) const
//{
//	particle.setLife(rand() % 1001 / 1000.0 + 1);
//	particle.setPosition(vec3((rand() % 1801) / 1000.0 - 0.9, (rand() % 1801) / 1000.0 - 0.9, 0));
//
//	//randomization here
//	//int r = (rand() % 6) + 1;
//}