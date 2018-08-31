option explicit

sub loadThem()

  call loadOrReplaceModuleWithFile("WinAPI"   , "C:\github\WinAPI-4-VBA\WinAPI.bas"            )

  call importModuleOrClass        ("RufStapel", "C:\temp\temp-vaubea-RufStapel\o\RufStapel.cls")

  call loadOrReplaceModuleWithFile("test"     , "C:\temp\temp-vaubea-RufStapel\t\test.bas"     )

end sub
