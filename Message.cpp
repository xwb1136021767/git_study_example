//
// Created by Lenovo on 2022/3/15.
//

#include "Message.h"
Message::Message(const string &s):contents(s) {

}

Message::Message(const Message &m):contents(m.contents),folders(m.folders) {
    add_to_folders(m);
}

Message& Message::operator=(const Message &m) {
    remove_from_folders();
    contents = m.contents;
    folders = m.folders;
    add_to_folders(m);
    return *this;
}

Message::~Message() {
    remove_from_folders();
}

void Message::save(Folder &f) {
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f) {
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_folders(const Message &m) {
    for(auto f: m.folders){
        f->addMsg(this);
    }
}

void Message::remove_from_folders() {
    for(auto f: folders)
        f->remMsg(this);
}

void swap(Message &m1, Message &m2) {
    using std::swap;
    for(auto f : m1.folders)
        f->remMsg(&m1);
    for(auto f : m2.folders)
        f->remMsg(&m2);
    swap(m1.contents,m2.contents);
    swap(m1.folders,m2.folders);
    for(auto f: m1.folders)
        f->addMsg(&m1);
    for(auto f: m2.folders)
        f->addMsg(&m2);
}
