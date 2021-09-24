#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<string> file2;
vector<string> encrypt2;


class vector2{
int i;
string dec(string str){
	for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2;
        return str;
}
	public:
bool center2(){
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
		file2.push_back(line);
	}
		for (auto it = file2.begin(); it != file2.end(); it++)
        encrypt2.push_back(dec(*it));
    fname.pop_back();
    ofstream type(fname.c_str());
    for (auto jt = encrypt2.begin(); jt != encrypt2.end(); jt++)
    	type <<*jt<<endl;
        return true;
    
    
	}
}	
};
