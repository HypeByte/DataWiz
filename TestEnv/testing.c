
#include<stdio.h>
#include "../Src/Baseplate-Algorithms/ConversionsLib.h"


int main(void) {
 
int n = parseInt("123123123");
double f = parseDecimal("21.3123");
bool l = parseBool('1');
char * string[3];
parseStringArr(string,3,"aaewfawefasefaefaef,b",',');

printf("n :%i\n",n);
printf("f :%lf\n",f);

if(l) {
    printf("string :%s\n",string[0]);
}

long int BigO = parseLongInt("4294967295");
printf("%li\n",BigO);







}
