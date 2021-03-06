#include <glib.h>
#include <glib-object.h>

/// Return the base address of the data union stored in the `GValue` instance.
/// @param gvalue the value to extract the data pointer for
void *glibobject_value_dataptr(GValue * const gvalue) __attribute__((nonnull)) __attribute__((returns_nonnull));
