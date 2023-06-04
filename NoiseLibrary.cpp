
#include "pch.h";
#include "NoiseLibrary.h";

namespace noise
{
	using namespace details;

	float Simplex::evaluate(float x) { return 0; }
	float Simplex::evaluate(float x, float y) { return 0; }
	float Simplex::evaluate(float x, float y, float z) { return 0; }

	float Perlin::evaluate(float x) { return 0; }
	float Perlin::evaluate(float x, float y) { return 0; }
	float Perlin::evaluate(float x, float y, float z) { return 0; }
	
	float Worley::evaluate(float x) { return 0; }
	float Worley::evaluate(float x, float y) { return 0; }
	float Worley::evaluate(float x, float y, float z) { return 0; }
}