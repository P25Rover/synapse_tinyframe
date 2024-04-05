#ifndef SynapseTopicsH
#define SynapseTopicsH

#ifdef __cplusplus
extern "C" {
#endif

#define SYNAPSE_JOY_TOPIC 0
#define SYNAPSE_JOY_TYPE Joy

#define SYNAPSE_STATUS_TOPIC 1
#define SYNAPSE_STATUS_TYPE Status

#define SYNAPSE_UPTIME_TOPIC 2
#define SYNAPSE_UPTIME_TYPE UpTime

#define SYNAPSE_ROAD_CURVE_ANGLE_TOPIC 3
#define SYNAPSE_ROAD_CURVE_ANGLE_TYPE RoadCurveAngle

#define SYNAPSE_SIM_CLOCK_TOPIC 63
#define SYNAPSE_SIM_CLOCK_TYPE SimClock

// Reserved (128-255)

#ifdef __cplusplus
}
#endif

#endif //SynapseTopicsH
