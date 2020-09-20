#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>




//Made by Hype Byte




//Resources
int power(int input, int exponent) {

int product = 1;

for(int i = 0; i < exponent; i++) {

product*=input;
}

return product;



}



//Parse functions

int parseInt(char * number) { //Convers strings to ints, for example "123" --> 123, "-321" --> -321

    int num = 0;

    int i = number[0] == '-' ? 1 : 0;

    for( ; i < strlen(number) ; i++) {
         
          num+= (number[i] - '0') * power(10,strlen(number) - i - 1);
    }

num = number[0] == '-' ? -num : num;

return num;

}


bool parseBool(char flag) { //converts char into boolean, for example '1' --> true, '0' --> false

bool result = flag == '1' ? true : flag == '0' ? false : false;
return result;

}

double parseDecimal(char *deci) { // converts char * into a decimal, for example "123.123123" ---> double 123.123123
    int whole = 0;
    double decimal = .0;
    int n = 0;
    double result;

    while(deci[n] != '.') {
        n++;
    }

   char * whs= malloc(n);

  for(int q = 0; q < n; q++) {
      whs[q] = deci[q];
      
  }

  whole = parseInt(whs);

 for(int z = n + 1; z < ((int)strlen(deci)); z++) {
     decimal += (double) (deci[z] - '0') * (double) (1/(double)(power(10,z-n)));
 }

    return (double)whole + decimal;

  


}


void parseIntArr(int * arr, int length, char * S_arr, char sepC) {


int pos = 0;
char * bank;


for(int i = 0; i < length; i++) {
    
    
    for(int vector = pos; vector < (int) strlen(S_arr) + 1; vector++) {
        
        if(S_arr[vector] == sepC || vector == (int) strlen(S_arr)) {
            
            bank = malloc(vector - pos);
            
            for(int n = pos, j = 0; n < vector; n++, j++) {
                
                bank[j] = S_arr[n];
                
            }
            
            arr[i] = parseInt(bank);
            free(bank);
            pos = vector + 1;
            break;
            
            
            
        }
        
        
    }    
    
    
    
    
}



    
    
    
    
}




void parseDeciArr(double * arr, int length, char * S_arr, char sepC) {


int pos = 0;
char * bank;


for(int i = 0; i < length; i++) {
    
    
    for(int vector = pos; vector < (int) strlen(S_arr) + 1; vector++) {
        
        if(S_arr[vector] == sepC || vector == (int) strlen(S_arr)) {
            
            bank = malloc(vector - pos);
            
            for(int n = pos, j = 0; n < vector; n++, j++) {
                
                bank[j] = S_arr[n];
                
            }
            arr[i] = parseDecimal("1.23");
            free(bank);
            pos = vector + 1;
            break;
            
            
            
        }
        
        
    }    
    
    
    
    
}



    
    
    
    
}






void parseStringArr(char * arr[], int length, char * S_arr, char sepC) {


int pos = 0;



for(int i = 0; i < length; i++) {
    
    
    for(int vector = pos; vector < (int) strlen(S_arr) + 1; vector++) {
        
        if(S_arr[vector] == sepC || vector == (int) strlen(S_arr)) {
            
            arr[i] = malloc(vector - pos);

            
            for(int n = pos, j = 0; n < vector; n++, j++) {
                
                arr[i][j] = S_arr[n];
                
            }
            
            pos = vector + 1;
            break;
            
            
            
        }
        
        
    }    
    
    
    
    
}



    
    
    
    
}







void parseCharArr(char * arr, int length, char * S_arr) {



    for(int i = 0; i < (int) strlen(S_arr); i+=2) {

        arr[i/2] = S_arr[i];


    }


    


      
}


void parseBoolArr(bool * arr, char * S_arr) {



    for(int i = 0; i < (int) strlen(S_arr); i+=2) {

        arr[i/2] = S_arr[i] == '1' ? true : false;


    }


    


      
}





long int parseLongInt(char number[]) { //Convers strings to ints, for example "123" --> 123, "-321" --> -321

    long int num = 0;

    int i = number[0] == '-' ? 1 : 0;

    for( ; i < strlen(number) ; i++) {
         
          num+= (long int)(number[i] - '0') * (long int)power(10,strlen(number) - i - 1);
    }

num = number[0] == '-' ? -num : num;

return num;

}







