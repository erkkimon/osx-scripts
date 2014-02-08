# This file is meant to be included in ~/.bash_profile

# Open remote IRC client with one command
alias irc="ssh -t usernamen@domain.tld screen -DRU"

# Resumable encrypted file transfers, used exactly like scp
alias rscp="rsync -avzP"

# Resume rscp transfer, just replace rscp with rscp-resume
alias rscp-resume="rsync --partial --progress --rsh=ssh"

# Pushes altered files to github w/ comment given as parameter: pushit "foo bar"
pushit() { git add -A && git commit -m "$@" && git push ;}