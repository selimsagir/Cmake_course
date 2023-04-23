#include "stdlib.h"
#include "stdio.h"
#include <iostream>

#include "nlohmann/json.hpp"
#include "my_lib.h"
#include "../build/configured_files/include/config.hpp"


int main(){
    printf("%s", project_name);
    printf("%d", project_version_major);
    printf("%d", project_version_minor);
    printf("%d", project_version_patch);

    std::cout << "json lib version:"
    << NLOHMANN_JSON_VERSION_MAJOR << std::endl;

    printf("Hi __________");
    return 0;
}

