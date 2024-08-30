#include<stidio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<pthread.h>
#include<cJSON.h>
#include <errno.h>
#define PORT 12345
#define BUFFER_SZ = 4096

int main(int argc, char **argv)
/*
  Indica como debe de usarse el programa.
*/
  if(argc != 2){
    printf("Uso: ./server  %s<port> \n", argv[0]);
    return EXIT_FAILURE;
  }

