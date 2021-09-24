#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

vector<string> file;
vector<string> encrypt;

int i;
class vector1{

string enc(string str){
	 for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2;
        return str;
}
	public:
bool center(){
	string fname;
	cin >>  fname;
	ifstream files(fname.c_str());
	if(!files) {
		cout<<"\e[31m [-] Sory I can't fined your file ... \e[0m"<<endl;
	return false;
	}
	else{
		string line;
		while(getline(files,line)){
		file.push_back(line);
	}
		for (auto it = file.begin(); it != file.end(); it++)
        encrypt.push_back(enc(*it));
    fname = fname+"n";
    ofstream type(fname.c_str());
    for (auto jt = encrypt.begin(); jt != encrypt.end(); jt++)
    	type <<*jt<<endl;
        return true;
    
    
	}
}	
};
