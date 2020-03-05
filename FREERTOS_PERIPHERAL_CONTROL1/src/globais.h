#ifndef globais
typedef enum
{
	STATE_DISCONNECTED,
	STATE_STANDBY,
	STATE_MOVING_FORWARD,
	STATE_TURNING_LEFT,
	STATE_TURNING_RIGHT,
	STATE_MOVING_REVERSE,
	NUM_STATES
}StateType;

// Function Pointer for State Machines
extern StateType SmState;

#endif