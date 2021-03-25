#ifndef __FILE_CSV__
#define __FILE_CSV__
typedef struct info_t
{
    char name[100];
    char email_id[100];
    char git_link[100];
}info_t;
info_t *arr;

typedef enum error_t
{
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0             /**< Compute operation is successful */
}error_t;

error_t readcsvfile(char *filename);
error_t storecsvinstruct(char *filename);
error_t sortcsvfile(info_t *arr);
#endif