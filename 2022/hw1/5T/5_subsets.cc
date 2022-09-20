/*

================================= Подмножества =================================
Множество задано строкой, то есть каждый символ есть элемент множества.

Но это множество — не совсем простое. Элементы в нём могут повторяться.

Два подмножества считаются одинаковыми, если все элементы одного множества
совпадают с элементами другого. Например, множества, представленные строками abc
и cba совпадают. Совпадают также множества abra и raba.

Ваша задача по заданной строке, представляющей исходное множество, вывести все
различные его подмножества, каждое на отдельной строке вывода. Выводить можно в
произвольном порядке. Выход не должен содержать совпадающие подмножества.

Пустое множество тоже является подмножеством исходного.

================================ Input format ==================================
Исходное множество в виде строки

================================ Output format =================================
Все уникальные подмножества исходного множества по одному на строку.
Подмножества не требуется как-либо упорядочивать, будет принят любой верный
ответ.

Не забудьте, что пустая строка — тоже верное подмножество. В приведённом примере
она следует первой, перед строкой a.

================================== Examples ====================================

------ Input -----
abra

----- Output -----

a
b
ba
ar
rb
aa
raab
baa
abr
ara
r

*/

#include <algorithm>
#include <iostream>
#include <map>
#include <string>

void printSym(const std::map<char, int> &symbols)
{
  
}

int main()
{
  std::string word{};
  std::cin >> word;

  std::map<char, int> symbols{};
  for (char c : word)
    ++symbols[c];

  printSym(symbols);
  return 0;
}

/*

Возможно есть смысл хранить букву и количество раз, которое она встречается.

*/
