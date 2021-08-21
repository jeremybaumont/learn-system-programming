#include <stdio.h>
#include <winsock2.h>
#pragman comment(lib, "ws2_32.lib")

int main(){
    WSADATA d;

    if (WSAStartup(MAKEWORD(2, 2), &d)) {
        printf("Failed to initialise.\n");
        return -1;
    }
    
    WSACleanup();
    printf("Ok\n");
    return 0;
}

