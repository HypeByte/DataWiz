#include<stdio.h>
#include"../Baseplate-Algorithms/ConversionsLib.h"

int getInteger(char * ElemName, FILE * BankScript);
double getDecimal(char * ElemName, FILE * BankScript);
void LoadString(char * ElemName, FILE * BankScript, char * target);
char getChar(char *ElemName, FILE * BankScript);
char getBool(char *ElemName, FILE * BankScript);
long int getLongInteger(char * ElemName, FILE * BankScript);
