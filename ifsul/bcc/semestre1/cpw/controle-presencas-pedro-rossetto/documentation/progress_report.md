

# Relatório de Progresso Semanal | Trabalho Final | Controle de Presenças em Evento

### Nome: Pedro Henrique Carteli Rossetto



## Relatório de Progresso - Semana 1
### Data: 11/06/2025
    
### Progresso até então:
    1. Criação da pasta do trabalho segundo o padrão estabelecido
    2. Inserção da pasta dentro de repositório do github
    3. Criação da estrutura de pastas
    4. Linkagem dos arquivos de html,css e js
    5. Instalação da extensão "Markdown All in One"
    6. criacao hmtl
   

### Código até então:

```
<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Controle de Presenças Evento X</title>
    <link rel="stylesheet" href="../css/estilo.css">
</head>
<body>
    <div class="campo_inscricao">
        <h1>Área de Inscrição - Evento X</h1>
        <form id="form_inscricao">
            <label for="name">Nome Completo:</label>
            <input type="text" id="name" name="name" required>
            <br>
            <br>
            <label for="email">E-mail:</label>
            <input type="email" id="email" name="email" required>
            <br>
            <br>
            <button type="submit">Increver-se no Evento X</button>
        </form>
    </div>


    <div class="campo_presenca">
        <h1>Área de Registro de Presença - Evento X</h1>
        <form id="form_presenca">
            <label for="email_presenca">E-mail:</label>
            <input type="email" id="email_presenca" name="email_presenca" required>
            <br>
            <br>
            <button type="submit">Registrar Presença</button>
        </form>
    </div>

    <div class="campo_participantes">
        <h2>Lista de Inscritos:</h2>
        <ul id="lista_inscritos">
            <!-- Lista de inscritos será preenchida aqui -->
        </ul>
        <h2>Lista de Presença:</h2>
        <ul id="lista_presentes">
            <!-- Lista de presenças será preenchida aqui -->
        </ul>
    </div>
    <script src="../js/script.js"></script>
      <footer>
    <p>Instituto Federal Sul-rio-grandense - Campus Passo Fundo | Disciplina: Criação de Páginas Web</p>
  </footer>
</body>
</html>
```

### Página até então:

![alt text](site_semana_1.png)
