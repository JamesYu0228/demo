#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    const string &sName = "JamesYu";
    const string &sProfile = "How do you do, I\'am ";
    ostringstream ossOut;

    ossOut << sProfile << sName << ". Nice to meet you!";
    std::cout << ossOut.str() << endl;

    return 0;
}
