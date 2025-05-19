
#include <vector>
#include <iostream>

class VetorFunctions {

public:
	void CoutVetElements(const std::vector<int> &vetor) const;
	std::vector<int> inverterOrdem(const std::vector<int> &vet);
	std::vector<int> VetElementInput(int tam_vet, int limite_inferior, int limite_superior);
};
