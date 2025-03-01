; ModuleID = 'nsieve-bits.c'
source_filename = "nsieve-bits.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"SGX\00", section "llvm.metadata"
@.str.1 = private unnamed_addr constant [14 x i8] c"nsieve-bits.c\00", section "llvm.metadata"
@.str.2 = private unnamed_addr constant [16 x i8] c"memsize(12, 12)\00", section "llvm.metadata"
@.str.3 = private unnamed_addr constant [6 x i8] c"TAFUN\00", section "llvm.metadata"
@.str.4 = private unnamed_addr constant [22 x i8] c"Primes up to %8d %8d\0A\00", align 1, !dbg !0
@.str.5 = private unnamed_addr constant [19 x i8] c"use time: %.3f ms\0A\00", align 1, !dbg !7
@.str.6 = private unnamed_addr constant [48 x i8] c"**********************************************\0A\00", align 1, !dbg !12
@llvm.global.annotations = appending global [3 x { ptr, ptr, ptr, i32, ptr }] [{ ptr, ptr, ptr, i32, ptr } { ptr @d_ns, ptr @.str, ptr @.str.1, i32 20, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_ns, ptr @.str.2, ptr @.str.1, i32 20, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_ns, ptr @.str.3, ptr @.str.1, i32 20, ptr null }], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @d_ns(ptr noundef %0, ptr noundef %1) #0 !dbg !35 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca ptr, align 8
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca i32, align 4
  %11 = alloca i32, align 4
  store ptr %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !40, metadata !DIExpression()), !dbg !41
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !42, metadata !DIExpression()), !dbg !43
  call void @llvm.dbg.declare(metadata ptr %5, metadata !44, metadata !DIExpression()), !dbg !45
  call void @llvm.dbg.declare(metadata ptr %6, metadata !46, metadata !DIExpression()), !dbg !47
  store i32 40960000, ptr %6, align 4, !dbg !47
  call void @llvm.dbg.declare(metadata ptr %7, metadata !48, metadata !DIExpression()), !dbg !49
  %12 = load i32, ptr %6, align 4, !dbg !50
  %13 = udiv i32 %12, 8, !dbg !50
  %14 = zext i32 %13 to i64, !dbg !50
  %15 = add i64 %14, 4, !dbg !50
  %16 = call noalias ptr @malloc(i64 noundef %15) #6, !dbg !51
  store ptr %16, ptr %7, align 8, !dbg !49
  %17 = load ptr, ptr %7, align 8, !dbg !52
  %18 = icmp ne ptr %17, null, !dbg !52
  br i1 %18, label %20, label %19, !dbg !54

19:                                               ; preds = %2
  br label %114, !dbg !55

20:                                               ; preds = %2
  store i32 0, ptr %5, align 4, !dbg !56
  br label %21, !dbg !58

21:                                               ; preds = %109, %20
  %22 = load i32, ptr %5, align 4, !dbg !59
  %23 = icmp ule i32 %22, 2, !dbg !61
  br i1 %23, label %24, label %112, !dbg !62

24:                                               ; preds = %21
  call void @llvm.dbg.declare(metadata ptr %8, metadata !63, metadata !DIExpression()), !dbg !65
  call void @llvm.dbg.declare(metadata ptr %9, metadata !66, metadata !DIExpression()), !dbg !67
  call void @llvm.dbg.declare(metadata ptr %10, metadata !68, metadata !DIExpression()), !dbg !69
  store i32 0, ptr %10, align 4, !dbg !69
  call void @llvm.dbg.declare(metadata ptr %11, metadata !70, metadata !DIExpression()), !dbg !71
  %25 = load i32, ptr %6, align 4, !dbg !72
  %26 = load i32, ptr %5, align 4, !dbg !73
  %27 = lshr i32 %25, %26, !dbg !74
  store i32 %27, ptr %11, align 4, !dbg !71
  %28 = load ptr, ptr %7, align 8, !dbg !75
  %29 = load i32, ptr %11, align 4, !dbg !76
  %30 = udiv i32 %29, 8, !dbg !76
  %31 = zext i32 %30 to i64, !dbg !76
  %32 = add i64 %31, 4, !dbg !76
  call void @llvm.memset.p0.i64(ptr align 4 %28, i8 -1, i64 %32, i1 false), !dbg !77
  store i32 2, ptr %8, align 4, !dbg !78
  br label %33, !dbg !80

33:                                               ; preds = %95, %24
  %34 = load i32, ptr %8, align 4, !dbg !81
  %35 = load i32, ptr %11, align 4, !dbg !83
  %36 = icmp ule i32 %34, %35, !dbg !84
  br i1 %36, label %37, label %98, !dbg !85

37:                                               ; preds = %33
  %38 = load ptr, ptr %7, align 8, !dbg !86
  %39 = load i32, ptr %8, align 4, !dbg !86
  %40 = zext i32 %39 to i64, !dbg !86
  %41 = udiv i64 %40, 32, !dbg !86
  %42 = getelementptr inbounds i32, ptr %38, i64 %41, !dbg !86
  %43 = load i32, ptr %42, align 4, !dbg !86
  %44 = load i32, ptr %8, align 4, !dbg !86
  %45 = zext i32 %44 to i64, !dbg !86
  %46 = urem i64 %45, 32, !dbg !86
  %47 = trunc i64 %46 to i32, !dbg !86
  %48 = shl i32 1, %47, !dbg !86
  %49 = and i32 %43, %48, !dbg !86
  %50 = icmp ne i32 %49, 0, !dbg !86
  br i1 %50, label %51, label %94, !dbg !88

51:                                               ; preds = %37
  %52 = load i32, ptr %10, align 4, !dbg !89
  %53 = add i32 %52, 1, !dbg !89
  store i32 %53, ptr %10, align 4, !dbg !89
  %54 = load i32, ptr %8, align 4, !dbg !91
  %55 = load i32, ptr %8, align 4, !dbg !93
  %56 = add i32 %54, %55, !dbg !94
  store i32 %56, ptr %9, align 4, !dbg !95
  br label %57, !dbg !96

57:                                               ; preds = %89, %51
  %58 = load i32, ptr %9, align 4, !dbg !97
  %59 = load i32, ptr %11, align 4, !dbg !99
  %60 = icmp ule i32 %58, %59, !dbg !100
  br i1 %60, label %61, label %93, !dbg !101

61:                                               ; preds = %57
  %62 = load ptr, ptr %7, align 8, !dbg !102
  %63 = load i32, ptr %9, align 4, !dbg !102
  %64 = zext i32 %63 to i64, !dbg !102
  %65 = udiv i64 %64, 32, !dbg !102
  %66 = getelementptr inbounds i32, ptr %62, i64 %65, !dbg !102
  %67 = load i32, ptr %66, align 4, !dbg !102
  %68 = load i32, ptr %9, align 4, !dbg !102
  %69 = zext i32 %68 to i64, !dbg !102
  %70 = urem i64 %69, 32, !dbg !102
  %71 = trunc i64 %70 to i32, !dbg !102
  %72 = shl i32 1, %71, !dbg !102
  %73 = and i32 %67, %72, !dbg !102
  %74 = icmp ne i32 %73, 0, !dbg !102
  br i1 %74, label %75, label %88, !dbg !104

75:                                               ; preds = %61
  %76 = load i32, ptr %9, align 4, !dbg !105
  %77 = zext i32 %76 to i64, !dbg !105
  %78 = urem i64 %77, 32, !dbg !105
  %79 = trunc i64 %78 to i32, !dbg !105
  %80 = shl i32 1, %79, !dbg !105
  %81 = load ptr, ptr %7, align 8, !dbg !105
  %82 = load i32, ptr %9, align 4, !dbg !105
  %83 = zext i32 %82 to i64, !dbg !105
  %84 = udiv i64 %83, 32, !dbg !105
  %85 = getelementptr inbounds i32, ptr %81, i64 %84, !dbg !105
  %86 = load i32, ptr %85, align 4, !dbg !105
  %87 = xor i32 %86, %80, !dbg !105
  store i32 %87, ptr %85, align 4, !dbg !105
  br label %88, !dbg !105

88:                                               ; preds = %75, %61
  br label %89, !dbg !102

89:                                               ; preds = %88
  %90 = load i32, ptr %8, align 4, !dbg !106
  %91 = load i32, ptr %9, align 4, !dbg !107
  %92 = add i32 %91, %90, !dbg !107
  store i32 %92, ptr %9, align 4, !dbg !107
  br label %57, !dbg !108, !llvm.loop !109

93:                                               ; preds = %57
  br label %94, !dbg !112

94:                                               ; preds = %93, %37
  br label %95, !dbg !86

95:                                               ; preds = %94
  %96 = load i32, ptr %8, align 4, !dbg !113
  %97 = add i32 %96, 1, !dbg !113
  store i32 %97, ptr %8, align 4, !dbg !113
  br label %33, !dbg !114, !llvm.loop !115

98:                                               ; preds = %33
  %99 = load i32, ptr %11, align 4, !dbg !117
  %100 = load ptr, ptr %3, align 8, !dbg !118
  %101 = load i32, ptr %5, align 4, !dbg !119
  %102 = zext i32 %101 to i64, !dbg !120
  %103 = getelementptr inbounds i32, ptr %100, i64 %102, !dbg !120
  store i32 %99, ptr %103, align 4, !dbg !121
  %104 = load i32, ptr %10, align 4, !dbg !122
  %105 = load ptr, ptr %4, align 8, !dbg !123
  %106 = load i32, ptr %5, align 4, !dbg !124
  %107 = zext i32 %106 to i64, !dbg !125
  %108 = getelementptr inbounds i32, ptr %105, i64 %107, !dbg !125
  store i32 %104, ptr %108, align 4, !dbg !126
  br label %109, !dbg !127

109:                                              ; preds = %98
  %110 = load i32, ptr %5, align 4, !dbg !128
  %111 = add i32 %110, 1, !dbg !128
  store i32 %111, ptr %5, align 4, !dbg !128
  br label %21, !dbg !129, !llvm.loop !130

112:                                              ; preds = %21
  %113 = load ptr, ptr %7, align 8, !dbg !132
  call void @free(ptr noundef %113) #7, !dbg !133
  br label %114, !dbg !134

114:                                              ; preds = %112, %19
  ret void, !dbg !135
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: nounwind allocsize(0)
declare noalias ptr @malloc(i64 noundef) #2

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: write)
declare void @llvm.memset.p0.i64(ptr nocapture writeonly, i8, i64, i1 immarg) #3

; Function Attrs: nounwind
declare void @free(ptr noundef) #4

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 !dbg !136 {
  %1 = alloca i32, align 4
  %2 = alloca i64, align 8
  %3 = alloca [3 x i32], align 4
  %4 = alloca [3 x i32], align 4
  %5 = alloca i32, align 4
  %6 = alloca i64, align 8
  %7 = alloca double, align 8
  store i32 0, ptr %1, align 4
  call void @llvm.dbg.declare(metadata ptr %2, metadata !140, metadata !DIExpression()), !dbg !143
  %8 = call i64 @clock() #7, !dbg !144
  store i64 %8, ptr %2, align 8, !dbg !143
  call void @llvm.dbg.declare(metadata ptr %3, metadata !145, metadata !DIExpression()), !dbg !149
  call void @llvm.dbg.declare(metadata ptr %4, metadata !150, metadata !DIExpression()), !dbg !151
  %9 = getelementptr inbounds [3 x i32], ptr %3, i64 0, i64 0, !dbg !152
  %10 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 0, !dbg !153
  call void @d_ns(ptr noundef %9, ptr noundef %10), !dbg !154
  call void @llvm.dbg.declare(metadata ptr %5, metadata !155, metadata !DIExpression()), !dbg !157
  store i32 0, ptr %5, align 4, !dbg !157
  br label %11, !dbg !158

11:                                               ; preds = %24, %0
  %12 = load i32, ptr %5, align 4, !dbg !159
  %13 = icmp slt i32 %12, 3, !dbg !161
  br i1 %13, label %14, label %27, !dbg !162

14:                                               ; preds = %11
  %15 = load i32, ptr %5, align 4, !dbg !163
  %16 = sext i32 %15 to i64, !dbg !165
  %17 = getelementptr inbounds [3 x i32], ptr %3, i64 0, i64 %16, !dbg !165
  %18 = load i32, ptr %17, align 4, !dbg !165
  %19 = load i32, ptr %5, align 4, !dbg !166
  %20 = sext i32 %19 to i64, !dbg !167
  %21 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 %20, !dbg !167
  %22 = load i32, ptr %21, align 4, !dbg !167
  %23 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, i32 noundef %18, i32 noundef %22), !dbg !168
  br label %24, !dbg !169

24:                                               ; preds = %14
  %25 = load i32, ptr %5, align 4, !dbg !170
  %26 = add nsw i32 %25, 1, !dbg !170
  store i32 %26, ptr %5, align 4, !dbg !170
  br label %11, !dbg !171, !llvm.loop !172

27:                                               ; preds = %11
  call void @llvm.dbg.declare(metadata ptr %6, metadata !174, metadata !DIExpression()), !dbg !175
  %28 = call i64 @clock() #7, !dbg !176
  store i64 %28, ptr %6, align 8, !dbg !175
  call void @llvm.dbg.declare(metadata ptr %7, metadata !177, metadata !DIExpression()), !dbg !178
  %29 = load i64, ptr %6, align 8, !dbg !179
  %30 = load i64, ptr %2, align 8, !dbg !180
  %31 = sub nsw i64 %29, %30, !dbg !181
  %32 = sitofp i64 %31 to double, !dbg !182
  %33 = fdiv double %32, 1.000000e+06, !dbg !183
  %34 = fmul double %33, 1.000000e+03, !dbg !184
  store double %34, ptr %7, align 8, !dbg !178
  %35 = load double, ptr %7, align 8, !dbg !185
  %36 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, double noundef %35), !dbg !186
  %37 = call i32 (ptr, ...) @printf(ptr noundef @.str.6), !dbg !187
  ret i32 0, !dbg !188
}

; Function Attrs: nounwind
declare i64 @clock() #4

declare i32 @printf(ptr noundef, ...) #5

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nounwind allocsize(0) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nocallback nofree nounwind willreturn memory(argmem: write) }
attributes #4 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #6 = { nounwind allocsize(0) }
attributes #7 = { nounwind }

!llvm.dbg.cu = !{!17}
!llvm.module.flags = !{!27, !28, !29, !30, !31, !32, !33}
!llvm.ident = !{!34}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(scope: null, file: !2, line: 49, type: !3, isLocal: true, isDefinition: true)
!2 = !DIFile(filename: "nsieve-bits.c", directory: "/home/yxk/test-sgx/SGX-test/nsieve-bits", checksumkind: CSK_MD5, checksum: "26eb2f187c335422e5e32af20d2bade8")
!3 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 176, elements: !5)
!4 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!5 = !{!6}
!6 = !DISubrange(count: 22)
!7 = !DIGlobalVariableExpression(var: !8, expr: !DIExpression())
!8 = distinct !DIGlobalVariable(scope: null, file: !2, line: 54, type: !9, isLocal: true, isDefinition: true)
!9 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 152, elements: !10)
!10 = !{!11}
!11 = !DISubrange(count: 19)
!12 = !DIGlobalVariableExpression(var: !13, expr: !DIExpression())
!13 = distinct !DIGlobalVariable(scope: null, file: !2, line: 55, type: !14, isLocal: true, isDefinition: true)
!14 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 384, elements: !15)
!15 = !{!16}
!16 = !DISubrange(count: 48)
!17 = distinct !DICompileUnit(language: DW_LANG_C11, file: !2, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !18, globals: !26, splitDebugInlining: false, nameTableKind: None)
!18 = !{!19, !22, !23}
!19 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !20, size: 64)
!20 = !DIDerivedType(tag: DW_TAG_typedef, name: "bits", file: !2, line: 12, baseType: !21)
!21 = !DIBasicType(name: "unsigned int", size: 32, encoding: DW_ATE_unsigned)
!22 = !DIBasicType(name: "double", size: 64, encoding: DW_ATE_float)
!23 = !DIDerivedType(tag: DW_TAG_typedef, name: "__clock_t", file: !24, line: 156, baseType: !25)
!24 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!25 = !DIBasicType(name: "long", size: 64, encoding: DW_ATE_signed)
!26 = !{!0, !7, !12}
!27 = !{i32 7, !"Dwarf Version", i32 5}
!28 = !{i32 2, !"Debug Info Version", i32 3}
!29 = !{i32 1, !"wchar_size", i32 4}
!30 = !{i32 8, !"PIC Level", i32 2}
!31 = !{i32 7, !"PIE Level", i32 2}
!32 = !{i32 7, !"uwtable", i32 2}
!33 = !{i32 7, !"frame-pointer", i32 2}
!34 = !{!"Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)"}
!35 = distinct !DISubprogram(name: "d_ns", scope: !2, file: !2, line: 20, type: !36, scopeLine: 21, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !39)
!36 = !DISubroutineType(types: !37)
!37 = !{null, !38, !38}
!38 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !21, size: 64)
!39 = !{}
!40 = !DILocalVariable(name: "mn", arg: 1, scope: !35, file: !2, line: 20, type: !38)
!41 = !DILocation(line: 20, column: 25, scope: !35)
!42 = !DILocalVariable(name: "mc", arg: 2, scope: !35, file: !2, line: 20, type: !38)
!43 = !DILocation(line: 20, column: 43, scope: !35)
!44 = !DILocalVariable(name: "m", scope: !35, file: !2, line: 23, type: !21)
!45 = !DILocation(line: 23, column: 16, scope: !35)
!46 = !DILocalVariable(name: "sz", scope: !35, file: !2, line: 23, type: !21)
!47 = !DILocation(line: 23, column: 19, scope: !35)
!48 = !DILocalVariable(name: "primes", scope: !35, file: !2, line: 24, type: !19)
!49 = !DILocation(line: 24, column: 9, scope: !35)
!50 = !DILocation(line: 24, column: 33, scope: !35)
!51 = !DILocation(line: 24, column: 26, scope: !35)
!52 = !DILocation(line: 25, column: 8, scope: !53)
!53 = distinct !DILexicalBlock(scope: !35, file: !2, line: 25, column: 7)
!54 = !DILocation(line: 25, column: 7, scope: !35)
!55 = !DILocation(line: 25, column: 16, scope: !53)
!56 = !DILocation(line: 26, column: 10, scope: !57)
!57 = distinct !DILexicalBlock(scope: !35, file: !2, line: 26, column: 3)
!58 = !DILocation(line: 26, column: 8, scope: !57)
!59 = !DILocation(line: 26, column: 15, scope: !60)
!60 = distinct !DILexicalBlock(scope: !57, file: !2, line: 26, column: 3)
!61 = !DILocation(line: 26, column: 17, scope: !60)
!62 = !DILocation(line: 26, column: 3, scope: !57)
!63 = !DILocalVariable(name: "i", scope: !64, file: !2, line: 27, type: !21)
!64 = distinct !DILexicalBlock(scope: !60, file: !2, line: 26, column: 28)
!65 = !DILocation(line: 27, column: 18, scope: !64)
!66 = !DILocalVariable(name: "j", scope: !64, file: !2, line: 27, type: !21)
!67 = !DILocation(line: 27, column: 21, scope: !64)
!68 = !DILocalVariable(name: "count", scope: !64, file: !2, line: 27, type: !21)
!69 = !DILocation(line: 27, column: 24, scope: !64)
!70 = !DILocalVariable(name: "n", scope: !64, file: !2, line: 27, type: !21)
!71 = !DILocation(line: 27, column: 35, scope: !64)
!72 = !DILocation(line: 27, column: 39, scope: !64)
!73 = !DILocation(line: 27, column: 45, scope: !64)
!74 = !DILocation(line: 27, column: 42, scope: !64)
!75 = !DILocation(line: 28, column: 12, scope: !64)
!76 = !DILocation(line: 28, column: 26, scope: !64)
!77 = !DILocation(line: 28, column: 5, scope: !64)
!78 = !DILocation(line: 29, column: 12, scope: !79)
!79 = distinct !DILexicalBlock(scope: !64, file: !2, line: 29, column: 5)
!80 = !DILocation(line: 29, column: 10, scope: !79)
!81 = !DILocation(line: 29, column: 17, scope: !82)
!82 = distinct !DILexicalBlock(scope: !79, file: !2, line: 29, column: 5)
!83 = !DILocation(line: 29, column: 22, scope: !82)
!84 = !DILocation(line: 29, column: 19, scope: !82)
!85 = !DILocation(line: 29, column: 5, scope: !79)
!86 = !DILocation(line: 30, column: 11, scope: !87)
!87 = distinct !DILexicalBlock(scope: !82, file: !2, line: 30, column: 11)
!88 = !DILocation(line: 30, column: 11, scope: !82)
!89 = !DILocation(line: 31, column: 14, scope: !90)
!90 = distinct !DILexicalBlock(scope: !87, file: !2, line: 30, column: 29)
!91 = !DILocation(line: 32, column: 18, scope: !92)
!92 = distinct !DILexicalBlock(scope: !90, file: !2, line: 32, column: 9)
!93 = !DILocation(line: 32, column: 22, scope: !92)
!94 = !DILocation(line: 32, column: 20, scope: !92)
!95 = !DILocation(line: 32, column: 16, scope: !92)
!96 = !DILocation(line: 32, column: 14, scope: !92)
!97 = !DILocation(line: 32, column: 25, scope: !98)
!98 = distinct !DILexicalBlock(scope: !92, file: !2, line: 32, column: 9)
!99 = !DILocation(line: 32, column: 30, scope: !98)
!100 = !DILocation(line: 32, column: 27, scope: !98)
!101 = !DILocation(line: 32, column: 9, scope: !92)
!102 = !DILocation(line: 33, column: 15, scope: !103)
!103 = distinct !DILexicalBlock(scope: !98, file: !2, line: 33, column: 15)
!104 = !DILocation(line: 33, column: 15, scope: !98)
!105 = !DILocation(line: 33, column: 33, scope: !103)
!106 = !DILocation(line: 32, column: 38, scope: !98)
!107 = !DILocation(line: 32, column: 35, scope: !98)
!108 = !DILocation(line: 32, column: 9, scope: !98)
!109 = distinct !{!109, !101, !110, !111}
!110 = !DILocation(line: 33, column: 33, scope: !92)
!111 = !{!"llvm.loop.mustprogress"}
!112 = !DILocation(line: 34, column: 7, scope: !90)
!113 = !DILocation(line: 29, column: 26, scope: !82)
!114 = !DILocation(line: 29, column: 5, scope: !82)
!115 = distinct !{!115, !85, !116, !111}
!116 = !DILocation(line: 34, column: 7, scope: !79)
!117 = !DILocation(line: 35, column: 15, scope: !64)
!118 = !DILocation(line: 35, column: 7, scope: !64)
!119 = !DILocation(line: 35, column: 10, scope: !64)
!120 = !DILocation(line: 35, column: 9, scope: !64)
!121 = !DILocation(line: 35, column: 13, scope: !64)
!122 = !DILocation(line: 36, column: 15, scope: !64)
!123 = !DILocation(line: 36, column: 7, scope: !64)
!124 = !DILocation(line: 36, column: 10, scope: !64)
!125 = !DILocation(line: 36, column: 9, scope: !64)
!126 = !DILocation(line: 36, column: 13, scope: !64)
!127 = !DILocation(line: 38, column: 3, scope: !64)
!128 = !DILocation(line: 26, column: 24, scope: !60)
!129 = !DILocation(line: 26, column: 3, scope: !60)
!130 = distinct !{!130, !62, !131, !111}
!131 = !DILocation(line: 38, column: 3, scope: !57)
!132 = !DILocation(line: 39, column: 8, scope: !35)
!133 = !DILocation(line: 39, column: 3, scope: !35)
!134 = !DILocation(line: 41, column: 3, scope: !35)
!135 = !DILocation(line: 42, column: 1, scope: !35)
!136 = distinct !DISubprogram(name: "main", scope: !2, file: !2, line: 44, type: !137, scopeLine: 44, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !39)
!137 = !DISubroutineType(types: !138)
!138 = !{!139}
!139 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!140 = !DILocalVariable(name: "start_time", scope: !136, file: !2, line: 45, type: !141)
!141 = !DIDerivedType(tag: DW_TAG_typedef, name: "clock_t", file: !142, line: 7, baseType: !23)
!142 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h", directory: "", checksumkind: CSK_MD5, checksum: "1aade99fd778d1551600c7ca1410b9f1")
!143 = !DILocation(line: 45, column: 11, scope: !136)
!144 = !DILocation(line: 45, column: 24, scope: !136)
!145 = !DILocalVariable(name: "mn", scope: !136, file: !2, line: 46, type: !146)
!146 = !DICompositeType(tag: DW_TAG_array_type, baseType: !21, size: 96, elements: !147)
!147 = !{!148}
!148 = !DISubrange(count: 3)
!149 = !DILocation(line: 46, column: 16, scope: !136)
!150 = !DILocalVariable(name: "mc", scope: !136, file: !2, line: 46, type: !146)
!151 = !DILocation(line: 46, column: 23, scope: !136)
!152 = !DILocation(line: 47, column: 8, scope: !136)
!153 = !DILocation(line: 47, column: 11, scope: !136)
!154 = !DILocation(line: 47, column: 3, scope: !136)
!155 = !DILocalVariable(name: "i", scope: !156, file: !2, line: 48, type: !139)
!156 = distinct !DILexicalBlock(scope: !136, file: !2, line: 48, column: 3)
!157 = !DILocation(line: 48, column: 11, scope: !156)
!158 = !DILocation(line: 48, column: 7, scope: !156)
!159 = !DILocation(line: 48, column: 18, scope: !160)
!160 = distinct !DILexicalBlock(scope: !156, file: !2, line: 48, column: 3)
!161 = !DILocation(line: 48, column: 20, scope: !160)
!162 = !DILocation(line: 48, column: 3, scope: !156)
!163 = !DILocation(line: 49, column: 41, scope: !164)
!164 = distinct !DILexicalBlock(scope: !160, file: !2, line: 48, column: 29)
!165 = !DILocation(line: 49, column: 38, scope: !164)
!166 = !DILocation(line: 49, column: 48, scope: !164)
!167 = !DILocation(line: 49, column: 45, scope: !164)
!168 = !DILocation(line: 49, column: 5, scope: !164)
!169 = !DILocation(line: 50, column: 3, scope: !164)
!170 = !DILocation(line: 48, column: 26, scope: !160)
!171 = !DILocation(line: 48, column: 3, scope: !160)
!172 = distinct !{!172, !162, !173, !111}
!173 = !DILocation(line: 50, column: 3, scope: !156)
!174 = !DILocalVariable(name: "end_time", scope: !136, file: !2, line: 52, type: !141)
!175 = !DILocation(line: 52, column: 11, scope: !136)
!176 = !DILocation(line: 52, column: 22, scope: !136)
!177 = !DILocalVariable(name: "time_taken_ms", scope: !136, file: !2, line: 53, type: !22)
!178 = !DILocation(line: 53, column: 12, scope: !136)
!179 = !DILocation(line: 53, column: 38, scope: !136)
!180 = !DILocation(line: 53, column: 49, scope: !136)
!181 = !DILocation(line: 53, column: 47, scope: !136)
!182 = !DILocation(line: 53, column: 29, scope: !136)
!183 = !DILocation(line: 53, column: 62, scope: !136)
!184 = !DILocation(line: 53, column: 79, scope: !136)
!185 = !DILocation(line: 54, column: 35, scope: !136)
!186 = !DILocation(line: 54, column: 5, scope: !136)
!187 = !DILocation(line: 55, column: 5, scope: !136)
!188 = !DILocation(line: 56, column: 3, scope: !136)
