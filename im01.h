#ifndef IM01_h
#define IM01_h

#include "pxt.h"
#include "SDFileSystem.h"
using namespace pxt;

namespace IM01 {
    class xIM01
    {
        public:
        xIM01(int mosi, int miso, int sclk, int cs);
        void connect(void);
        void createFolder(String folder);
        void createFile(String file);
        void readFile(String file);
        
        SDFileSystem *sdptr;

        private:
        
        // char buf[50];
        // struct stat buffer; 
        // FILE *fp;
        // DIR *dir;
        // struct dirent *ent;
    };
}
#endif