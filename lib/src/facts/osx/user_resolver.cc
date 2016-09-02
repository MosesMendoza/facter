#include <internal/facts/osx/user_resolver.hpp>
#include <leatherman/logging/logging.hpp>
#include <leatherman/execution/execution.hpp>

using namespace std;
using namespace leatherman::execution;

namespace facter { namespace facts { namespace osx {
    string user_resolver::get_user()
    {
        //use dscl to get the list of users
        auto exec = execute("dscl", { "localhost", "-list", "/Local/Default/Users" });
        if (!exec.success) {
            return {};
        }
        return exec.output;
    }
}}} // namespace facter::facts::osx
