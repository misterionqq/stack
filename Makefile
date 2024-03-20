# Объявляем компилятор
CXX = g++

# Указываем флаги для компилятора: включаем все предупреждения и стандарт C++11 (или выше)
CXXFLAGS = -Wall -std=c++11

# Объявляем папки с исходным кодом
INC_DIR = stack
SRC_DIR = tests
BUILD_DIR = build

# Объявляем исходный файл для сборки и целевой исполняемый файл
TARGET = $(BUILD_DIR)/testsForStack
SRC = $(SRC_DIR)/testsForStack.cpp
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEPS = $(INC_DIR)/stack.h

# Создаем цель по умолчанию
all: $(TARGET)

# Правило для создания исполняемого файла
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Правило для создания объектных файлов
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(DEPS)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

# Цель для запуска тестов
test: $(TARGET)
	./$(TARGET)

# Цель для очистки проекта (удаление всех сгенерированных файлов)
clean:
	rm -rf $(BUILD_DIR)/*.o $(TARGET)

# Объявляем фоновые цели
.PHONY: all clean test

