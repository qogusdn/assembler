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
			if((args[i+1]=='%')==0 && (args[0]=='%') )//1
				mcode="89";
			else if(args[i+1]=='%' && (args[i-1]==')'))//2,3
				mcode="8b";
			else if(args[i+1]=='%' && args[0]=='0')//4
				mcode="a1";
			else if(args[i+1]=='0' && args[0]=='%')//5
				mcode="a3";
               		else if((args[i+1]=='%') && (args[0]=='$')){  //6
				if(args[i+3]=='a')
					mcode="b8";
				else if(args[i+3]=='c')
					mcode="b9";
				else if(args[i+3]=='d')
					mcode="ba";
				else if(args[i+3]=='b')
					mcode="bb";
			}
		}
	
	i++;
	}	
	return 1;	
}
