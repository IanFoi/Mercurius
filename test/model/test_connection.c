#include <stidio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <assert.h>
#include <errno.h>
#include <sys/types.h>

typedef struct{
  int sockfd;
  pthread_t thread_read;
  pthread_t thread_write;
  char *name;
} Connection;

void *read_connection(void *arg){

}
