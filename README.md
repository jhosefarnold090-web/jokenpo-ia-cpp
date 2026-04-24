# 🎮 Jokenpô com Inteligência Artificial (C++)

Projeto desenvolvido em C++ que simula o jogo Pedra, Papel e Tesoura com uma IA adaptativa capaz de aprender o comportamento do jogador.

---

## 🧠 Diferencial

A inteligência artificial analisa padrões de jogadas do usuário e tenta prever a próxima jogada para aumentar suas chances de vitória.

---

## ⚙️ Funcionalidades

- Entrada interativa do usuário
- Sistema de decisão inteligente
- IA baseada em histórico de jogadas
- Aleatoriedade controlada para evitar previsibilidade
- Loop contínuo de jogo

---

## 🔍 Como funciona

- Utiliza uma matriz 3x3 para registrar padrões de jogadas
- Analisa a última jogada do jogador
- Escolhe a melhor resposta baseada em probabilidade
- Mistura comportamento inteligente com aleatoriedade

---

## 🛠️ Tecnologias

- C++
- Programação Orientada a Objetos
- Biblioteca `<random>` (mt19937)

---

## ▶️ Como executar

```bash
g++ *.cpp -o jogo
./jogo
