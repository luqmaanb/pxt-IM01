#include "im01.h"

using namespace pxt;
using namespace IM01;

ManagedString str2mstr(String i);

xIM01::xIM01(int mosi, int miso, int sclk, int cs)
{
}

void xIM01::createFolder(String folder)
{
    ManagedString str = str2mstr(folder);
    mkdir(str.toCharArray(), 0777);
}

void xIM01::createFile(String file)
{
    ManagedString str = str2mstr(file);
    FILE *fp = fopen(str.toCharArray(), "w");
    fclose(fp);
    //free(fp);
}

void xIM01::connect()
{
    static SDFileSystem *sd = new SDFileSystem(P0_21, P0_22, P0_23, P0_16, "sd");
}

ManagedString str2mstr(String i)
{
    ManagedString str = "/sd/" + MSTR(i);
    return str;
}

namespace IM01 {    
    static xIM01 *im01ptr = new xIM01(P0_21, P0_22, P0_23, P0_16);
    
    //%
    void connect()
    {
        im01ptr->connect();
    }

    //%
    void createFolder(String folder)
    {
        im01ptr->createFolder(folder);
    }

    //%
    void createFile(String file)
    {
        im01ptr->createFile(file);
    }

    //%
    void readFile(String File)
    {
        
    }
}