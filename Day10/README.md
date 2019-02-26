# Day 10

Vim configuration

Vim is user configurable. If you take Linux Platform as a huge IDE, then Vim is a super cool editor.

> Q: Where to config? 
A: `~/.vimrc`

## My Configuration

```
syntax on
set nu
set ts=4
set shiftwidth=4
set expandtab
filetype on
filetype indent on
filetype plugin on

" Quick Run

map <F5> : call CompileRunGcc()<CR>

func! CompileRunGcc()
        exec "w" 
        if &filetype == 'c' 
                exec '!gcc % -o %<'
                exec '!time ./%<'
        elseif &filetype == 'cpp'
                exec '!g++ % -o %<'
                exec '!time ./%<'
        endif
endfunc

map <F6> : call CompileRunMake()<CR>

func! CompileRunMake()
        exec "w" 
        exec '!make'
        exec '!time ./%<'
endfunc
```

## Reference

1. [vim boostrap](https://vim-bootstrap.com/)
2. [github sample](https://github.com/amix/vimrc)

