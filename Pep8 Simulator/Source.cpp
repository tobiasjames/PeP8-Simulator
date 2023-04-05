#include <iostream>
#include <bitset>
#include <string>
#include "instruction_table.h"
#include "cpu.h"

using namespace std;

std::bitset<0xffff> mem;





int main() {
	//Von Neumann Execution Cycle
	//Fetch
	//Decode
	//Increment
	//Execute
	//Repeat

	CPU cpu;
	
	bitset<8> byte = aslR;
	for (int i = 0; i < 8; i++) {
		if (byte[i] == 1) {
			cpu.IR.instruction[i].flip();
		}
	}
	
	/*do {
		mem[fetch(cpu)];

		increment(cpu);
	} while (cpu.IR.instruction.to_ulong() != 0);
	*/

	bitset<8> x = { 0b10001010 };
	
	cout << x;
	//cpu.IR.inst7_1 = {invertR >> 1, invertR};
	//cout << x.operand << "\n" << x.r_bit;

	/*if (cpu.IR.inst7_1.operand == invertr >> 1) {
		cout << "invertr";
	} */
	return 0;
}