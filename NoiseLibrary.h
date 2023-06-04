#pragma once

#ifdef NOISELIBRARY_EXPORTS
#define NOISELIBRARY_API __declspec(dllexport)
#else
#define NOISELIBRARY_API __declspec(dllimport)
#endif

namespace noise
{
	class Simplex
	{
	public:
		/// <summary>
		/// Evaluates the noise for given position x
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x);

		/// <summary>
		/// Evaluates the noise for given position x, y
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x, float y);

		/// <summary>
		/// Evaluates the noise for given position x, y, z
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x, float y, float z);
	};
	
	class Perlin
	{
	public:
		/// <summary>
		/// Evaluates the noise for given position x
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x);

		/// <summary>
		/// Evaluates the noise for given position x, y
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x, float y);

		/// <summary>
		/// Evaluates the noise for given position x, y, z
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x, float y, float z);
	};

	class Worley
	{
	public:
		/// <summary>
		/// Evaluates the noise for given position x
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x);

		/// <summary>
		/// Evaluates the noise for given position x, y
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x, float y);

		/// <summary>
		/// Evaluates the noise for given position x, y, z
		/// </summary>
		NOISELIBRARY_API static float evaluate(float x, float y, float z);
	};

	namespace details
	{
		static float test();
	}
}




