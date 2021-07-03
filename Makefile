argv:
	$(CC) -o argv argv.c

.PHONY: clean
clean:
	$(RM) argv
