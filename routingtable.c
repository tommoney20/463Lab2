#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <netdb.h>
#include <errno.h>

#include "ne.h"
#include "router.h"
#include "endian.c"

struct route_entry routingTable[MAX_ROUTERS];
int NumRoutes;

int main(int argc, char **argv) {






	return 0;
}

void InitRoutingTbl (struct pkt_INIT_RESPONSE *InitResponse, int myID) {



	return;
}

int UpdateRoutes(struct pkt_RT_UPDATE *RecvdUpdatePacket, int costToNbr, int myID) {




	return 0;
}

void ConvertTabletoPkt(struct pkt_RT_UPDATE *UpdatePacketToSend, int myID) {



	return;
}

void PrintRoutes (FILE* Logfile, int myID) {


	return;
}

void UninstallRoutesOnNbrDeath(int DeadNbr) {




	return;
}






