#include <stdio.h>
#include "class_template.h"

int main()
{
    Class obj;
    obj.class_name = "TestClass";
    obj.get_class = get_class;
    obj.get_cool_name = get_cool_name;

    printf("RESULT: %s\n", obj.get_class(&obj));


    return 0;
}
