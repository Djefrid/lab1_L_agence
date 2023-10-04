#pragma once

#include <stdexcept>
#include <exception>
#include <string>

class MonException : public std::exception
{
public:
    MonException(const std::string what);
    MonException(const std::string what, const std::exception autreexception);

    const char* what() const noexcept override;

    ~MonException() noexcept;

    int ErrorCode;

private:
    std::string what_;
};
