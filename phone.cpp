//
// Created by Lenovo on 2022/3/4.
//
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
class PersonInfo{
public:
    string name;
    vector<string> phones;
};
int phone(){
    // 1. 从文件读取数据到personinfo数组中
    ifstream fin("../data/sstream");
    ofstream fout("phone_out.txt");
    if(!fin){
        fout << "can't open file" << endl;
        return -1;
    }
    vector<PersonInfo> infos;
    string tmp,number;
    while(getline(fin,tmp)){
        PersonInfo person;
        istringstream sin(tmp);
        sin>>person.name;
        while(sin >> number){
            person.phones.push_back(number);
        }
        infos.push_back(person);
    }


    for(const auto& entry: infos){
        fout << entry.name << ": ";
        for(const auto& nums: entry.phones){
            fout << nums << " ";
        }
        fout << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
