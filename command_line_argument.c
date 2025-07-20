#include <stdio.h>
#include <string.h>

// print how many letter/words typing (separated by space) including ./cla(process name)
int main(int argc, char *argv[]){
	printf("%d\n", argc);	

	return 0;
}


//-----------------------------------------------------------------------------------

int main(int argc, char *argv[]){
	printf("%s\n", argv[3]); //3rd element will be printed (excluding./cla)

	return 0;
}


//--------------------------------------------------------------------------------
int main(int argc, char *argv[]){
	for(int i=1; i<argc; i++){
		printf("%s\n", argv[i]);
	}

	return 0;
}

