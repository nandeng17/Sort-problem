#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;


int main(){
	//read in txt file
	ifstream infile;
	infile.open("input.txt");

	//map<>
	map<double, string> result;
	map<string,double> result2;
	vector<double>num;
	vector<string>name;

	vector<string>data;
	while (!infile.eof()){
		string temp;
		infile >> temp;
		data.push_back(temp);
	}
	data.pop_back();
	
	for (int i = 0; i < data.size() / 2  ; i++)
	{
		
		string key = data[i + data.size() / 2];
		double value = atof((data[i]).c_str());
		num.push_back(value);
		name.push_back(key);
		result[value] = key;
		result2[key] = value;
	}
	
	sort(num.begin(), num.end());
	sort(name.begin(), name.end());
	for (int i = 0; i < num.size(); i++){
		//cout << num[i];
		cout <<num[i]<<"    "<<result[num[i]]<< endl;
	
	}

	cout << "#########################" << endl;

	for (int i = 0; i < name.size(); i++){
		cout<< result2[name[i]] <<"   "<<name[i]<<endl;


	}

	return 0;





}