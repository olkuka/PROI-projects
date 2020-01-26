CC = g++
SRCDIR = src
BUILDDIR = build
TARGETDIR = bin
TARGET = runner
TESTDIR = test
TESTTARGET = test
TESTSRC = test.cpp

SRCEXT = cpp
SOURCES = $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS = -std=c++11 -g -Wall
INC = -I include
TESTFLAG = -lboost_unit_test_framework

$(TARGET): $(OBJECTS)
	@mkdir -p $(TARGETDIR)
	$(CC) $^ -o $(TARGETDIR)/$(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

tests:
	@mkdir -p $(TARGETDIR)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c $(TESTDIR)/test.cpp -o $(BUILDDIR)/test.o
	$(CC) $(BUILDDIR)/test.o $(BUILDDIR)/Patient.o $(BUILDDIR)/Person.o $(BUILDDIR)/utilities.o $(BUILDDIR)/Clinic.o $(BUILDDIR)/Doctor.o -o $(TARGETDIR)/test -lboost_unit_test_framework
run:
	./bin/$(TARGET)

runtests:
	./bin/$(TESTTARGET)

clean:
	$(RM) -r $(BUILDDIR) $(TARGETDIR); $(RM) -r $(BUILDDIR) $(TARGETDIR)
