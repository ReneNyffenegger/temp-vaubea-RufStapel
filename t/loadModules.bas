option explicit

 ' public dirRufStapel as string
  ' dim dirWinAPI    as string
  
' public const dirRufStapel  = "f:\work\RufStapel\"             ' "
  public const dirRufStapel  = "c:\temp\temp-vaubea-RufStapel\" ' "

' public const  dirWinAPI    = "F:\Task-Automator\"             ' "
  public const  dirWinAPI    = "C:\github\WinAPI-4-VBA\"        ' "

sub loadThem()

  call loadOrReplaceModuleWithFile("WinAPI"   , "C:\github\WinAPI-4-VBA\WinAPI.bas"            )

  call importModuleOrClass        ("RufStapel", "C:\temp\temp-vaubea-RufStapel\o\RufStapel.cls")

  call loadOrReplaceModuleWithFile("WinAPI"   , dirWinAPI    & "WinAPI.bas"      )

  call importModuleOrClass        ("RufStapel", dirRufStapel & "\o\RufStapel.cls")

  call loadOrReplaceModuleWithFile("test"     , dirRufStapel & "\t\test.bas"     )
  call loadOrReplaceModuleWithFile("todo"     , dirRufStapel & "\t\todo.txt"     )

end sub
