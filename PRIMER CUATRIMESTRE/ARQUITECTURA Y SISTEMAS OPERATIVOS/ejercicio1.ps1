Get-ChildItem -Path "C:\Users\NoxiePC\Desktop" -File -Force | Where-Object { -not $_.Attributes.ToString().Contains("Hidden") }
