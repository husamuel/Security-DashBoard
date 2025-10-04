#Exemplo

# trivy image -q -f json -o security/report.json "$1"

# TODO "In production, you might want to run Trivy with the --quiet and --exit-code flags for CI/CD compatibility"
# TODO Sera preciso instalar Trivy antes de correr este comando?