
## Backlog

    - Criar scan.sh para automatizar análise em múltiplas imagens (backend, frontend, db).
    - Exportar sempre relatório JSON em security/report.json.
    - Atualizar report.md automaticamente com resumo.
    - Criar histórico de relatórios (report_YYYY-MM-DD.json).
    - Integrar com backend (garantir que ele lê report.json).
    - Criar alerta automático (ex: gerar JSON se vulnerabilidades críticas > 0).
    - Configurar cronjob/GitHub Action para correr scans diariamente.
    - Opcional: enviar notificações (Slack/Email) para vulnerabilidades críticas.

## Equipa 4 – Segurança e Monitoramento
**Membros:** joao-rib, adcampos
**Pasta de trabalho:** `security/`
**Conteúdo final esperado:** Relatório JSON + resumo em Markdown + README.md
**Instalar:** Trivy + Docker

### Semana 1 - Tarefas:
- Criar a pasta `security/` no repositório.
- Usar o Trivy para analisar uma imagem Docker (ex: Nginx).
- Exportar os resultados em JSON e guardar no repositório.
- Criar um relatório em Markdown (`report.md`) com resumo dos problemas encontrados (ex: número de vulnerabilidades críticas, médias, baixas).
- Escrever um `README.md` explicando o que é o Trivy, como instalar e como correr a análise.
- Fazer commit e push para o GitHub.

### Semana 2 - Tarefas

- Criar script scan.sh que roda Trivy em pelo menos 2 imagens (ex: nginx:latest e python:3.9).
- Exportar resultados para report.json dentro de security/.
- Criar report.md com resumo automático:
    - Nº vulnerabilidades críticas, altas, médias, baixas.
- Testar integração → garantir que o backend consegue ler report.json.
- Documentar no README.md (como correr scan e gerar relatórios).

📌 Entrega Semana 2
Relatório JSON atualizado + resumo em Markdown.