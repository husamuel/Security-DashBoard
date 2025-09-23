FROM node:18         # Node.js LTS -> Possivel ambiente de execucao para frontend
WORKDIR /app         # Cria pasta dentro do container
COPY . .             # Copia todo o codigo do frontend para dentro do container
RUN npm install      # Instala dependencias React + Tailwind (Possiveis tecnologias frontend)
CMD ["npm", "start"] # Roda a aplicacao em modo de desenvolvimento
EXPOSE 3000          # Porta padrao React dev server
