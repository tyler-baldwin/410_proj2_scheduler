/*
 * SchedulerSRTF.cpp
 *
 *  Created on: 2020AD
 *      Author:TBALDY
 *
 *      implements shortest remaining time first scheduling algorithm
 *     pre-emptive
 */

//TODO fill in content

#include "../includes/scheduler_SRTF.h"

bool Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p) {
	return Scheduler::time_to_switch_processes(tick_count, p);
}

void Scheduler_SRTF::sort() {
}
