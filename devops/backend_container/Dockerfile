FROM python:3.9
WORKDIR /app   # Crio dentro do container uma pasta
COPY . backend.py # Copio o meu backend para dentro do container
RUN pip install --no-cache-dir flask     # instala bibliotecas externas
CMD ["python", "backend.py"]
EXPOSE 5001

# --no-cache-dir serve para não guardar ficheiros temporários