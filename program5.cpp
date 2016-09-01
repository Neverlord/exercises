#include "caf/all.hpp"
#include "caf/io/all.hpp"

using namespace caf;

namespace {

class config : public actor_system_config {
public:
  config() {
    // nop
  }
};

void caf_main(actor_system& system, const config& cfg) {
  // todo
}

} // namespace <anonymous>

CAF_MAIN(io::middleman)
