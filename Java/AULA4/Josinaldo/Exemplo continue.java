String[] frases = {"Oi", "Tchau"};
for (String frase1 : frases)
{
for (String frase2 : frases)
{
if (frase2.equals("Tchau")) break;
System.out.print(frase2 + ":");
}
}
