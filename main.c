#include <stdint.h>
#include <netinet/in.h>
#include "check.h"



int main(int argc, char* argv[]){

	

	uint32_t fst ;
	uint32_t snd ;

	char buf[4];
	

	file_check(argc, argv);


	

	read_check(buf,  argv[1]);
	read_check(buf,  argv[2]);

	fst = ntohl(*((uint32_t*)buf));
	snd = ntohl(*((uint32_t*)buf));

	printf("%d(%#x)  +   %d(%#x)   =   %d(%#x)\n", 
		fst , fst, 
			snd , snd, 
				fst + snd , fst + snd);

	

}