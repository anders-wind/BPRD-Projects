fslex --unicode CLex.fsl
fsyacc --module CPar CPar.fsy
fsi -r %HOMEDRIVE%%HOMEPATH%/FsYacc/Bin/FsLexYacc.Runtime.dll Absyn.fs CPar.fs CLex.fs Parse.fs Machine.fs Comp.fs ParseAndComp.fs"