/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * client.c - Source file for the "thin client" you make in this lab.
 *            This program will connect to a server specified and let
 *            you issue commands.
 *
 *            This is a file you need to hand in!
 *
 * This file contains code used by labs in the CSSE 132 class.
 * When you edit this file for class, be sure to put your name(s) here!
 *
 * Edited by
 * NAMES: Keith Hanson, Nihaal George, Yuankai Wang(Kevin)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

/* Some constants for the servers and such */
const char*               TRACKER_ADDR    = "137.112.40.186"; /*"137.112.40.225" */
const unsigned short      TRACKER_PORT    = 22222;

/**
 * Connects to a server, handles interactions, then returns on disconnect.
 *
 * @param address: a string representing the server's address
 * @param port: the port to connect
 */
void
do_connect_to_server(const char* address, int port)
{
  // 1. Create the socket
  int sock;
  struct sockaddr_in srv_addr;

  if ((sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) < 0) {
    printf("Could not create socket for connection to server.");
    return;
  }

  // 2. Set the server address 
  memset(&srv_addr, 0, sizeof(srv_addr));
  srv_addr.sin_family = AF_INET;
  srv_addr.sin_addr.s_addr = inet_addr(address);
  srv_addr.sin_port = htons(port);

  // 3. Connect to the server and run the loop.
  if (connect(sock, (struct sockaddr*) &srv_addr, sizeof(srv_addr)) < 0) {
    printf("Could not connect to server.");
    return;
  }

  char send_string[512];
  char received_string[512];
  int received_bytes = 0;

  // runloop 
  for (;;) {
    // 1. read data from server (don't forget to null-terminate 
    //    the string after receiving it).
    received_bytes = recv(sock, (void *)received_string, 512, 0);

    if (received_bytes < 1) {
      printf("Disconnecting from %s ...\n", address);
      break;
    }
    received_string[received_bytes] = '\0';
    // 2. show it to the user.
    printf("%s", received_string);

    // 3. read a line of input from the user.
    fgets(send_string, 512, stdin);

    // 4. send input to the server.
    if (send(sock, (const void*) send_string, strlen(send_string), 0) != strlen(send_string)) {
      printf("Failed to send command to server.\n");
      break;
    }
  }

  // 5. disconnect
  close(sock);

  return;
}

/**
 * Copy the body of sendTrackerCommand() from your server.c file and update it
 * to return the "Random" IP address in the "randomIP".  DOCUMENT how it works
 * in this comment block.
 */
void
getRandomServer(char* randomIP, int randomIP_len)
{
  // Hints:
  // * Look at the example communication on the lab web page to see
  //   the "protocol" for communicating with the tracker.
  // * Try connecting to the tracker with "nc" to see how the
  //   communication works.
  // * Figure out what order sends/receives are in, write some comments 
  //   here describing what you'll do, then write the code to implement 
  //   what the comments say.
int sock;
  sock = socket(AF_INET, SOCK_STREAM, 0);
  if(sock<0){
        printf("Couldnt create socket");
        return;
  }
  // 2. Create an address struct (sockaddr_in)
  // USE TRACKER_ADDR and TRACKER_PORT here!
  struct sockaddr_in srv_addr;
  memset(&srv_addr, 0, sizeof(srv_addr));//size of the type
  srv_addr.sin_family = AF_INET;
  srv_addr.sin_addr.s_addr = inet_addr(TRACKER_ADDR);
  srv_addr.sin_port =htons(TRACKER_PORT);

  // 3. Connect to the tracker
  if(connect(sock, (struct sockaddr*) &srv_addr, sizeof(struct sockaddr_in))<0){
        printf("Cannot connect to server");
        return;
  }
  int len;

  len = recv(sock, randomIP, randomIP_len, 0);
  if(len<=0){
        printf("no message");
        return;
  }
  randomIP[len] = '\0';

  printf("\n %s", randomIP);

  int slen;

  slen = send(sock, "RANDOM", 7, 0);
  if(slen<0){
	printf("failed send");
	return;
  }
  // 4. Receive a prompt (and print it)
  char buf[512];
  len = recv(sock, buf, randomIP_len, 0);
  if(len<=0){
        printf("no message");
        return;
  }
  int i = 0;
  buf[len-1] = '\0';
  while(buf[i+7]!='\0'){

  randomIP[i] = buf[i+7];
  i++;
  }
  randomIP[i] = '\0';
  printf("IP Addr %s\n", randomIP);
}

/**
 * Runloop that accepts commands from the user and prints out results.
 *
 * Commands to implement:
 *
 * q - quits the program.
 *
 * c - connects to a remote server.  After connected, all lines of input get
 *     sent to the server.
 *
 * If given a command that doesn't match one in this list, print "help" to show
 * what commands are available.
 */
void
handleLocalInput()
{
  const char* instructions = "(c)onnect, (r)andom connect, or (q)uit";
  char buf[512];
  char buf2[512];

  // loop forever
  for( ;; ) {
    printf("(Local)> ");

    // read input
    fgets(buf, 512, stdin);

    // check to make sure the instruction is not a blank line
    if(strlen(buf) < 1) {
      printf("Invalid instruction.\n");
      printf(" %s\n", instructions);
      continue;
    }

    // select instruction to run
    switch(buf[0]) {
    case 'q':
    case 'x':
      return;

    case 'r': // CONNECT TO RANDOM SERVER
      printf("Querying Tracker... ");
      fflush(stdout);
      getRandomServer(buf,512);
      do_connect_to_server(buf, 20000);
      //TODO: Finish me ... very similar to 'c'
      // but instead of asking the user for a server,
      // get a random one from the tracker using getRandomServer().

      break;

    case 'c': // CONNECT
      // 1. prompt for the address and port.
      printf("\t server address? ");
      fgets(buf, 512, stdin);
      buf[strlen(buf)-1] = '\0'; //chop off newline

      printf("\t port? ");
      fgets(buf2, 512, stdin);
      buf2[strlen(buf2)-1] = '\0'; //chop off newline

      // 2. call do_connect_to_server.
      do_connect_to_server(buf, atoi(buf2));
      break;

    default:
      printf("Invalid instruction.\n");
      printf(" %s\n", instructions);
      continue;
    }
  }
}

int
main(int argc, char** argv)
{
  handleLocalInput();
  return 0;
}
