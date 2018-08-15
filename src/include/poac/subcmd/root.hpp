#ifndef POAC_SUBCMD_ROOT_HPP
#define POAC_SUBCMD_ROOT_HPP

#include <iostream>
#include <string>
#include <cstdlib>


namespace poac::subcmd { struct root {
    static const std::string summary() { return "Display the root installation directory."; }
    static const std::string options() { return "<Nothing>"; }

    template <typename VS>
    void operator()([[maybe_unused]] VS&& vs) { std::cout << POAC_ROOT << std::endl; }
};} // end namespace
#endif // !POAC_SUBCMD_ROOT_HPP