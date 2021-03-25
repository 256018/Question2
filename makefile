PROJECT_NAME = FileCSV
SRC =  read_csv.c\
store_csv.c\
sort_csv.c\
test_csv.c

INC_TEST = unity

UNIT = unity/unity.c

$(PROJECT_NAME).exe : $(SRC) $(UNIT)
	gcc header_csv.h -I $(INC_TEST) $(SRC) $(UNIT) -o $(PROJECT_NAME).exe

run :
	$(PROJECT_NAME).exe