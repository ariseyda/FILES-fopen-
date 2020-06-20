#include<stdio.h>

//FILES
//The files are held by a pointer, so when we create a file, we have to assign it to a pointer.
//And this pointer must have a pointer of the file data type.
// FILE *p

int main(){
	
	FILE *filep = fopen("science.txt","r");
	
	//fopen takes two parameters. The first parameter is the name of the file and the second parameter is mod.
    // FILE *p = fopen("file name","MOD");
	//Filename must have the extension ".txt".
	// MODS: 
	//"w" = If there is no file in the file name we wrote, it opens a file with this name. If there is already a file with this name, it will delete it and open a new file.
	//We must be careful when using "w" because we can lose all the information in the existing file.
	//"r" = It allows us to read the file.If there is no file, the file pointer takes a null value.
	//"a" = It allows us to replace an existing file without losing its contents.
	//"w+" = It allows us to write and read.
	
	if(filep==NULL){
		printf("There is no such file.");
	}
	else
	   printf("There is such a file.");
	
	return 0;
}

