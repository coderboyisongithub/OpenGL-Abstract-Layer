#pragma once
#include <stdlib.h>
#include <vector>

typedef unsigned short int uint;
typedef unsigned int bit;

namespace Generator
{


class genQuad
{

std::vector<bit>bits;
enum channel
{
	first=1,
	second=2
};
 


void dec2bin(unsigned short int n);
bit not(uint _bit);
std::vector<bit> logic(std::vector<bit>bits); 
int operation_descision(unsigned int x);
float* flatten(float vertices[4][3]);
float* generator(float length, float width);
public:

		genQuad()
		{
		}

		float* generateWith(float length,float width);
		
		~genQuad()
		{
		}



	};
}