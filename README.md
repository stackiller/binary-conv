 ## Conversor de texto e números para Binário.
 
 Abaixo algumas instruções do modo de uso e compilação ..
 
 ## compile 
```sh
$ cc binconv.c -o binconv -Wall
```
 
## como usar:
 
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
