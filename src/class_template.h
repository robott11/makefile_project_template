#ifndef CLASS_TEMPLATE_H
#define CLASS_TEMPLATE_H

typedef struct class_template {
    const char* class_name;
    void (*get_cool_name)(struct class_template*, char*);
    const char* (*get_class)(struct class_template*);
} Class;

void get_cool_name(struct class_template*, char*);

const char* get_class(struct class_template*);

#endif