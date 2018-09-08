#ifndef RINGBUFFER_H_
#define RINGBUFFER_H_

#include <stdint.h>
#include <stdbool.h>

struct ringbuffer_t {
	uint32_t * const data;
	const uint16_t capacity;

	uint16_t head;
	uint16_t tail;
	uint16_t count;
};

/**
 * Create buffer with defined size
 */
#define RINGBUFFER_DEFINE(buff, size) uint32_t buff##_space[size]; struct ringbuffer_t buff = { buff##_space, size, 0, 0, 0 }

#define RINGBUFFER_EMPTY(buffer) ((buffer)->count == 0)
#define RINGBUFFER_FULL(buffer) (((buffer)->capacity - (buffer)->count) == 0)
#define RINGBUFFER_COUNT(buffer) (buffer)->count
#define RINGBUFFER_CAPACITY(buffer) (buffer)->capacity
#define RINGBUFFER_FREE_SIZE(buffer) ((buffer)->capacity - (buffer)->count)

extern bool ringbuffer_push(struct ringbuffer_t *buffer, uint32_t data);
extern bool ringbuffer_pop(struct ringbuffer_t *buffer, uint32_t *out_data);
extern void ringbuffer_reset(struct ringbuffer_t *buffer);

#endif /* RINGBUFFER_H_ */
