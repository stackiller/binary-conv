## Simples conversor de texto e números para binário.

Para usar siga os passos abaixo:
 
## Compile
 
```sh
$ cc binconv.c -o binconv -Wall
```
 
## Como usar:
 
### Para arquivos de texto:
Especifique a flag: --text

```sh
$ declare -a text=$(cat text.example)
$ ./binconv --text $text
```

ou simplesmente

```sh
$ ./binconv --text $(cat text.example)
```

### Para números

Especifique a flag: --number
```sh
$ ./binconv --number 1 2 3 10 2
```

Bom proveito .__."
