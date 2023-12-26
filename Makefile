# プロジェクトルートディレクトリ
PROJECT_ROOT := $(shell pwd)

YEAR := $(shell date '+%Y')
MONTH := $(shell date '+%m')
DAY := $(shell date '+%d')


.PHONY: start

run:
	g++ $(PROJECT_ROOT)/$(YEAR)/$(YEAR)-$(MONTH)-$(DAY)/$(test) -o $(PROJECT_ROOT)/$(YEAR)/$(YEAR)-$(MONTH)-$(DAY)/build/$(test).out
	$(PROJECT_ROOT)/$(YEAR)/$(YEAR)-$(MONTH)-$(DAY)/build/$(test).out

test:
	g++ $(PROJECT_ROOT)/test.cpp -o $(PROJECT_ROOT)/test.out
	$(PROJECT_ROOT)/test.out