#ifndef INIT_SM7325_H
#define INIT_SM7325_H

#include <string.h>

enum device_variant {
    VARIANT_A736B = 0,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models = {
    .model = "SM-A736B",
    .codename = "a73xq"
};

static const variant *all_variants[VARIANT_MAX] = {
    &international_models
};

#endif // INIT_SM7325_H
