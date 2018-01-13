#include <iostream>

#include <mylib/encoder.h>

using namespace std;

int main(int argc, char** argv) {

	if (argc > 1) {

        string input = string(argv[1]);
        cout << mylib::encode(input) << endl;

    } else {

        cerr << "Need one argument." << endl;
        return 1;

    }

    return 0;

}
