#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	int i=0;
	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}


	strcpy(mcode, "AB CD EF");
	
	while(args[i]!=NULL){
		if(args[i]==','){
			if((args[i+1]=='%')==0 && (args[0]=='%') )
				mcode="89";
			else if(args[i+1]=='%' && (args[0]=='(' && args[i-1]==')'))
				mcode="8b";
               		else if((args[i+1]=='%') && (args[0]=='$'))
				mcode="b8";
			else if(args[i+1]=='
		}
	
	i++;
	}	
	return 1;	
}
