/*# Scan a Docker image for vulnerabilities
trivy image nginx:latest

# Scan source code for IaC misconfigurations
trivy config ./my-terraform-code
*/

//Exemplo muito duvidoso
// TODO = Por fazer, ou revisitar
// REDO = Reavaliar ou refazer o segmento

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Define the image to scan // REDO
	const char *image = "nginx:latest";

	// TODO Possivelmente verificar se Trivy esta instalado antes de correr este comando?

	// Construct the command string // REDO
	char command[256];
	snprintf(command, sizeof(command), "./src/scan.sh %s", image);

	// Run the scan // REDO
	int ret = system(command);
	if (ret != 0)
	{
		fprintf(stderr, "Error: Trivy scan failed.\n");
			return 1;
	}

	// Open the results file // REDO
	FILE *fp = fopen("security/report.json", "r");
	if (!fp)
	{
		perror("Failed to open results file");
		return 1;
	}

	// Open a new file // REDO
	FILE *out = fopen("./report.md", "w");
	if (!out)
	{
		perror("Failed to open output file");
		fclose(fp);
		return 1;
	}

	// Process or save the results (here we just copy to the second file) // REDO
	char buffer[1024];
	size_t n;
	while ((n = fread(buffer, 1, sizeof(buffer), fp)) > 0)
	{
		fwrite(buffer, 1, n, out);
	}

	fclose(fp);
	fclose(out);

	printf("Scan complete. Results saved to ./report.md\n");
	return 0;
}


/*Expected "security/report.json" file:

{
  "SchemaVersion": 2,
  "ArtifactName": "nginx:latest",
  "ArtifactType": "container_image",
  "Metadata": {
    "OS": {
      "Family": "debian",
      "Name": "11.5"
    },
    "ImageID": "sha256:abc123...",
    "DiffIDs": [
      "sha256:def456...",
      "sha256:ghi789..."
    ]
  },
  "Results": [
    {
      "Target": "nginx:latest (debian 11.5)",
      "Class": "os-pkgs",
      "Type": "debian",
      "Vulnerabilities": [
        {
          "VulnerabilityID": "CVE-2022-12345",
          "PkgName": "libc-bin",
          "InstalledVersion": "2.31-13+deb11u3",
          "FixedVersion": "2.31-13+deb11u4",
          "Severity": "HIGH",
          "Title": "Buffer overflow in libc",
          "Description": "A buffer overflow vulnerability in libc...",
          "References": [
            "https://security-tracker.debian.org/tracker/CVE-2022-12345",
            "https://nvd.nist.gov/vuln/detail/CVE-2022-12345"
          ]
        },
        {
          "VulnerabilityID": "CVE-2021-99999",
          "PkgName": "openssl",
          "InstalledVersion": "1.1.1k-1",
          "FixedVersion": "1.1.1l-1",
          "Severity": "MEDIUM",
          "Title": "SSL certificate validation issue",
          "Description": "Improper validation in OpenSSL...",
          "References": [
            "https://www.openssl.org/news/secadv/2021.txt"
          ]
        }
      ]
    }
  ]
}
*/