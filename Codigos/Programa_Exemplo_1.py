# Descrição: Estrutura básica para programas interativos

def processar_dados(dados):
    """
    Função genérica para processar dados.
    Aqui você pode implementar qualquer lógica necessária.
    Exemplo: retornar o dado em maiúsculas.
    """
    return dados.upper()

def main():
    print("=== Programa Genérico ===")
    
    try:
        # Entrada de dados
        entrada = input("Digite algo (ou 'sair' para encerrar): ").strip()
        
        # Loop até o usuário decidir sair
        while entrada.lower() != "sair":
            if not entrada:
                print("⚠ Entrada vazia. Tente novamente.")
            else:
                # Processamento
                resultado = processar_dados(entrada)
                
                # Saída
                print(f"Resultado processado: {resultado}")
            
            entrada = input("\nDigite algo (ou 'sair' para encerrar): ").strip()
        
        print("Programa encerrado. Até mais!")
    
    except KeyboardInterrupt:
        print("\n⚠ Execução interrompida pelo usuário.")
    except Exception as e:
        print(f"❌ Ocorreu um erro: {e}")

if __name__ == "__main__":
    main()

