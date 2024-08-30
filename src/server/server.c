#include<stidio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<pthread.h>
#include<cJSON.h>

#define PORT 12345

typedef struct{
  int socket;
  char username[9];
}

