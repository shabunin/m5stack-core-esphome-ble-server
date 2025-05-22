#pragma once

#define ALARM_MIN(x)   ((x >> 0) & 0xFF)
#define ALARM_HOUR(x)  ((x >> 8) & 0xFF)
#define ALARM_DAYS(x)  ((x >> 16) & 0x7F)
#define ALARM_ON(x)    ((x >> 23) & 0x01)