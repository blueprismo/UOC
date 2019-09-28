.PHONY: clean All

All:
	@echo "----------Building project:[ PAC1-ex2 - Debug ]----------"
	@cd "PAC1-ex2" && "$(MAKE)" -f  "PAC1-ex2.mk"
clean:
	@echo "----------Cleaning project:[ PAC1-ex2 - Debug ]----------"
	@cd "PAC1-ex2" && "$(MAKE)" -f  "PAC1-ex2.mk" clean
