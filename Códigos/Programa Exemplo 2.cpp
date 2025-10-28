// Programa genérico que lê nomes e idades, armazena e exibe pessoas cadastradas.

#include <iostream>
#include <vector>
#include <string>

// Estrutura para armazenar dados de uma pessoa
struct Pessoa {
    std::string nome;
    int idade;
};

// Função para adicionar uma pessoa ao vetor
void adicionarPessoa(std::vector<Pessoa>& pessoas) {
    Pessoa p;
    std::cout << "Digite o nome: ";
    std::getline(std::cin, p.nome);
    std::cout << "Digite a idade: ";
    std::cin >> p.idade;
    std::cin.ignore(); // Limpa o buffer do teclado
    pessoas.push_back(p);
    std::cout << "Pessoa adicionada com sucesso!
";
}

// Função para listar todas as pessoas
void listarPessoas(const std::vector<Pessoa>& pessoas) {
    std::cout << "
Lista de Pessoas Cadastradas:
";
    for (const auto& p : pessoas) {
        std::cout << "Nome: " << p.nome << ", Idade: " << p.idade << "
";
    }
}

// Função principal do programa
int main() {
    std::vector<Pessoa> pessoas;
    int opcao = 0;

    do {
        std::cout << "
=== Menu ===
";
        std::cout << "1. Adicionar Pessoa
";
        std::cout << "2. Listar Pessoas
";
        std::cout << "3. Sair
";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;
        std::cin.ignore(); // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                adicionarPessoa(pessoas);
                break;
            case 2:
                listarPessoas(pessoas);
                break;
            case 3:
                std::cout << "Saindo do programa...
";
                break;
            default:
                std::cout << "Opção inválida. Tente novamente.
";
        }
    } while (opcao != 3);

    return 0;
}
