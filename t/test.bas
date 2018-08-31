option explicit

sub main()

    Rufstapel.enable "falle"

    f1
end sub

sub f1()
    f2
end sub

sub f2()
    f3
end sub

sub f3()
    dim i as integer
    i = 5/0
end sub
