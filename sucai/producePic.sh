#!/bin/bash

SERVICES=('beavis.zen' 'blowfish' 'bong' 'bud-frogs' 'bunny' 'cheese' 'cower' 'daemon' 'default' 
	'dragon' 'dragon-and-cow' 'elephant' 'elephant-in-snake' 'eyes' 'flaming-sheep' 'ghostbusters'
	'head-in' 'hellokitty' 'kiss' 'kitty' 'koala' 'kosh' 'luke-koala' 'meow' 'milk' 'moofasa' 'moose'
	'mutilated' 'ren' 'satanic' 'sheep' 'skeleton' 'small' 'sodomized' 'stegosaurus' 'stimpy'
	'supermilker' 'surgery' 'telebears' 'three-eyes' 'turkey' 'turtle' 'tux' 'udder' 'vader'
	'vader-koala' 'www'
	)

for x in ${SERVICES[*]}：
do
    echo 'restart service: '$x
    #/usr/local/bin/supervisorctl restart $x
    # 每隔 5 分钟重启一个服务
    filename=${x}".txt"
    echo $filename
    cowsay -f $x "hello" > $filename
    echo 'sleep 5 minutes'
    #sleep 3
done


########################
###bash producePic.sh###
########################