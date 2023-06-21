

.model small

.stack

.data

    msg db "Hola Mundo","$"
.code

main PROC
    MOV AX, SEG msg
    MOV DS, AX
    MOV AH,09H
    LEA DX,msg
    INT 21H
    .exit
    main ENDP
END