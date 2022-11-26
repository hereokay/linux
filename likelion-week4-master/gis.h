#pragma once
#include <stdio.h>
#include <stdlib.h>

struct gisinfo {
	int degree;
	int minute;
	int second;
	int totalSec;
	int dms;
	char direction;
};

struct coordinate {
	struct gisinfo longitude;
	struct gisinfo latitude;
};