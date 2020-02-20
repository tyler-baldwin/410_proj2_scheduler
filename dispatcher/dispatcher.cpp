/*
 * Dispatcher.cpp
 *
 *  Created on: Feb 16 2020
 *      Author:Tyler Baldwin
 */
#include "../includes/dispatcher.h"

//pull current process (if any) off CPU and return it
//if nothing on CPU returns an uninitialized PCB
PCB Dispatcher::get_from_CPU() {
	Dispatcher::is_valid_job_on_cpu = false;
	return Dispatcher::cpu->get_process_off_core();
}

//place the current process on the CPU for execution
void Dispatcher::put_on_CPU(PCB &process) {
	Dispatcher::cpu->put_process_on_core(process);
	Dispatcher::is_valid_job_on_cpu = true;
}
//is CPU idle or working
bool Dispatcher::isValidJobOnCPU() {
	return Dispatcher::is_valid_job_on_cpu;
//	PCB curr = Dispatcher::cpu->get_COPY_of_Current_Process();
//	if(curr.process_number == Constants::UNINITIALIZED){
//		return false;
//	}
//	else{
//		return true;
//	}
}
