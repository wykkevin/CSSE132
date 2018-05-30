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
 * NAMES: Yuankai Wang, Yuqi Zhou
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

/**
 * Connects to a server, handles interactions, then returns on disconnect.
 *
 * @param address: a string representing the server's address
 * @param port: the port to connect
 */
void
do_connect_to_server(const char* address, int port)
{
  // DONE: create a new socket using the address in the argument "address".
  //       If any part of the connection fails, return from this function.
  // 1. Create the socket

  int sock;

  if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
    printf("Could not create socket for connection to server.");
    return;
  }

  // 2. Set the server address 
  //    Hint: convert the argument from string to address using "inet_addr(address)"

  struct sockaddr_in serv_addr;
  memset(&serv_addr, 0, sizeof(struct sockaddr_in));
  serv_addr.sin_family = AF_INET;
  serv_addr.sin_addr.s_addr = inet_addr(address);
  serv_addr.sin_port = htons(port);

  // 3. Connect to the server and run the loop.
  if (connect(sock, (struct sockaddr*) &serv_addr, sizeof(struct sockaddr_in)) < 0) {
    printf("Could not connect to server.");
    return;
  }


  char send_string[512];
  char received_string[512];
  int received_bytes = 0;

  // runloop 
  for (;;)

/**
 * Connects to a server, handles interactions, then returns on disconnect.
 *
 * @param address: a string representing the server's address
 * @param port: the port to connect
 */
 {
    // DONE: implment these steps.
    // Hint: if you receive zero bytes from the server, it dropped your connection.
    // 1. read data from server (don't forget to null-terminate 
    //    the string after receiving it).
    // 2. show it to the user.
    // 3. read a line of input from the user.
    // 4. send input to the server.
    received_bytes = recv(sock, received_string, 511, 0);
    received_string[received_bytes] = '\0';
    printf("%s", received_string);
    fgets(send_string, 511, stdin);
    send_string[strlen(send_string)] = '\0';
    send(sock, send_string, strlen(send_string), 0);
  }

  // 5. disconnect
  close(sock);
  return;
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
  const char* instructions = "(c)onnect or (q)uit";
  char buf[512];
  char buf2[512];
  int port;

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

    case 'c': // CONNECT
      // DONE: implement this
      // 1. prompt for the address and port.
      // 2. call do_connect_to_server.
	printf("address? ");
	fgets(buf, 512, stdin);
	printf("port? ");
	fgets(buf2, 512, stdin);
	port = atoi(buf2);
      do_connect_to_server(buf, port);

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
  // Uncomment the next line when you've implemented this function.
  handleLocalInput();

  return 0;
}
