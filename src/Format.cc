#include <iostream>
#include <string>
#include "Format.h"
#include "Token.h"

struct Token Format::parseExpression(char* expr)
{
    if(!emptyExpr(expr)){

    }
}

bool Format::emptyExpr(char* expr)
{
    if(expr.find_first_not_of(' ') != std::string::npos)
    {
        return false;
    }
    return true;
}