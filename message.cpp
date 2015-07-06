#include <iostream>
#include <sys/ipc.h>
#include <sys/msg.h>


int main()
{
    int msgget(key_t key, int msgflg);
    key_t key; // key to be passed to mssget() 
    int msgflg; // msgflg to be passed to mssget
    int msqid;

    msqid = msgget(ftok("/tmp", key), (IPC_CREAT | IPC_EXCL | 0400));
    // std::cout << IPC_CREAT << std::endl;
    //std::cout << (IPC_CREAT | IPC_EXCL | 0400 ) << std::endl;
    // std::cout << ftok("/tmp", key) << std::endl;
    std::cout << sizeof(char) << std::endl;

    
    return 0;
}