#include<bits/stdc++.h>
using namespace std;
FILE *mainfile, *addedfile,*targetImage;
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
    targetImage = fopen(buf,"wb");
	
}
void file_combine()
{
	 char tail[]="\n----TEST----\n";
	 int i;
	 while ((i = fread (buf, sizeof(char), sizeof (buf), mainfile)) > 0)
            fwrite (buf, 1, i, targetImage) ;
     
     printf("\n");
    // fwrite(tail,1,sizeof(tail),targetImage);
     
	 while ((i = fread (buf, sizeof(char), sizeof (buf), addedfile)) > 0)
            fwrite (buf, 1, i, targetImage) ;
            
			fclose(mainfile);
            fclose(addedfile);
            fclose(mainfile);
	 
}
void extract_file()
{
	;
}
int main(){

	int op;
//	while(true)
	{
//		printf("Type process type. \n1 = combine two files,\n2=extract combined file\n");
	//	scanf("%d",&op);
	//	if(op==1)
		{
			read_file();
			file_combine();
		}
	//	if(op==2)
		{
	//		extract_file();
		}
	}
}

