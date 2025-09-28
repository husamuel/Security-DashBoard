# 📋 Backlog Geral – Security Dashboard

## 🔹 Equipa 1 – Infraestrutura e DevOps (husamuel, edfreder)
*Responsável por containers, orquestração e deploy.*

### Backlog
- Criar Dockerfile do backend (FastAPI + Uvicorn).
- Criar Dockerfile do frontend (build React + Nginx).
- Atualizar `docker-compose.yml` para incluir:
  - backend, frontend, db, security (Trivy runner).
- Criar volumes (`db_data`, `logs_data`, `security_data`).
- Criar rede Docker (`security-dashboard-net`).
- Criar `.env` com variáveis (`DB_USER`, `DB_PASS`, `API_URL`).
- Criar `docker-compose.override.yml` (dev com hot reload).
- Criar `docker-compose.prod.yml` (build otimizado).
- Configurar CI/CD (GitHub Actions) para build, testes e deploy.
- Criar script `deploy.sh` para simplificar deploy.

---

## 🔹 Equipa 2 – Backend e Integração de Dados (mreinald, tfilipe)
*Responsável pela API que serve dados ao frontend.*

### Backlog
- Implementar `/vulnerabilities` → resumo do `security/report.json`.
- Implementar `/security-report` → devolve relatório JSON completo.
- Implementar `/metrics` → devolver métricas simuladas (CPU, memória, uptime).
- Implementar `/logs` → devolver logs (mesmo que simulados no início).
- Implementar `/alerts` → gerar alertas automáticos de vulnerabilidades críticas.
- Integrar com DB container para persistência de logs e métricas.
- Implementar autenticação JWT para rotas protegidas (`/logs`, `/metrics`, `/alerts`).
- Criar estrutura modular (`routes`, `services`, `models`).
- Documentar API com Swagger/OpenAPI.
- Criar testes unitários e de integração.

---

## 🔹 Equipa 3 – Frontend e UX (ddo-carm, aaugusto, +1 membro)
*Responsável pelo dashboard e experiência do utilizador.*

### Backlog
- Criar layout base (menu lateral + cabeçalho).
- Criar Home:
  - Mostrar status `/health`.
  - Mostrar info `/info`.
- Criar página Vulnerabilidades:
  - Consumir `/vulnerabilities`.
  - Mostrar gráfico (crit/alto/médio/baixo).
  - Mostrar lista detalhada (`/security-report`).
- Criar página Métricas:
  - Consumir `/metrics`.
  - Mostrar gráficos de CPU, memória, uptime.
- Criar página Logs:
  - Consumir `/logs`.
  - Mostrar tabela com filtros (nível/data) + pesquisa.
- Criar página Alertas:
  - Consumir `/alerts`.
  - Mostrar lista + badge de notificação.
- Implementar login/logout com JWT.
- Proteger rotas privadas (logs, métricas, alertas).
- Criar modo responsivo (mobile/desktop).
- Implementar dark/light mode (opcional).
- Atualizar documentação com screenshots.

---

## 🔹 Equipa 4 – Segurança e Monitoramento (joao-rib, adcampos)
*Responsável por scans automáticos, relatórios e alertas.*

### Backlog
- Criar `scan.sh` para automatizar análise em múltiplas imagens (backend, frontend, db).
- Exportar sempre relatório JSON em `security/report.json`.
- Atualizar `report.md` automaticamente com resumo.
- Criar histórico de relatórios (`report_YYYY-MM-DD.json`).
- Integrar com backend (garantir que ele lê `report.json`).
- Criar alerta automático (ex: gerar JSON se vulnerabilidades críticas > 0).
- Configurar cronjob/GitHub Action para correr scans diariamente.
- Opcional: enviar notificações (Slack/Email) para vulnerabilidades críticas.
