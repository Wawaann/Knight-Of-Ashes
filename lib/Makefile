
all:
	@make -C my/ --quiet
	@make -C csfml/ --quiet
	@mv my/*.a lib/
	@mv csfml/lib/* lib/
clean:
	@make clean -C my/ --quiet

fclean:
	@make fclean -C my/ --quiet
	@make clean -C csfml/ --quiet
	@rm -rf lib/*
