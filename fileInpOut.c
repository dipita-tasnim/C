#include <stdio.h>
#include <string.h>

//write in a new file
int main(){
	FILE *fp;
	fp = fopen("anotherFile.txt", "w");
	
	fprintf(fp, "first line\n");

	
	return 0;
}


//-------------------------------------------------------------------------------

//Append (add content) in a new file

int main(){
	FILE *fp;
	fp = fopen("anotherFile.txt", "a");
	
	fprintf(fp, "second line\n");
	
	return 0;
}


//--------------------------------------------------------------------------------

//Read from a new file

int main(){
	FILE *fp;
	fp = fopen("anotherFile.txt", "r");
	
	char store[100];
	
	fgets(store, 100, fp); //first line of the file will be printed
	printf("%s", store);
	
	fgets(store, 100, fp); //second line of the file will be printed
	printf("%s", store);
	
	return 0;
}



