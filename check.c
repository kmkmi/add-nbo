#include "check.h"


void file_check(int argc, char* argv[]){

    if ( argc != 3 ) {
		printf("Usage : %s <filename1> <filename2> \n", argv[0]);
            exit(1);

	}

	
	if(access(argv[1], R_OK) == -1)
        {
            printf("File2 does not exist or cannot be read.");

            exit(1);
        }
	if(access(argv[2], R_OK) == -1)
        {
            printf("File1 does not exist or cannot be read.");

            exit(1);

        }
}


void read_check(char* buf , char* fname){

	FILE *fd;


    fd = fopen(fname, "r");


	if(fread(buf ,1,  4,  fd) <4)
		{
			
			printf("File1 reading failure");
			exit(1);			
		}

    fclose(fd);


}
