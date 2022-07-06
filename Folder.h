//
// Created by Lenovo on 2022/3/15.
//

#ifndef C__PRIMER_STUDY_FOLDER_H
#define C__PRIMER_STUDY_FOLDER_H


#include "Message.h"

class Folder {
public:
    void addMsg(Message* m);
    void remMsg(Message* m);
private:
    set<Message*> msgs;
};




#endif //C__PRIMER_STUDY_FOLDER_H
