#pragma once
#include <bitset>
struct CPU {
	std::bitset <16> A;
	std::bitset <16> X;
	//std::bitset <16> PC;

	//union REG PC;
	std::bitset <16> SP;
	std::bitset <8> IR;
};
