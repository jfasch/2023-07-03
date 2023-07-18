#pragma once

#include <set>
#include <string>

class Blacklist
{
public:
    Blacklist();
    bool is_forbidden(const std::string& name) const;
private:
    std::set<std::string> _forbidden_names;
};
