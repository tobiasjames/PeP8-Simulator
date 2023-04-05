#pragma once
#include <bitset>
using namespace std;

struct instruction1 {
	std::bitset<7> operand;
	std::bitset<1> r_bit;
};

struct instruction2 {
	std::bitset<5> operand;
	std::bitset<3> addressMode;
};

struct instruction3 {
	std::bitset<4> operand;
	std::bitset<1> r_bit;
	std::bitset<3> addressMode;
};

enum addressMode {
	d = 0b000, 
	i = 0b001,
};

enum r_bit {
	r = 0b0,
	R = 0b1
};

enum INSTRUCTIONS1 {
	Stop = 0b00000000,
	Invert = 0b001100,
	Asl = 0b0001110,
	Asr = 0b0001110,
	Rol = 0b0010000,
	Ror = 0b0010001,
	Deci = 0b00110,
	Deco = 0b00111,
	Chari = 0b01001,
	Charo = 0b01010,
	Add = 0b0111,
	Sub = 0b1000,
	And = 0b1001,
	Or = 0b1010,
	LoadR = 0b1100,
	LoadByte = 0b1101,
	StoreR = 0b1110,
	StoreByte = 0b1111

};

/*enum INSTRUCTIONS {
	stop = 0, //0000 0000
	invertr = 24, //0001 1000
	invertR = 25, //0001 1001
	aslr = 28, //0001 1100
	aslR = 29, //0001 1101
	asrr = 30, //0001 1110
	asrR = 31, //0001 1111
	rolr = 32, //0010 0000
	rolR = 33, //0010 0001
	rorr = 34, //0010 0010
	rorR = 35, //0010 0011
	decid = 49, //0011 0001
	decoi = 56, //0011 1000
	decod = 57, //0011 1001
	charid = 73, //0100 1001
	charoi = 80, //0101 0000
	charod = 81, //0101 0001
	addrd = 112, //0111 0000
	addri = 113, //0111 0001
	addRd = 120, //0111 1000
	addRi = 121, //0111 1001
	subrd = 128, //1000 0000
	subri = 129, //1000 0001
	subRd = 136, //1000 1000
	subRi = 137, //1000 1001
	andrd = 144, //1001 0000
	andri = 145, //1001 0001
	andRd = 152, //1001 1000
	andRi = 153, //1001 1001
	orrd = 160, //1010 0000
	orri = 161, //1010 0001
	orRd = 168, //1010 1000
	orRi = 169, //1010 1001
	loadrrd = 192, //1100 0000
	loadrri = 193, //1100 0001
	loadrRd = 200, //1100 1000
	loadrRi = 201, //1100 1001
	loadbrd = 208,  //1101 0000
	loadbri = 209, //1101 0001
	loadbRd = 216, //1101 1000
	loadbRi = 217, //1101 1001
	storerrd = 224, //1110 0000
	storerRd = 232, //1110 1000
	storebrd = 240, //1111 0000
	storebRd = 248, //1111 1000
};

*/

