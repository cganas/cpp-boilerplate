#include <mylib/encoder.h>

int main(int argc, char** argv) {

	if (mylib::encode("Chris") == "48656C6C6F4368726973") {
		return 0;
	}

	return 1;

}
