TARGET = can

SRCS  = $(shell find ./src     -type f -name *.c)
HEADS = $(shell find ./src/include -type f -name *.h)
OBJS = $(SRCS:.c=.o)
DEPS = Makefile.depend

INCLUDES = -I./src/include
CXXFLAGS = -O2 -Wall $(INCLUDES)
LDFLAGS = -lm

all: $(TARGET)

$(TARGET): $(OBJS) $(HEADS)
		$(CXX) $(LDFLAGS) -o $@ $(OBJS)

run: all
		@./$(TARGET)

.PHONY: depend clean
depend:
		$(CXX) $(INCLUDES) -MM $(SRCS) > $(DEPS)
		@sed -i -E "s/^(.+?).o: ([^ ]+?)\1/\2\1.o: \2\1/g" $(DEPS)

clean:
		$(RM) $(OBJS) $(TARGET)

-include $(DEPS)
