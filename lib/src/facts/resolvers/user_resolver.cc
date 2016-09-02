#include <internal/facts/resolvers/user_resolver.hpp>
#include <facter/facts/collection.hpp>
#include <facter/facts/fact.hpp>
#include <facter/facts/scalar_value.hpp>

namespace facter { namespace facts { namespace resolvers {

    user_resolver::user_resolver() :
        resolver(
            "user",
            {
                fact::user,
            })
    {
    }

    void user_resolver::resolve(collection& facts)
    {
        auto user = get_user();
        if (user.empty()) {
            return;
        }

        facts.add(fact::user, make_value<string_value>(move(user)));
    }
}}}
