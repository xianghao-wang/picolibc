all: $(BUILD_DIR)/libc.a

$(BUILD_DIR)/libc.a: FORCE
	zig build -p $(BUILD_DIR)

FORCE: ;