#include "header_csv.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int comparator(const void* p, const void* q)
{
    return strcmp(((info_t*)p)->name,((info_t*)q)->name);
}
error_t sortcsvfile(info_t *arr)
{
    if(arr==NULL)
    {
        return ERROR_NULL_PTR;
    }
    printf("Before Sorting\n");
    for(int i=0;i<5;i++)
    {
        printf("%s  ",(arr+i)->name);
        printf("%s  ",(arr+i)->email_id);
        printf("%s\n",(arr+i)->git_link);
    }
    qsort(arr, 5, sizeof(info_t), comparator);
    printf("After Sorting\n");
    for(int i=0;i<5;i++)
    {
        printf("%s  ",(arr+i)->name);
        printf("%s  ",(arr+i)->email_id);
        printf("%s\n",(arr+i)->git_link);
    }
    return SUCCESS;
}