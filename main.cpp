#include<bits/stdc++.h>
using namespace std;

void read_file()
{
    FILE *image1, *file1,*targetImage;
    char buf[100];

    
    while(1)
    {
		printf("Input Original Image:\n");
		scanf("%s",buf);
    	image1 = fopen(buf,"rb");
		if(!image1) 
		{
			printf("file does not exist!\n");
		}
		else break;
	}
    while(1)
    {
		printf("Input Wanted File:\n");
		scanf("%s",buf);
    	file1 = fopen(buf,"rb");
		if(!file1) 
		{
			printf("file does not exist!\n");
		}
		else break;
	}
	
    printf("Input  Image:\n");
    scanf("%s",buf);
    targetImage = fopen(buf,"wb");
	
}
void process()
{
	//2018.5.8
}
int main(){

	read_file();
	

}
