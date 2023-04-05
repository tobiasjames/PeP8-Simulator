#pragma once
#include <bitset>
#include "instruction_table.h"

struct CPU {
	std::bitset <16> A; //Accumulator register
	std::bitset <16> X; //Index register
	union pc {
		unsigned int a : 16;
		std::bitset <16> b;
	} PC = { 0 }; //Program Counter register
	std::bitset <16> SP = { 0xfff8 };
	union ir {
		std::bitset<8> instruction;
		instruction1 inst7_1;
		instruction2 inst5_3;
		instruction3 inst4_1_3;
	} IR = { 0 }; //Instruction Register
};

int fetch(CPU cpu) {
	return cpu.PC.a;
};

bitset<16> increment(CPU cpu) {
	cpu.PC.a += 1;
	return cpu.PC.a;
};

void execute(CPU cpu) {
	/*this method should extract the functions from the instructon_table.h file
	I should only pull the operand, addressMode, r_bit and address in this method*/

}
