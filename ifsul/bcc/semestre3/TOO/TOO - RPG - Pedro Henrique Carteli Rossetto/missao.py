class Missao:
    def __init__(self, nome, descricao, recompensa, status):
        self.__nome = None
        self.__descricao = descricao
        self.__recompensa = None
        self.__status = "PENDENTE"
        
        self.nome = nome
        self.recompensa = recompensa
        self.status = status
    

    ## Getters e Setters com validação
    
    ## Nome

    @property
    def nome(self):
        return self.__nome
    
    @nome.setter
    def nome(self, nome):
        if nome is None or not isinstance(nome, str):
            raise ValueError("Nome é obrigatório e deve ser uma string")
        nome_limpo = nome.strip()
        if not nome_limpo:
            raise ValueError("Nome não pode estar vazio ou conter apenas espaços")
        self.__nome = nome_limpo
    

    ## Descrição

    @property
    def descricao(self):
        return self.__descricao
    
    @descricao.setter
    def descricao(self, descricao):
        self.__descricao = descricao
    

    ## Recompensa

    @property
    def recompensa(self):
        return self.__recompensa
    
    @recompensa.setter
    def recompensa(self, recompensa):
        if not isinstance(recompensa, (int, float)):
            raise ValueError("Recompensa deve ser um valor numérico")
        if recompensa < 1 or recompensa > 50:
            raise ValueError("Recompensa deve ser um valor positivo entre 1 e 50")
        self.__recompensa = recompensa
    

    ## Status
    
    @property
    def status(self):
        return self.__status
    
    @status.setter
    def status(self, status):
        status_validos = ["PENDENTE", "EM ANDAMENTO", "CONCLUIDA"]
        
        if status not in status_validos:
            raise ValueError(f"Status deve ser um de: {status_validos}")
        
        transicoes_validas = {
            "PENDENTE": ["PENDENTE", "EM ANDAMENTO"],
            "EM ANDAMENTO": ["EM ANDAMENTO", "CONCLUIDA"],
            "CONCLUIDA": ["CONCLUIDA"]
        }
        
        if status not in transicoes_validas.get(self.__status, []):
            raise ValueError(f"Transição de '{self.__status}' para '{status}' não é permitida. Fluxo esperado: PENDENTE -> EM ANDAMENTO -> CONCLUIDA")
        
        self.__status = status
    


    def exibir_informacoes(self):
        print(f"Missão: {self.nome}")
        print(f"Descrição: {self.descricao}")
        print(f"Recompensa: {self.recompensa} XP")
        print(f"Status: {self.status}")
    

    def __str__(self):
        return f"Missão: {self.nome} | Descrição: {self.descricao} | Recompensa: {self.recompensa} XP | Status: {self.status}"
    

    def __eq__(self, outro):
        if not isinstance(outro, Missao):
            return False
        return (self.nome == outro.nome and 
                self.descricao == outro.descricao and 
                self.recompensa == outro.recompensa and 
                self.status == outro.status)


