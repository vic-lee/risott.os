#pragma once

namespace scheduler
{

class Scheduler
{
public:
    enum class scheduling_algorithm
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
    Scheduler(scheduling_algorithm algo);

private:
    scheduling_algorithm algo_;
};
} // namespace scheduler