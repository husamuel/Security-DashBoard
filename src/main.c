/*# Scan a Docker image for vulnerabilities
trivy image nginx:latest

# Scan source code for IaC misconfigurations
trivy config ./my-terraform-code
*/

/*Exemplo muito duvidoso

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define the image to scan
    const char *image = "nginx:latest";

    // # TODO Possivelmente verificar se Trivy esta instalado antes de correr este comando?

    // Construct the command string
    char command[256];
    snprintf(command, sizeof(command), "./src/scan.sh %s", image);

    // Run the scan
    int ret = system(command);
    if (ret != 0) {
        fprintf(stderr, "Error: Trivy scan failed.\n");
        return 1;
    }

    // Open the results file
    FILE *fp = fopen("security/report.json", "r");
    if (!fp) {
        perror("Failed to open results file");
        return 1;
    }

    // Process or save the results (here we just copy to another file)
    FILE *out = fopen("./report.md", "w");
    if (!out) {
        perror("Failed to open output file");
        fclose(fp);
        return 1;
    }

    char buffer[1024];
    size_t n;
    while ((n = fread(buffer, 1, sizeof(buffer), fp)) > 0) {
        fwrite(buffer, 1, n, out);
    }

    fclose(fp);
    fclose(out);

    printf("Scan complete. Results saved to ./report.md\n");
    return 0;
}
*/