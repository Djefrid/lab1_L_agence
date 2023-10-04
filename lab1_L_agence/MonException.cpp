#include "MonException.h"

MonException::MonException(const std::string what) : what_(what), ErrorCode(0) {}

MonException::MonException(const std::string what, const std::exception autreexception) : what_(what), ErrorCode(0) {}

const char* MonException::what() const noexcept
{
    return what_.c_str();
}

MonException::~MonException() noexcept {}
