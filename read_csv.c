#include "header_csv.h"
#include<stdio.h>
error_t readcsvfile(char *filename)
{
    FILE *fileptr=fopen(filename,"r");
    if(fileptr==NULL)
    {
        return ERROR_NULL_PTR;
    }
    char buffer[100];
    char col_name[3][50] ={"Name","Email-ID","Github-Link"};
    int row_count=0;
    while(fgets(buffer,sizeof(buffer),fileptr))
    {
        char *token;
        int i=0;
        token=strtok(buffer,",");
        row_count++;
        if(row_count==1)
        {
            continue;
        }
        while(token!=NULL)
        {
            printf("%s : %s\n",col_name[i],token);
            token=strtok(NULL,",");
            i++;
        }
    }
    fclose(fileptr);
    return SUCCESS;
}