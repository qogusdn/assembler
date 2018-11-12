#include "myas.h"

int is_valid(char *op, char *args)
{
	int i=0;
	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");
	
	while(args[i]!=NULL){
		if(arg[i]==','){
			if(args[i+1]=='$')
				return 0;
			else if(args[i+1]=='0')
				if(args[0]=='0' || args[0]=='(')
				return 0;
			else if(args[i+1]=='(')
				if(args[0]=='(' || args[0]=='0')
				return 0;
	}
	i++;
	}
	
	return 1;
}
