#include<stdio.h>
#include "../Baseplate-Algorithms/ConversionsLib.h"



int getInteger(char * ElemName, FILE * BankScript) {
rewind(BankScript);
char LineSnap[100];
char valSnap[32];
char * nameSnap = malloc( strlen(ElemName) );

    while(fgets(LineSnap,100,BankScript) != NULL ) {

        if(LineSnap[0] == 'i') {


        for(int bG = 2; bG < (int) strlen(ElemName) +  2; bG++) {

            nameSnap[bG - 2] = LineSnap[bG];
            

        }
        

        if(strcmp(nameSnap,ElemName) == 0){

      
          for(int vGet = 3 + (int) strlen(ElemName); LineSnap[vGet] != ';'; vGet++){
        
              valSnap[vGet - (3 + (int) strlen(ElemName))] = LineSnap[vGet];
                
        }
          
       


        }
        
        return parseInt(valSnap);
       break;
        




    }
}

}








double getDecimal(char * ElemName, FILE * BankScript) {
rewind(BankScript);
char LineSnap[64];
char valSnap[32];
char * nameSnap = malloc( strlen(ElemName) );

    while(fgets(LineSnap,32,BankScript) != NULL ) {

        if(LineSnap[0] == 'd') {


        for(int bG = 2; bG < (int) strlen(ElemName) +  2; bG++) {

            nameSnap[bG - 2] = LineSnap[bG];
            

        }

        if(strcmp(nameSnap,ElemName) == 0){

            for(int vGet = 3 + (int) strlen(ElemName); LineSnap[vGet] != ';'; vGet++){
                
                valSnap[vGet - (3 + (int) strlen(ElemName))] = LineSnap[vGet];

        }

        }

        return parseDecimal(valSnap);
       break;
        




    }
}

}


//Debugging in process..

char getChar(char *ElemName, FILE * BankScript) {
rewind(BankScript);
char LineSnap[64];
char * nameSnap = malloc( strlen(ElemName) );

while( fgets(LineSnap,64,BankScript) != NULL) {

    if(LineSnap[0] == 'c') {
    
      for(int bG = 2; bG < (int) strlen(ElemName) +  2; bG++) {

            nameSnap[bG - 2] = LineSnap[bG];
            

        }

        if(strcmp(nameSnap,ElemName) == 0) {

            return LineSnap[3 + strlen(ElemName)];
            break;

        }



    }

}






}


//Debug in Progress


void LoadString(char * ElemName, FILE * BankScript, char * target) {
rewind(BankScript);
char LineSnap[64];
char * nameSnap = malloc( strlen(ElemName) );

    while(fgets(LineSnap,64,BankScript) != NULL ) {
       
        if(LineSnap[0] == 's') {
           

        for(int bG = 2; bG < (int) strlen(ElemName) +  2; bG++) {

            nameSnap[bG - 2] = LineSnap[bG];
            

        }

        if(strcmp(nameSnap,ElemName) == 0){

            for(int vGet = 3 + (int) strlen(ElemName); LineSnap[vGet] != ';'; vGet++){
                
                target[vGet - (3 + (int) strlen(ElemName))] = LineSnap[vGet];
                

        }

        }

        




       break;
        




    }
}

}










