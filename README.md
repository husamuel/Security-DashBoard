# Security-DashBoard

<img width="476" height="309" alt="image" src="https://github.com/user-attachments/assets/1aa9c5a2-01bb-4bb4-a315-a58e9a6d5c5d" />

# Semana 1 – Setup e Primeiros Passos

Começa: **22 Setembro**    
Prazo final: **29 Setembro**

- Cada equipa tem liberdade para escolher as ferramentas que preferir, desde que cumpram as tarefas propostas.
- Se quiserem ir além do que está listado, estão à vontade; posso disponibilizar as tarefas das próximas semanas caso queiram avançar mais rápido.
- É necessário que se organizem internamente para dividir e coordenar as tarefas entre os membros da equipa.
- Em caso de dúvidas ou dificuldades, contactem-me sem hesitar.

## Equipa 1 – DevOps
**Pasta de trabalho:** `devops/`  
**Conteúdo final esperado:** Dockerfile + docker-compose.yml + README.md  
**Instalar:** Docker  

### Tarefas:
- Criar a pasta `devops/` no repositório.  
- Criar um `Dockerfile` simples que levante um servidor básico.  
- Criar um ficheiro `docker-compose.yml` para orquestrar o container.  
- Escrever um guia (`README.md`) com instruções de como correr o container.  
- Testar localmente o build e o run do container.  
- Fazer commit e push para o GitHub.  

---

## Equipa 2 – Backend
**Pasta de trabalho:** `backend/`  
**Conteúdo final esperado:** API com duas rotas + README.md  
**Instalar:** Python 3.9+, pip  

### Tarefas:
- Criar a pasta `backend/` no repositório.  
- Criar o ficheiro `requirements.txt` (FastAPI + Uvicorn).  
- Criar `main.py` com uma rota simples `/health`.  
- Acrescentar uma segunda rota `/info` que devolve uma mensagem estática (ex: nome do projeto e versão).  
- Escrever um `README.md` com instruções para correr a API.  
- Testar se a API responde localmente.  
- Fazer commit e push para o GitHub.  

---

## Equipa 3 – Frontend
**Pasta de trabalho:** `frontend/`  
**Conteúdo final esperado:** Projeto React/Tailwind + componente de HealthCheck + README.md  
**Instalar:** Node.js LTS + npm  

### Tarefas:
- Criar a pasta `frontend/` no repositório.  
- Inicializar o projeto com React + Vite.  
- Instalar e configurar TailwindCSS.  
- Criar uma página inicial simples com o título do projeto e um layout base (menu ou cabeçalho).  
- Adicionar um componente `HealthCheck` que simula uma chamada à rota `/health` do backend e mostra “Backend Online” ou “Offline”.  
- Escrever um `README.md` com instruções para correr o projeto.  
- Fazer commit e push para o GitHub.  

---

## Equipa 4 – Segurança
**Pasta de trabalho:** `security/`  
**Conteúdo final esperado:** Relatório JSON + resumo em Markdown + README.md  
**Instalar:** Trivy + Docker  

### Tarefas:
- Criar a pasta `security/` no repositório.  
- Usar o Trivy para analisar uma imagem Docker (ex: Nginx).  
- Exportar os resultados em JSON e guardar no repositório.  
- Criar um relatório em Markdown (`report.md`) com resumo dos problemas encontrados (ex: número de vulnerabilidades críticas, médias, baixas).  
- Escrever um `README.md` explicando o que é o Trivy, como instalar e como correr a análise.  
- Fazer commit e push para o GitHub.  
