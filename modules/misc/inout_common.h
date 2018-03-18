#ifndef INPUT_OUTPUT_COMMON_H_
#define INPUT_OUTPUT_COMMON_H_

#include "caer-sdk/utils.h"
#include <libcaer/network.h>

static inline void caerGenericEventSetTimestamp(void *eventPtr, caerEventPacketHeaderConst headerPtr, int32_t timestamp) {
	*((int32_t *) (((uint8_t *) eventPtr) + U64T(caerEventPacketHeaderGetEventTSOffset(headerPtr)))) = htole32(
		timestamp);
}

#endif /* INPUT_OUTPUT_COMMON_H_ */
