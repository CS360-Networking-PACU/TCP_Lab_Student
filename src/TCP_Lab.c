//***************************************************************************
// File name:		TCP_Lab.c
// Author:			chadd williams
// Date:				September 10, 2018
// Class:				CS 360
// Assignment:	In Class TCP Lab
// Purpose:			Practice using TCP sockets
//***************************************************************************

#define _GNU_SOURCE

#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



// wireshark
// tcp.dstport == 36018 || tcp.srcport == 36018

// ncat -l 36018 --keep-open --exec "/bin/cat" # tcp
// ncat -l 36018 --keep-open --udp --exec "/bin/cat" --idle-timeout=100s
// /usr/sbin/ss -l -t -4 -p

// as root:
// ~/enableUpdates.sh
// zypper in ncat
// ~/disableUpdates.sh

// bin/TCP_Lab 127.0.0.1 36018

//  nc -l 36018
//  nc 127.0.0.1 36018


/****************************************************************************
 Function:		main
 
 Description:	send a 4 byte integer to an echo server and display the returned
							4 byte int
 
 Parameters:	int argc: number of command line arguments
							char **argv: the command line arguments
 
 Returned:		EXIT_SUCCESS
****************************************************************************/
int main(int argc, char **argv)
{

	int socketfd;
	int value = 42;
	int result;
	char *pBuf = (char*) &value;
	struct sockaddr_in sAddr;
		
		
	// use inet_pton() to transform argv[2],
	// a text representation of an IPv4 address,
	// to a network-order, binary representation
	// stored in sAddr.sin_addr
		
	// be sure to the family and port in 
	// sAddr.
			
	
		
	// create an AF_INET Stream socket.
			
			
	// make sure the socket was created.
	// otherwise, exit with an error message.
		
		
	// display the integer in value
	printf("%d\n\n", value);
	
	
	// convert value to network-order


	// display the integer in value, now in network order
	printf("Network Byte Order (send): %x\n\n", value);

	// create a connection


	//send

	// reset the value to 0
	value = 0;
		
		
	// recv a 4 byte int from the socket.


	// make sure all 4 bytes were read
	// otherwise, display an error message


	// display the integer in value, now in network order
	printf("Network Byte Order (receive): %x\n\n", value);


	// convert value to host-order
		
		
  // display the integer in value
	printf("%d\n\n", value);
	
	
	// close the socket.

		
	return EXIT_SUCCESS;
}
