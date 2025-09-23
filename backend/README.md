## Instalação

1. Ativar o venv
   - Windows: .\venv\Scripts\Activate.ps1
   - Linux/macOS: source venv/bin/activate
2. Instalar dependências:
   pip install -r requirements.txt

## Para Executar a API
uvicorn main:app --reload

## Rotas Criadas
- /health → vai retornar {"status": "ok"}
- /info → vai retornar {"project": "...", "version": "..."}
