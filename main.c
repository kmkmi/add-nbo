#include <stdint.h>
#include <netinet/in.h>
#include "check.h"



int main(int argc, char* argv[]){

	FILE *fd1, *fd2;
	

	uint32_t* fst ;
	uint32_t* snd ;

	char buf1[4];
	char buf2[4];
	

	file_check(argc, argv);


	fd1 = fopen(argv[1], "r");
	fd2 = fopen(argv[2], "r");
	

	read_cheack(buf1, fd1);
	read_cheack(buf2, fd2);

	fst =  (uint32_t*)(buf1);
	snd = (uint32_t*)(buf2);

	printf("%d(%#x)  +   %d(%#x)   =   %d(%#x)\n", 
		ntohl(*fst) , ntohl(*fst), 
			ntohl(*snd) , ntohl(*snd), 
				ntohl(*fst)+ntohl(*snd) , ntohl(*fst)+ ntohl(*snd));

	fclose(fd2);
	fclose(fd1);

}