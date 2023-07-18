#ifndef GREETER_NAME_H
#define GREETER_NAME_H

#include "greeter.h"
#include <DemoConfig.h>

#ifndef DEMO_USE_BLACKLIST
#  error DEMO_USE_BLACKLIST
#endif
#if DEMO_USE_BLACKLIST == 1
#  include <blacklist.h>
#endif

#include <string>

class NameGreeter : public Greeter
{
public:
    NameGreeter(const std::string& name) : _name(name) {}
    void sayhello() override;

private:
    std::string _name;
#if DEMO_USE_BLACKLIST == 1
    Blacklist _blacklist;
#endif
};

#endif
