#!/bin/bash
i=1
for file in $(ls -p /home/gersom/Escritorio | grep -v /); do
  echo "Archivo $i: $file"
  ((i++))
done
