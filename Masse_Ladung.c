#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

struct molecular_particle {
	char name[10];
	f32 Masse;
	f32 Ladung;
};

int function() {

	char e;
	printf("Welches Atomteilchen würden Sie gerne aufrufen\n");
	printf("\nFür Proton: \tp\nFür Neutron: \tn\nFür Elektron: \te\nIhre Eingabe: \t");

	scanf(" %c", &e);
	printf("\n");

	struct molecular_particle neutron = {"neutron", 1.0087, 0};
	struct molecular_particle proton = {"proton", 1.0073, 1.6};
	struct molecular_particle electron = {"electron",0.00055, 1.6 };


	if(e == 'n') {
		printf("Ihr atomares Teilchen: %s\n\nDie Masse in u: %.4f\nDie Ladung in C: %.4f\n",&neutron.name, neutron.Masse, neutron.Ladung);
	}
	if(e == 'p') {
		printf("Ihr atomares Teilchen: %s\n\nDie Masse in u: %.4f\nDie Ladung in C: +%.4f*10^-19\n",&proton.name, proton.Masse, proton.Ladung);
	}
	if(e == 'e') {
		printf("Ihr atomares Teilchen: %s\n\nDie Masse in u: %.5f\nDie Ladung in C: -%.4f*10^-19\n",&electron.name, electron.Masse, electron.Ladung);
	}
//	else 
//		break;



	return 0;
}

f64 converter() {
	
	u32 input_number, converted_number;
	u8 a;

	printf("Sie befinden sich in dem Converter, möchten Sie von u in kg umrechen (1), oder von kg in u (2)\n");
	scanf("%hhd", &a);

	if (a == '1') {
		f32 zz;
		printf("Geben Sie die Masse in u ein: \t");
		scanf("%e", &zz);
	}

	return converted_number;
}

int main() {
	
	u8 input;

	printf("Welche Funktion würden Sie gerne aufrufen?\nProton/Elektron/Neutron = 1:\nIhre Eingabe: \t");
	scanf("%hhd", &input);
	
	if (input == 1) {
	function();
	}
	
	return 0;
}
