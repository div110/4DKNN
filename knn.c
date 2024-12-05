#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

if(argc!=6){
printf("Input 5 parameters!\n");
return 1;
}



// Nested For's for point generation
int objects[5][5];
for(int i=0;i<5;i++){
for(int j=0;j<5;j++){
objects[i][j]=i*j+j;
}
printf("[%d,%d,%d,%d,%d]\n", objects[i][0],objects[i][1],objects[i][2],objects[i][3],objects[i][4]);
}
//^^Can be replaced by a file reading code^^

int point[5];


printf("%d\n", argc);
printf("%s\n", argv[1]);

printf("\n\n\n");

for(int i=0;i<5;i++){
point[i]=atoi(argv[i+1]);
printf("%d\n",point[i]);
}


return 0;
}


//FILE *filepointer
//filepointer = fopen("data", "r");
//char current_object[50];
//int point[5];
//fgets(current_object,50,filepointer);
//int liner=0;
//for(int i=0;i<50;i++){
//	if(current_object[i]!=","){}
//	else{point[liner]=current_object[0:i];liner++;}
