#include "process.h"

namespace scheduler
{
process_t::process_t(pid_t pid, size_t psize, size_t priority, bool sys)
    : state(process_state::READY), sys(sys), pid(pid),
      ppid(0), psize(psize), priority(priority) {}
} // namespace scheduler