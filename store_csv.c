#include "header_csv.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * @brief This function store the csv values in an array of struct of type info_t as defined in header_csv.h
 * 
 * @param filename 
 * @return error_t 
 */
error_t storecsvinstruct(char *filename)
{
    FILE *fileptr=fopen(filename,"r");
    if(fileptr==NULL)
    {
        return ERROR_NULL_PTR;
    }
    arr=calloc(5,sizeof(info_t));
    char buff[100];
    int field_count=0;
    int row_count=0;
    int i=0;
    while(fgets(buff,sizeof(buff),fileptr))
    {
        field_count=0;
        char *field=strtok(buff,",");
        row_count++;
        if(row_count==1)
        {
            continue;
        }
        while(field!=NULL)
        {
            if(field_count==0)
            {
                strcpy((arr+i)->name,field);
            }
            if(field_count==1)
            {
                strcpy((arr+i)->email_id,field);
            }
            if(field_count==2)
            {
                strcpy((arr+i)->git_link,field);
            }
            field=strtok(NULL,",");
            field_count++;
        }
        i=i+1;
    }
    fclose(fileptr);
    return SUCCESS;
}