/*
 * scheduler.cpp
 *
 Created on: Feb 16 2020
 *      Author:Tyler Baldwin
 */

#include "../includes/scheduler.h"

//add a process, either a new one or one that
//had been running on the CPU and has been preempted
virtual void add(PCB p);

virtual PCB getNext();

bool isEmpty(){

}

void Scheduler::add(PCB p) {
}

PCB Scheduler::getNext() {
}

bool Scheduler::isEmpty() {
}

bool Scheduler::time_to_switch_processes(int tick_count, PCB &p) {
}
