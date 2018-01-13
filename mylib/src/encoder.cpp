#include <mylib/encoder.h>

#include <sstream>

#include <boost/algorithm/hex.hpp>

#include "localheader.h"

using namespace std;

string mylib::encode(const string s) {

    stringstream stream;
    stream << MESSAGE_PREFIX_STRING << s;

    ostringstream out;
    boost::algorithm::hex(stream.str(), ostream_iterator<char>(out));

    return out.str();

}