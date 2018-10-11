PYTHON ?= python

check : \
	segments_verify
	@echo "All Tests Passed"

define printpassfail
	{ echo "Pass" ; true ; } || { echo "Fail" ; false ; }
endef

segments_verify :
	@echo "=== start $@ ===>"
	$(PYTHON) $@.py && $(printpassfail)
	@echo "<=== end $@ ==="
