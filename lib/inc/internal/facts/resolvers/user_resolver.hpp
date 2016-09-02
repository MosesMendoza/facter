/**
 * @file
 * Declares the user fact resolver.
 */
#pragma once

#include <facter/facts/resolver.hpp>
#include <string>

namespace facter { namespace facts { namespace resolvers {

    /**
    * Responsible for resolving user facts
    */
    struct user_resolver : resolver
    {
        /**
        * Constructs the user resolver.
        */
        user_resolver();

        /**
        * Called to resolve all facts the resolver is responsible for.
        * @param facts The fact collection that is resolving facts
        */
        virtual void resolve(collection& facts) override;

    protected:
        /**
        * Gets the user.
        * @return Returns the user.
        */
        virtual std::string get_user() = 0;
    };
}}} // namespace facter::facts::resolvers
