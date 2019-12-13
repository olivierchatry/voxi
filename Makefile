BUILD_DIR = ./build
TARGET=voxi

SRCS=	src/main.cpp \
	src/vox.cpp \
	externals/loguru/loguru.cpp

OBJS=$(SRCS:%.cpp=$(BUILD_DIR)/%.o)
DEPS=$(OBJS:%.o=%.d)
CFLAGS=-I. -I ./externals/loguru -I./src -g3 -O0 -Wall -Werror
LIBS=-lpthread -lstdc++ -ldl
RM=rm -f

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC)  $(CFLAGS) $(INCLUDES) -o $(TARGET) $(OBJS) $(LFLAGS) $(LIBS)

-include $(DEPS)

$(BUILD_DIR)/%.o : %.cpp
	mkdir -p $(@D)
	clang $(CFLAGS) -MMD -c $< -o $@

.PHONY : clean
clean:
	$(RM) $(OBJS) $(DEPS) $(TARGET) vgcore*
	$(RM) -r $(BUILD_DIR)

.PHONY	: re
re	: clean all