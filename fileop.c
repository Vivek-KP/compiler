#include<stdio.h>
void main(){
char str[100] ,ch;
FILE *file;

file=fopen("sample.txt","w");
fgets(str,sizeof(str),stdin);
fprintf(file,"%s",str);
fclose(file);
file=fopen("sample.txt","r");
while((ch=fgetc(file))!=EOF){
 printf("%c",ch);
}
fclose(file);
}
