#include <iostream>
#include <vector>
#include <sstream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Xor{
    public:
        vector<string> enc(string raw_data);
        vector<string> enc_custom(string raw_data,string key);
        vector<string> dec(string raw_data,string key);
    private:
        string GenerateKey(string simplestring);
        
};