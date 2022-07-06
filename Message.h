//
// Created by Lenovo on 2022/3/15.
//

#ifndef C__PRIMER_STUDY_MESSAGE_H
#define C__PRIMER_STUDY_MESSAGE_H

#include <iostream>
#include "Folder.h"
using namespace std;
class Message {
    friend class Folder;
    friend void swap(Message &m1,Message &m2);
public:
    Message(const string& s="");
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    void save(Folder&);
    void remove(Folder&);

private:
    string contents;
    std::set<Folder*> folders;
    void add_to_folders(const Message& m);
    void remove_from_folders();
};
void swap(Message &m1,Message &m2);

#endif //C__PRIMER_STUDY_MESSAGE_H
