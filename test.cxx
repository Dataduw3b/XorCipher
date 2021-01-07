#include "xor.hxx"

using namespace std;

int main(){
    Xor o;
    string simple = "Hi World";
    string mycustomkey = "MYSIMPLEKEY";
    vector<string> cipher = o.enc(simple); 
    vector<string> dec = o.dec(cipher[0],cipher[1]);
    vector<string> encc = o.enc_custom(simple,mycustomkey);
    
    cout << "Xor : " << cipher[0] << endl;
    cout << "Key : " << cipher[1] << endl;
    cout << "Plain Text : " << dec[0] << endl;
    cout << "Xor with Custom Key : " << encc[0] << endl;
    cout << "Key Custom : " << encc[1] << endl;

    return 0;
}