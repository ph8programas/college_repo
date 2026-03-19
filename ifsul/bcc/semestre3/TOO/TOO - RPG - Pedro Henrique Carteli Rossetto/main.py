from missao import Missao
from personagem import Personagem

p_Pedro = Personagem("Pedro", 100, 1, 0)
p_Pedro2 = Personagem("Pedro", 100, 1, 0)
m_Resgatar = Missao("Resgatar a Princesa", "Resgatar a princesa do castelo do dragão", 20, "PENDENTE")
m_Resgatar2 = Missao("Resgatar a Princesa", "Resgatar a princesa do castelo do dragão", 20, "PENDENTE")

p_Pedro.exibir_informacoes()
m_Resgatar.exibir_informacoes()

# Usando __str__
print("\n--- Usando __str__ ---")
print(str(p_Pedro))
print(str(m_Resgatar))

# Usando __eq__
print("\n--- Usando __eq__ ---")
print(f"p_Pedro == p_Pedro2: {p_Pedro == p_Pedro2}")
print(f"m_Resgatar == m_Resgatar2: {m_Resgatar == m_Resgatar2}")

