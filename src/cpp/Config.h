#include <string>
#include <vector>
using namespace std;

namespace lje{

struct Config{
    vector<string> jvmOption={"-Dfile.encoding=UTF-8"};
    vector<string> debugJvmOption={"-agentlib:jdwp=transport=dt_socket,server=y,suspend=n,address=5005"};
    bool isDebug=false;
    int version=0;
};

}