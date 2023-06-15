#include <iostream>
#include <string>

int main() {
    int score = 0;  // Счет игрока
    
    // Вопросы и ответы
    std::string questions[5] = {
        "Какое самое большое животное на Земле?",
        "Сколько планет в Солнечной системе?",
        "Кто написал роман \"Война и мир\"?",
        "В каком году произошла Великая Октябрьская социалистическая революция в России?",
        "Какой химический элемент имеет атомный номер 79?"
    };
    
    std::string answers[5] = {
        "Синий кит",
        "Восемь",
        "Лев Толстой",
        "1917",
        "Золото"
    };
    
    // Процесс викторины
    for (int i = 0; i < 5; i++) {
        std::cout << "Вопрос " << i+1 << ": " << questions[i] << std::endl;
        std::string user_answer;
        std::cout << "Ваш ответ: ";
        std::cin >> user_answer;
        
        if (user_answer == answers[i]) {
            std::cout << "Правильно!\n";
            score++;
        } else {
            std::cout << "Неправильно. Правильный ответ: " << answers[i] << std::endl;
        }
        
        std::cout << std::endl;
    }
    
    // Вывод результатов
    std::cout << "Игра завершена!\n";
    std::cout << "Вы набрали " << score << " из 5 очков.\n";
    
    return 0;
}
