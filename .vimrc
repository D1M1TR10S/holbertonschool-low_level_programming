set autoindent
set smartindent
set tabstop=8 shiftwidth=8
set cindent
set number
syntax enable
au FileType python set1 tabstop=8 softtabstop=0 expandtab shiftwidth=4 smarttab
au BufWritePost * if getline(1) =~ "^#!" | silent !chmod u+x % | endif
