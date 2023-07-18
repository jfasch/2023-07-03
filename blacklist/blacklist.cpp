#include "blacklist.h"

Blacklist::Blacklist()
: _forbidden_names({"Joerg", "Johanna", "Caro", "Philipp", "Isi", "Evi"})
{}

bool Blacklist::is_forbidden(const std::string& name) const
{
    return _forbidden_names.contains(name);
}
