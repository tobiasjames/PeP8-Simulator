#include <iostream>
#include <bitset>
using namespace std;

struct CPU {
	std::bitset <16> A 0;
	std::bitset <16> X 0;
	std::bitset <16> PC 0;
	std::bitset <16> SP 0;
	std::bitset <24> IR 0;
	std::bitset <2> N 0;
	std::bitset <2> Z 0;
	std::bitset <2> V 0;
	std::bitset <2> C 0;
};

union operand {
	unsigned int op : 8;
	unsigned int spec : 8;
};

unsigned int Mem[100];

int main() {
	//Von Neumann Execution Cycle
	//Fetch
	//Decode
	//Increment
	//Execute
	//Repeat

	CPU cpu;
	//while (cpu.IR != 0) {


		//cpu.PC++;
	//}

	cpu.A = 0xaaaa;
	cout << cpu.A;
	return 0;
}