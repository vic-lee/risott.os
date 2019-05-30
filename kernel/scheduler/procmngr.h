#pragma once

#include <vector>

#include "process.h"

namespace scheduler
{
class ProcessManager
{
    typedef std::pair<pid_t, process_t> PCB_t;

public:
    ProcessManager();
    bool load_new_process();
    size_t active_process_count() const;

private:
    static const unsigned int MAX_ACTIVE_PROCESS_COUNT_;
    static unsigned int pidctr_;
    std::map<pid_t, process_t> processtable_;
};
} // namespace scheduler