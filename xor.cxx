#include "xor.hxx"

using namespace std;

string Xor::GenerateKey(string simplestring){
	int k = simplestring.length();
	char key[k];

	srand((unsigned) time(0));
    int randomNumber;

    for (int index = 0; index < k; index++) {
        randomNumber = (rand() % 125) + 1;
		if (randomNumber <= 33 || randomNumber >=126){
			if (index == 0){
				index = 0;
			} else {
				index = index -1;
			}
		} else {
			key[index] = randomNumber;
		}
    }
	return ((string)key);
}

vector<string> Xor::enc(string raw_data)
{
	string xor_e = raw_data;
	string key = this->GenerateKey(xor_e);
	
	for (int i = 0; i < xor_e.size(); i++)
	{
		xor_e[i] = xor_e[i] ^ (char)key[i % (strlen(key.c_str()) / sizeof(char))];
	}
	vector<string> s;
	s.push_back(xor_e);
	s.push_back(key);
	return (s);
}

vector<string> Xor::enc_custom(string raw_data,string key)
{
	string xor_e = raw_data;
	
	for (int i = 0; i < xor_e.size(); i++)
	{
		xor_e[i] = xor_e[i] ^ (char)key[i % (strlen(key.c_str()) / sizeof(char))];
	}
	vector<string> s;
	s.push_back(xor_e);
	s.push_back(key);
	return (s);
}

vector<string> Xor::dec(string raw_data,string key)
{
	string xor_e = raw_data;
	
	for (int i = 0; i < xor_e.size(); i++)
	{
		xor_e[i] = xor_e[i] ^ (char)key[i % (strlen(key.c_str()) / sizeof(char))];
	}
	vector<string> s;
	s.push_back(xor_e);
	s.push_back(key);
	return (s);
}