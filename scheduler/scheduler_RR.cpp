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
	if (p.remaining_cpu_time <= 0) {
		return true;
	} else if (p.required_cpu_time != p.remaining_cpu_time
			&& (p.required_cpu_time - p.remaining_cpu_time) % time_slice == 0) {
		return true;
	} else {
		return false;
	}
}
//RR - preemptive - no sorting of ready_q needed.
void Scheduler_RR::sort() {
}

