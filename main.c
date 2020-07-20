#include <stdint.h>
#include <netinet/in.h>
#include "check.h"



int main(int argc, char* argv[]){

	FILE *fd1, *fd2;
	

	uint32_t fst ;
	uint32_t snd ;

	char buf1[4];
	char buf2[4];
	

	file_check(argc, argv);


	fd1 = fopen(argv[1], "r");
	fd2 = fopen(argv[2], "r");
	

	read_check(buf1, fd1);
	read_check(buf2, fd2);

	fst = ntohl(*((uint32_t*)buf1));
	snd = ntohl(*((uint32_t*)buf2));

	printf("%d(%#x)  +   %d(%#x)   =   %d(%#x)\n", 
		fst , fst, 
			snd , snd, 
				fst + snd , fst + snd);

	fclose(fd2);
	fclose(fd1);

}