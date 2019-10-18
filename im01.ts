/**
 * XinaBox IM01 extension for makecode
 *
 */

/**
* IM01 block
*/
//% color=#444444 icon="\uf0eb"
namespace IM01 {

    //%blockId=IM01_cconnect
    //%block="IM01 connect"
    //%shim=IM01::connect
    function connect(): void {
        return;
    }

    //%blockId=IM01_createFolder
    //%block="IM01 create folder %folder"
    //%shim=IM01::createFolder
    export function createFolder(folder: string): void {
        return;
    }

    //%blockId=IM01_createFiler
    //%block="IM01 create file %file"
    //%shim=IM01::createFile
    export function createFile(file: string): void {
        return;
    }

    //%blockId=IM01_readFile
    //%block="IM01 read file %file"
    //%shim=IM01::readFile
    export function readFile(file: string): void {
        return;
    }

    connect();
}