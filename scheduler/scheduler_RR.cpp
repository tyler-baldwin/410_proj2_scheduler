/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: Tbaldy
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */


#include "../includes/scheduler_RR.h"

bool Scheduler_RR::time_to_switch_processes(int tick_count, PCB &p) {

	//return Scheduler::time_to_switch_processes(tick_count, p);
}
//RR - preemptive - no sorting of ready_q needed.
void Scheduler_RR::sort() {
}


