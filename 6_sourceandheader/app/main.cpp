#include "stdlib.h"
#include "stdio.h"
#include "../build/configured_files/include/config.hpp"


int main(){
    printf("%s", project_name);
    printf("%d", project_version_major);
    printf("%d", project_version_minor);
    printf("%d", project_version_patch);

    printf("Hi __________");
    return 0;
}

