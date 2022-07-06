//
// Created by Lenovo on 2022/3/14.
//

#include "QueryResult.h"



QueryResult::QueryResult(string word, shared_ptr<set<int>> lineNums, shared_ptr<vector<string>> text_ptr) {
    this->word = word;
    this->lineNums = lineNums;
    this->text_ptr = text_ptr;
}

ostream &QueryResult::print(ostream &os, const QueryResult &rs) {
    os << rs.word  <<"occurs "<< rs.lineNums->size() << "times" << endl;
    for(auto num : *rs.lineNums){
        os << "(" << num << ") " << *(rs.text_ptr->begin()+num-1) << endl;
    }
    return os;
}
