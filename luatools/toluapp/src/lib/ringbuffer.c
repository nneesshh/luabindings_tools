#include "ringbuffer.h"

static inline bool 
ringbuffer_check_validity(const struct ringbuffer_t *buffer) {
	return buffer != NULL && buffer->data != NULL
		&& buffer->head < buffer->capacity && buffer->tail < buffer->capacity
		&& buffer->count <= buffer->capacity;
}

inline bool
ringbuffer_push(struct ringbuffer_t *buffer, uint32_t data) {

	if (!ringbuffer_check_validity(buffer)
		|| RINGBUFFER_FULL(buffer))
		return false;

	buffer->data[buffer->tail] = data;
	buffer->tail = (buffer->tail + 1 >= buffer->capacity) ? 0 : buffer->tail + 1;
	buffer->count++;
	return true;
}

inline bool
ringbuffer_pop(struct ringbuffer_t *buffer, uint32_t *out_data) {

	if (RINGBUFFER_EMPTY(buffer))
		return false;

	*out_data = buffer->data[buffer->head];
	buffer->head = (buffer->head + 1 >= buffer->capacity) ? 0 : buffer->head + 1;
	buffer->count--;
	return true;
}

inline void
ringbuffer_reset(struct ringbuffer_t *buffer)
{
	buffer->count = buffer->tail = buffer->head = 0;
}
