#include <iostream>

#include "procmngr.h"
#include "process.h"

namespace scheduler
{
unsigned int ProcessManager::pidctr_ = 10;
const unsigned int ProcessManager::MAX_ACTIVE_PROCESS_COUNT_ = 500;

ProcessManager::ProcessManager() {}

pid_t ProcessManager::load_new_process()
{
    if (active_process_count() >= MAX_ACTIVE_PROCESS_COUNT_)
        return ERR_PROCESS_NOT_INITIATED;

    pid_t pid = pidctr_++;
    process_t proc = process_t(pid, 1000, 1, false);
    processtable_.insert(PCB_t(pid, proc));

    return pid;
}

size_t ProcessManager::active_process_count() const
{
    return processtable_.size();
}
} // namespace scheduler