//
// Created by Lenovo on 2022/3/15.
//

#include "Folder.h"

void Folder::remMsg(Message *m) {
    msgs.erase(m);
}

void Folder::addMsg(Message *m) {
    msgs.insert(m);
}
