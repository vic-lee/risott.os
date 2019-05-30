#pragma once

namespace scheduler
{
enum class pm_algo  /* process management algorithms */
{
    FIFO,     /* first in, first out */
    SJF,      /* shortest job first */
    SRTN,     /* shortest remaining time next */
    RR,       /* round robin */
    PRIR,     /* priority scheduling */
    PRIRAG,   /* priority aging */
    SLFRR,    /* selfish RR */
    MLQ,      /* multilevel queues */
    MPQ,      /* multiple queues */
    SPN,      /* shortest process next */
    HPRN,     /* highest penalty ratio next */
    GS,       /* guaranteed scheduling */
    LOTSCHED, /* lottery scheduling */
    FS,       /* fair share scheduling */
};

class Scheduler
{
public:
    Scheduler();
    Scheduler(pm_algo algo);

private:
    pm_algo algo_;
};
} // namespace scheduler