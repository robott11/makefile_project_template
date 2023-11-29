#include <stdio.h>
#include <string.h>

typedef struct class_template {
    const char* class_name;
    void (*get_cool_name)(struct class_template*, char* msg);
    const char* (*get_class)(struct class_template*);
} Class;

void get_cool_name(struct class_template* this, char* msg)
{
    printf("get_cool_name() | msh: %s\n", msg);
}

const char* get_class(struct class_template* this)
{
    this->get_cool_name(this, "HELLO WORLD");
    return this->class_name;
}

int main()
{
    Class obj;
    obj.class_name = "TestClass";
    obj.get_class = get_class;
    obj.get_cool_name = get_cool_name;

    printf("RESULT: %s\n", obj.get_class(&obj));


    return 0;
}
