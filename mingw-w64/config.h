/* config.h.  Manual config for MinGW-W64.  */

/* Default visibility */
#define DEFAULT_VISIBILITY /**/

/* Enable global message logging */
#define ENABLE_LOGGING 1

/* Uncomment to start with debug message logging enabled */
// #define ENABLE_DEBUG_LOGGING 1

/* Uncomment to enabling logging to system log */
// #define USE_SYSTEM_LOGGING_FACILITY

/* type of second poll() argument */
#define POLL_NFDS_TYPE unsigned int

#define OS_WINDOWS 1
#define HAVE_SIGNAL_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_GETTIMEOFDAY 1