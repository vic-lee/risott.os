#pragma once

#include <cstddef>
#include <vector>
#include <map>

namespace scheduler
{

typedef int pid_t;
typedef int framenum_t;

const pid_t ERR_PROCESS_NOT_INITIATED = -1;

const size_t MAX_PRIORITY = 5;
const size_t MIN_PRIORITY = 1;

enum process_state
{
    UNINITIATED,
    RUNNING,
    READY,
    BLOCKED,
    BLOCK_SUSPENDED,
    READY_SUSPENDED,
    KILLED,
};

enum protection_level
{
    R,   /* read-only */
    RW,  /* read-write */
    RWE, /* executable */
};

struct PTE_t
{
    framenum_t framenum;
    bool referenced;
    bool modified;
    protection_level protection;
};

struct process_t
{
    process_state state;
    const bool sys;
    const pid_t pid;
    const pid_t ppid;
    size_t psize;
    size_t priority;
    std::vector<PTE_t> pagetable; /* i-th page at index i */

    process_t(pid_t pid, size_t psize, size_t priority, bool sys);
    bool resize();
    
};
} // namespace scheduler