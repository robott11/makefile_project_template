#include <stdio.h>
#include "class_template.h"

void get_cool_name(struct class_template* this, char* msg)
{
    printf("get_cool_name() | msh: %s\n", msg);
}

const char* get_class(struct class_template* this)
{
    this->get_cool_name(this, "HELLO WORLD");
    return this->class_name;
}