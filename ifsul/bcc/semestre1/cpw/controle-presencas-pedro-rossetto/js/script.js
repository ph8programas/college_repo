const form_inscricao = document.getElementById("form_inscricao");
const form_presenca = document.getElementById("form_presenca");

form_inscricao.addEventListener("submit", handleFormSubmit);
form_presenca.addEventListener("submit", handleFormSubmit);

function handleFormSubmit(event) {
  event.preventDefault();
  const form = event.target;
  const form_data = new FormData(form);
  const lista_inscritos = document.getElementById("lista_inscritos");
  const nome = form_data.get("name");
  const nomeFormatado = nome
    .toLowerCase()
    .split(/\s+/)
    .map((word) => word.charAt(0).toUpperCase() + word.slice(1))
    .join(" ");
  const email = form_data.get("email").toLowerCase().trim();

  // Test to see from where the event is
  if (form === form_inscricao) {
    if (form === form_inscricao) {
      const li = document.createElement("li");
      li.textContent = `Nome: ${nomeFormatado}, Email: ${email}`;
      lista_inscritos.appendChild(li);
      form.reset();
      alert("Inscrição realizada com sucesso!");
    } else if (form === form_presenca) {
      // Verifica se o email já está registrado
      const lista_presentes = document.getElementById("lista_presentes");
      if (isEmailInscrito(email)) {
        const li = document.createElement("li");
        li.textContent = `Presença registrada para: ${nomeFormatado}, Email: ${email}`;
        lista_presentes.appendChild(li);
        form.reset();
        alert("Presença registrada com sucesso!");
      } else {
        alert("Email não encontrado na lista de inscritos.");
      }
    }
  }
}

// função para verificar se o email já está registrado
function isEmailInscrito(email) {
  const lista_inscritos = document.getElementById("lista_inscritos");
  const items = lista_inscritos.querySelectorAll("li");
  for (const item of items) {
    const match = item.textContent.match(/Email:\s*(.+)$/i);
    if (match && match[1].trim() === email) {
      return true;
    }
  }
  return false;
}
