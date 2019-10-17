#ifndef IM01_h
#define IM01_h

#include "pxt.h"
#include "SDFileSystem.h"
using namespace pxt;

namespace IM01 {
    class xIM01
    {
        public:
        xIM01();
        void createFolder(String folder);
        void createFile(String file);
        SDFileSystem *sd;

        private:
        char buf[50];
        struct stat buffer; 
        FILE *fp;
        DIR *dir;
        struct dirent *ent;
    };
}
#endif