#ifndef AVUTIL_VSO_ADDONS_H
#define AVUTIL_VSO_ADDONS_H

#include <stddef.h>
#include <stdint.h>

#include "attributes.h"

typedef struct  
    /* describe a field in a structure. Provide the field size and offset */
    avstruct_field_descriptor {
        const char *    struct_typename;    // struct type name
        const char *    field_name;         // field name
        const int       field_size;         // field size in bytes
        const int       field_offset;       // field offset
    } avstruct_field_descriptor;

typedef struct 
    /* describe a structure. provide its typename, the file name in which it is defined, the structure size and a pointer to list of fields */
    avstruct_descriptor {
        const char *    typename;           // struct type name
        const char *    filename;           // filename in with the struct name is declared
        const int       size;               // size of the struct in bytes
        const avstruct_field_descriptor * fields; // pointer to list of fields
    } avstruct_descriptor;

/* 
   Return a list of structure descriptors of interest.
   This function is used for debugging purpose in Delphi to make sure that the structure mapping 
   and size is perfectly in sync with the delphi declaration of records
*/
const avstruct_descriptor * av_get_struct_list(void);

/* return a struct descriptor by its name */
const avstruct_descriptor * av_get_struct_descriptor(const char * type_name);

/* Return the size of a given known structure, by its name */
int av_get_struct_size(const char * type_name);

#endif /*AVUTIL_VSO_ADDONS_H*/