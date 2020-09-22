
#include<stdio.h>
#include<stdlib.h>
#include "../Src/Parse/Getters.h"


int main(void) {
 
ATTACH_SCRIPT(script,"script.dtwiz");



int integer = getInteger("testingvalue",script);

double decimal = getDecimal("a_decimal",script);

char aChar = getChar("yo",script);

char superstring[6];
LoadString("superstring",script,superstring);

bool amCool = getBool("amCool?",script);

long int bigboi = getLongInteger("urmom",script);

printf("integer is %i\n",integer);
printf("decimal is %lf\n",decimal);
printf("A char is %c\n",aChar);
printf("Super string is %s\n",superstring);
amCool ? printf("Yes, im cool\n") : printf("No, im not cool :(\n");
printf("Long integer is %li\n",bigboi);

int parsedInt = parseInt("23123123");
long int parsedLongInt = parseLongInt("21213123");
bool parsedBool = parseBool('1');
char string[5];
parseCharArr(string,5,"Hiii");
double parseDecim = parseDecimal("3.14");
int twonums[2];
parseIntArr(twonums,2,"1,2",',');
double twoDecs[2];
parseDeciArr(twoDecs,2,"3.14,2.1",',');
bool twotruths[2];
parseBoolArr(twotruths,"10");
char *strings[2];
parseStringArr(strings,2,"heello,hi",',');

printf("parsed int is %i\n",parsedInt);
printf("parsed long int is %li\n",parsedLongInt);

if( parsedBool ) {
    printf("parsedBool is true also, string is %s\n",string);
}

printf("Pi is %lf\n",parseDecim);
printf("the first num from twonums is %i\n",twonums[0]);
printf("Pi again is %lf\n",twoDecs[0]);

if( twotruths[0] ) {

    printf("twotruths[0] is true! Also strings of 1 is %s\n",strings[0]);

}



















}
