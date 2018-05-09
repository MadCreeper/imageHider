#include<bits/stdc++.h>
using namespace std;
FILE *mainfile, *addedfile,*targetFile;
char buf[100];


void read_file()
{
    
    
    while(1)
    {
		printf("Input Main File:\n");
		scanf("%s",buf);
    	mainfile = fopen(buf,"rb");
		if(!mainfile) 
		{
			printf("file does not exist!\n");
		}
		else break;
	}
    while(1)
    {
		printf("Input Added File:\n");
		scanf("%s",buf);
    	addedfile = fopen(buf,"rb");
		if(!addedfile) 
		{
			printf("file does not exist!\n");
		}
		else break;
	}
	
    printf("Input Output File:\n");
    scanf("%s",buf);
    targetFile = fopen(buf,"wb");
	
}
void file_combine()
{
	 char tail[]="----TEST----";
	 int i;
	 while ((i = fread (buf, sizeof(char), sizeof (buf), mainfile)) > 0)
            fwrite (buf, 1, i, targetFile) ;
     
     printf("\n");
     fwrite(tail,1,sizeof(tail),targetFile);
     
	 while ((i = fread (buf, sizeof(char), sizeof (buf), addedfile)) > 0)
            fwrite (buf, 1, i, targetFile) ;
            
			fclose(mainfile);
            fclose(addedfile);
            fclose(targetFile);
	 
}
void extract_file()
{
	;
}
int main(){

	int op;
	while(true)
	{
		printf("Type process type. \n1 = combine two files,\n2= extract combined file\n3 = Quit\n");
		scanf("%d",&op);
		if(op==1)
		{
			read_file();
			file_combine();
		}
		if(op==2)
		{
			extract_file();
		}
		if(op==3)
		{
			break;
		}
	}
}

