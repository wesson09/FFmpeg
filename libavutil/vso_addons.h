#ifndef AVUTIL_VSO_ADDONS_H
#define AVUTIL_VSO_ADDONS_H

#include <stddef.h>
#include <stdint.h>

#include "attributes.h"

typedef struct 
    avstruct_field_item {
        const char *    struct_typename;    // struct type name
        const char *    field_name;         // field name
        const int       field_size;         // field size in bytes
        const int       field_offset;       // field offset
    } avstruct_field_item;

typedef struct 
    avstruct_size_item {
        const char *    typename;           // struct type name
        const char *    filename;           // filename in with the struct name is declared
        const int       size;               // size of the struct in bytes
        const avstruct_field_item * fields; // pointer to list of fields
    } avstruct_size_item;



/* To be sure that record declaration matches the size of the structures in gcc, 
   check function returning struct size by their names are provided 
*/
const avstruct_size_item * av_struct_list(void);

const avstruct_field_item * av_struct_fields(const char * struct_name);

int av_struct_sizeof(const char * struct_name);

#endif /*AVUTIL_VSO_ADDONS_H*/