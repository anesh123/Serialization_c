#define STRLEN   16

struct A {
	int num_a; // <0 or set to 0
	char string_b[STRLEN]; // Must have vowel or add to end
	int num_c; // <0 or set to 0
	struct B *ptr_d; // 
	char string_e[STRLEN]; // Capitalize Strings
	int num_f; // >0 or set to 0
	struct C *ptr_g; // 
	int (*op0)(struct A *objA);
	unsigned char *(*op1)(struct A *objA);
};
struct B {
	char string_a[STRLEN]; // Capitalize Strings
	char string_b[STRLEN]; // Any string
	char string_c[STRLEN]; // Must have vowel or add to end
	int num_d; // <0 or set to 0
	char string_e[STRLEN]; // Must have vowel or add to end
	int num_f; // >0 or set to 0
};
struct C {
	int num_a; // <0 or set to 0
	char string_b[STRLEN]; // Must have vowel or add to end
	char string_c[STRLEN]; // Capitalize Strings
	char string_d[STRLEN]; // Any string
	char string_e[STRLEN]; // Capitalize Strings
};
