#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#define ATTACH_SCRIPT(variable_name,file_name)  FILE * variable_name = fopen( file_name ,"r+");

int parseInt(char number[]);
int power(int input, int exponent);
bool parseBool(char flag);
double parseDecimal(char *deci);
void parseIntArr(int * arr, int length, char * S_arr, char sepC);
void parseDeciArr(double * arr, int length, char * S_arr, char sepC);
void parseStringArr(char * arr[], int length, char * S_arr, char sepC);
void parseCharArr(char * arr, int length, char * S_arr);
void parseBoolArr(bool * arr, char * S_arr);
