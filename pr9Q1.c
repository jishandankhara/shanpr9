#include<stdio.h>
void main(){
FILE *p1 , *p2;
int i;
p1 = fopen("even_num","w");
if(p1 != NULL){
printf("File Created even_num\n");
}else{
printf("File is not created\n");
}
	
for(i=50;i<71;i++){
if(i%2==0){
fprintf(p1,"%d\n",i);
}}
p2 = fopen("odd.txt","w");
if(p2 != NULL){
printf("File Created odd_num\n");
}else{
printf("File is not created\n");
}
for(i = 50; i <= 70; i++){
if(i % 2 != 0){
fprintf(p2,"%d\n",i);
}
}
}
