#!/bin/bash

mkdir -p carpetaArchivos
cd carpetaArchivos
touch a1.txt b2.txt c3.txt prueba1.txt prueba2.txt papaya.txt

read -p "Ingrese una letra inicial: " letra

for archivo in ${letra}*.txt; do
  if [ -f "$archivo" ]; then
    nuevo="${archivo%.txt}.sh"
    mv "$archivo" "$nuevo"
    echo "Renombrado: $archivo -> $nuevo"
  fi
done
