#include <iostream>
#include <cfpm-main.hxx>

using std::cerr;
using std::cout;
using std::endl;

int cfpmMain(int argc, char const *argv[]) {
    cerr << "CFPM version " << CFPM_VERSION << endl;
    return 0;
}
