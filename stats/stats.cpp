/*
 * Stats.cpp
 *
 *  Created on: 2020AD
 *      Author: Tyler fing Baldwin
 */
#include "../includes/stats.h"
#include "../includes/constants.h"

Stats::Stats(std::vector<PCB> &finished_vector) {
	vec = &finished_vector;
	av_wait_time = UNINITIALIZED;
	av_turnaround_time = UNINITIALIZED;
	av_response_time = UNINITIALIZED;
}
//loops thru vec, prints 1 line for each process using the following format
//Process 1 Required CPU time:2  arrived:0 started:0 finished:2
//if there are 10 processes in vector, should print 10 lines
void Stats::showAllProcessInfo() {
	for (PCB p : *vec) {
		std::cout
				<< "Process " + std::to_string(p.process_number)
						+ " Required CPU time:"
						+ std::to_string(p.required_cpu_time) + " arrived:"
						+ std::to_string(p.arrival_time) + " started:"
						+ std::to_string(p.start_time) + " finished:"
						+ std::to_string(p.finish_time);
		if (!vec->empty()) {
			std::cout << '\n';
		}
	}
}
//after a process is placed in the ready_q, how long does
//it take before its placed on the processor?
//response_time per process = start_time - arrival_time
//this funtion returns the average over all processes
float Stats::get_av_response_time() {
	float total = 0;
	int s = vec->size();
	for (PCB p : *vec) {
		total += p.start_time - p.arrival_time;
	}
	return total / s;
}

//after a process is placed in the ready_q, how long does
//it take to complete?
//turnaround time per process = finish_time - arrival_time
//this funtion returns the average over all processes
float Stats::get_av_turnaround_time() {
	float total = 0;
	int s = vec->size();
	for (PCB p : *vec) {
		total += p.finish_time - p.arrival_time;
	}
	return total / s;
}

//after a process is placed in the ready_q, how much time does it
//spend waiting for processor time?
//wait time per process = finish_time - arrival_time-required_CPU_time
//this funtion returns the average over all processes
float Stats::get_av_wait_time() {
	float total = 0;
	int s = vec->size();
	for (PCB p : *vec) {
		total += p.finish_time - p.arrival_time - p.required_cpu_time;
	}
	return total / s;
}

//calcStats() saves the results here
void Stats::calcStats() {
	av_wait_time = get_av_wait_time();
	av_turnaround_time = get_av_turnaround_time();
	av_response_time = get_av_response_time();
}

