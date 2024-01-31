#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if(command == "add"){
        int result = first + second;
        return std::to_string(result);
    } 
    else if(command == "subtract"){
        int result = first - second;
        return std::to_string(result);
    } 
    else if(command == "multiply"){
        int result = first * second;
        return std::to_string(result);
    } 

    return "";
}
