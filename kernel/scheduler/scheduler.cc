#include "scheduler.h"

namespace scheduler
{

Scheduler::Scheduler()
{
    Scheduler(pm_algo::FIFO);
}

Scheduler::Scheduler(pm_algo algo) : algo_(algo) {}

}