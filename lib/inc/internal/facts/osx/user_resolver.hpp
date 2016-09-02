/**
 * @file
 * Declares the OSX user resolver.
 */

#pragma once

#include "../resolvers/user_resolver.hpp"

namespace facter { namespace facts { namespace osx {

    /**
    * Responsible for resolving user facts.
    */
    struct user_resolver : resolvers::user_resolver
    {
        protected:
        /**
        * Gets the user
        * @return Returns the user list.
        */
        virtual std::string get_user() override;
    };

}}}
