; ModuleID = 'recursive.c'
source_filename = "recursive.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"SGX\00", section "llvm.metadata"
@.str.1 = private unnamed_addr constant [12 x i8] c"recursive.c\00", section "llvm.metadata"
@.str.2 = private unnamed_addr constant [16 x i8] c"memsize(12, 16)\00", section "llvm.metadata"
@.str.3 = private unnamed_addr constant [6 x i8] c"TAFUN\00", section "llvm.metadata"
@.str.4 = private unnamed_addr constant [15 x i8] c"Ack(3,%d): %d\0A\00", align 1, !dbg !0
@.str.5 = private unnamed_addr constant [17 x i8] c"Fib(%.1f): %.1f\0A\00", align 1, !dbg !7
@.str.6 = private unnamed_addr constant [19 x i8] c"Tak(%d,%d,%d): %d\0A\00", align 1, !dbg !12
@.str.7 = private unnamed_addr constant [12 x i8] c"Fib(3): %d\0A\00", align 1, !dbg !17
@.str.8 = private unnamed_addr constant [24 x i8] c"Tak(3.0,2.0,1.0): %.1f\0A\00", align 1, !dbg !22
@.str.9 = private unnamed_addr constant [19 x i8] c"use time: %.3f ms\0A\00", align 1, !dbg !27
@.str.10 = private unnamed_addr constant [48 x i8] c"**********************************************\0A\00", align 1, !dbg !29
@llvm.global.annotations = appending global [8 x { ptr, ptr, ptr, i32, ptr }] [{ ptr, ptr, ptr, i32, ptr } { ptr @ack, ptr @.str, ptr @.str.1, i32 12, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @fib, ptr @.str, ptr @.str.1, i32 21, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @fibFP, ptr @.str, ptr @.str.1, i32 29, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @tak, ptr @.str, ptr @.str.1, i32 37, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @takFP, ptr @.str, ptr @.str.1, i32 45, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_re, ptr @.str, ptr @.str.1, i32 52, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_re, ptr @.str.2, ptr @.str.1, i32 52, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_re, ptr @.str.3, ptr @.str.1, i32 52, ptr null }], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @ack(i32 noundef %0, i32 noundef %1) #0 !dbg !49 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !54, metadata !DIExpression()), !dbg !55
  store i32 %1, ptr %5, align 4
  call void @llvm.dbg.declare(metadata ptr %5, metadata !56, metadata !DIExpression()), !dbg !57
  %6 = load i32, ptr %4, align 4, !dbg !58
  %7 = icmp eq i32 %6, 0, !dbg !60
  br i1 %7, label %8, label %11, !dbg !61

8:                                                ; preds = %2
  %9 = load i32, ptr %5, align 4, !dbg !62
  %10 = add nsw i32 %9, 1, !dbg !64
  store i32 %10, ptr %3, align 4, !dbg !65
  br label %26, !dbg !65

11:                                               ; preds = %2
  %12 = load i32, ptr %4, align 4, !dbg !66
  %13 = sub nsw i32 %12, 1, !dbg !67
  %14 = load i32, ptr %5, align 4, !dbg !68
  %15 = or i32 %14, 0, !dbg !69
  %16 = icmp ne i32 %15, 0, !dbg !69
  br i1 %16, label %17, label %22, !dbg !70

17:                                               ; preds = %11
  %18 = load i32, ptr %4, align 4, !dbg !71
  %19 = load i32, ptr %5, align 4, !dbg !72
  %20 = sub nsw i32 %19, 1, !dbg !73
  %21 = call i32 @ack(i32 noundef %18, i32 noundef %20), !dbg !74
  br label %23, !dbg !70

22:                                               ; preds = %11
  br label %23, !dbg !70

23:                                               ; preds = %22, %17
  %24 = phi i32 [ %21, %17 ], [ 1, %22 ], !dbg !70
  %25 = call i32 @ack(i32 noundef %13, i32 noundef %24), !dbg !75
  store i32 %25, ptr %3, align 4, !dbg !76
  br label %26, !dbg !76

26:                                               ; preds = %23, %8
  %27 = load i32, ptr %3, align 4, !dbg !77
  ret i32 %27, !dbg !77
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @fib(i32 noundef %0) #0 !dbg !78 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  call void @llvm.dbg.declare(metadata ptr %3, metadata !81, metadata !DIExpression()), !dbg !82
  %4 = load i32, ptr %3, align 4, !dbg !83
  %5 = icmp slt i32 %4, 2, !dbg !85
  br i1 %5, label %6, label %7, !dbg !86

6:                                                ; preds = %1
  store i32 1, ptr %2, align 4, !dbg !87
  br label %15, !dbg !87

7:                                                ; preds = %1
  %8 = load i32, ptr %3, align 4, !dbg !89
  %9 = sub nsw i32 %8, 2, !dbg !90
  %10 = call i32 @fib(i32 noundef %9), !dbg !91
  %11 = load i32, ptr %3, align 4, !dbg !92
  %12 = sub nsw i32 %11, 1, !dbg !93
  %13 = call i32 @fib(i32 noundef %12), !dbg !94
  %14 = add nsw i32 %10, %13, !dbg !95
  store i32 %14, ptr %2, align 4, !dbg !96
  br label %15, !dbg !96

15:                                               ; preds = %7, %6
  %16 = load i32, ptr %2, align 4, !dbg !97
  ret i32 %16, !dbg !97
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local double @fibFP(double noundef %0) #0 !dbg !98 {
  %2 = alloca double, align 8
  %3 = alloca double, align 8
  store double %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !101, metadata !DIExpression()), !dbg !102
  %4 = load double, ptr %3, align 8, !dbg !103
  %5 = fcmp olt double %4, 2.000000e+00, !dbg !105
  br i1 %5, label %6, label %7, !dbg !106

6:                                                ; preds = %1
  store double 1.000000e+00, ptr %2, align 8, !dbg !107
  br label %15, !dbg !107

7:                                                ; preds = %1
  %8 = load double, ptr %3, align 8, !dbg !109
  %9 = fsub double %8, 2.000000e+00, !dbg !110
  %10 = call double @fibFP(double noundef %9), !dbg !111
  %11 = load double, ptr %3, align 8, !dbg !112
  %12 = fsub double %11, 1.000000e+00, !dbg !113
  %13 = call double @fibFP(double noundef %12), !dbg !114
  %14 = fadd double %10, %13, !dbg !115
  store double %14, ptr %2, align 8, !dbg !116
  br label %15, !dbg !116

15:                                               ; preds = %7, %6
  %16 = load double, ptr %2, align 8, !dbg !117
  ret double %16, !dbg !117
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @tak(i32 noundef %0, i32 noundef %1, i32 noundef %2) #0 !dbg !118 {
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  store i32 %0, ptr %5, align 4
  call void @llvm.dbg.declare(metadata ptr %5, metadata !121, metadata !DIExpression()), !dbg !122
  store i32 %1, ptr %6, align 4
  call void @llvm.dbg.declare(metadata ptr %6, metadata !123, metadata !DIExpression()), !dbg !124
  store i32 %2, ptr %7, align 4
  call void @llvm.dbg.declare(metadata ptr %7, metadata !125, metadata !DIExpression()), !dbg !126
  %8 = load i32, ptr %6, align 4, !dbg !127
  %9 = load i32, ptr %5, align 4, !dbg !129
  %10 = icmp slt i32 %8, %9, !dbg !130
  br i1 %10, label %11, label %28, !dbg !131

11:                                               ; preds = %3
  %12 = load i32, ptr %5, align 4, !dbg !132
  %13 = sub nsw i32 %12, 1, !dbg !134
  %14 = load i32, ptr %6, align 4, !dbg !135
  %15 = load i32, ptr %7, align 4, !dbg !136
  %16 = call i32 @tak(i32 noundef %13, i32 noundef %14, i32 noundef %15), !dbg !137
  %17 = load i32, ptr %6, align 4, !dbg !138
  %18 = sub nsw i32 %17, 1, !dbg !139
  %19 = load i32, ptr %7, align 4, !dbg !140
  %20 = load i32, ptr %5, align 4, !dbg !141
  %21 = call i32 @tak(i32 noundef %18, i32 noundef %19, i32 noundef %20), !dbg !142
  %22 = load i32, ptr %7, align 4, !dbg !143
  %23 = sub nsw i32 %22, 1, !dbg !144
  %24 = load i32, ptr %5, align 4, !dbg !145
  %25 = load i32, ptr %6, align 4, !dbg !146
  %26 = call i32 @tak(i32 noundef %23, i32 noundef %24, i32 noundef %25), !dbg !147
  %27 = call i32 @tak(i32 noundef %16, i32 noundef %21, i32 noundef %26), !dbg !148
  store i32 %27, ptr %4, align 4, !dbg !149
  br label %30, !dbg !149

28:                                               ; preds = %3
  %29 = load i32, ptr %7, align 4, !dbg !150
  store i32 %29, ptr %4, align 4, !dbg !151
  br label %30, !dbg !151

30:                                               ; preds = %28, %11
  %31 = load i32, ptr %4, align 4, !dbg !152
  ret i32 %31, !dbg !152
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local double @takFP(double noundef %0, double noundef %1, double noundef %2) #0 !dbg !153 {
  %4 = alloca double, align 8
  %5 = alloca double, align 8
  %6 = alloca double, align 8
  %7 = alloca double, align 8
  store double %0, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !156, metadata !DIExpression()), !dbg !157
  store double %1, ptr %6, align 8
  call void @llvm.dbg.declare(metadata ptr %6, metadata !158, metadata !DIExpression()), !dbg !159
  store double %2, ptr %7, align 8
  call void @llvm.dbg.declare(metadata ptr %7, metadata !160, metadata !DIExpression()), !dbg !161
  %8 = load double, ptr %6, align 8, !dbg !162
  %9 = load double, ptr %5, align 8, !dbg !164
  %10 = fcmp olt double %8, %9, !dbg !165
  br i1 %10, label %11, label %28, !dbg !166

11:                                               ; preds = %3
  %12 = load double, ptr %5, align 8, !dbg !167
  %13 = fsub double %12, 1.000000e+00, !dbg !168
  %14 = load double, ptr %6, align 8, !dbg !169
  %15 = load double, ptr %7, align 8, !dbg !170
  %16 = call double @takFP(double noundef %13, double noundef %14, double noundef %15), !dbg !171
  %17 = load double, ptr %6, align 8, !dbg !172
  %18 = fsub double %17, 1.000000e+00, !dbg !173
  %19 = load double, ptr %7, align 8, !dbg !174
  %20 = load double, ptr %5, align 8, !dbg !175
  %21 = call double @takFP(double noundef %18, double noundef %19, double noundef %20), !dbg !176
  %22 = load double, ptr %7, align 8, !dbg !177
  %23 = fsub double %22, 1.000000e+00, !dbg !178
  %24 = load double, ptr %5, align 8, !dbg !179
  %25 = load double, ptr %6, align 8, !dbg !180
  %26 = call double @takFP(double noundef %23, double noundef %24, double noundef %25), !dbg !181
  %27 = call double @takFP(double noundef %16, double noundef %21, double noundef %26), !dbg !182
  store double %27, ptr %4, align 8, !dbg !183
  br label %30, !dbg !183

28:                                               ; preds = %3
  %29 = load double, ptr %7, align 8, !dbg !184
  store double %29, ptr %4, align 8, !dbg !185
  br label %30, !dbg !185

30:                                               ; preds = %28, %11
  %31 = load double, ptr %4, align 8, !dbg !186
  ret double %31, !dbg !186
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @d_re(ptr noundef %0, ptr noundef %1) #0 !dbg !187 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  store ptr %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !192, metadata !DIExpression()), !dbg !193
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !194, metadata !DIExpression()), !dbg !195
  call void @llvm.dbg.declare(metadata ptr %5, metadata !196, metadata !DIExpression()), !dbg !197
  store i32 6, ptr %5, align 4, !dbg !197
  %6 = load i32, ptr %5, align 4, !dbg !198
  %7 = add nsw i32 %6, 1, !dbg !199
  %8 = call i32 @ack(i32 noundef 3, i32 noundef %7), !dbg !200
  %9 = load ptr, ptr %3, align 8, !dbg !201
  store i32 %8, ptr %9, align 4, !dbg !202
  %10 = load i32, ptr %5, align 4, !dbg !203
  %11 = sitofp i32 %10 to double, !dbg !203
  %12 = fadd double 2.800000e+01, %11, !dbg !204
  %13 = call double @fibFP(double noundef %12), !dbg !205
  %14 = load ptr, ptr %4, align 8, !dbg !206
  store double %13, ptr %14, align 8, !dbg !207
  %15 = load i32, ptr %5, align 4, !dbg !208
  %16 = mul nsw i32 3, %15, !dbg !209
  %17 = load i32, ptr %5, align 4, !dbg !210
  %18 = mul nsw i32 2, %17, !dbg !211
  %19 = load i32, ptr %5, align 4, !dbg !212
  %20 = call i32 @tak(i32 noundef %16, i32 noundef %18, i32 noundef %19), !dbg !213
  %21 = load ptr, ptr %3, align 8, !dbg !214
  %22 = getelementptr inbounds i32, ptr %21, i64 1, !dbg !215
  store i32 %20, ptr %22, align 4, !dbg !216
  %23 = call i32 @fib(i32 noundef 3), !dbg !217
  %24 = load ptr, ptr %3, align 8, !dbg !218
  %25 = getelementptr inbounds i32, ptr %24, i64 2, !dbg !219
  store i32 %23, ptr %25, align 4, !dbg !220
  %26 = call double @takFP(double noundef 3.000000e+00, double noundef 2.000000e+00, double noundef 1.000000e+00), !dbg !221
  %27 = load ptr, ptr %4, align 8, !dbg !222
  %28 = getelementptr inbounds double, ptr %27, i64 1, !dbg !223
  store double %26, ptr %28, align 8, !dbg !224
  ret void, !dbg !225
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main() #0 !dbg !226 {
  %1 = alloca i32, align 4
  %2 = alloca i64, align 8
  %3 = alloca i32, align 4
  %4 = alloca [3 x i32], align 4
  %5 = alloca [2 x double], align 16
  %6 = alloca i64, align 8
  %7 = alloca double, align 8
  store i32 0, ptr %1, align 4
  call void @llvm.dbg.declare(metadata ptr %2, metadata !229, metadata !DIExpression()), !dbg !232
  %8 = call i64 @clock() #4, !dbg !233
  store i64 %8, ptr %2, align 8, !dbg !232
  call void @llvm.dbg.declare(metadata ptr %3, metadata !234, metadata !DIExpression()), !dbg !235
  store i32 10, ptr %3, align 4, !dbg !235
  call void @llvm.dbg.declare(metadata ptr %4, metadata !236, metadata !DIExpression()), !dbg !240
  call void @llvm.dbg.declare(metadata ptr %5, metadata !241, metadata !DIExpression()), !dbg !245
  %9 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 0, !dbg !246
  %10 = getelementptr inbounds [2 x double], ptr %5, i64 0, i64 0, !dbg !247
  call void @d_re(ptr noundef %9, ptr noundef %10), !dbg !248
  %11 = load i32, ptr %3, align 4, !dbg !249
  %12 = add nsw i32 %11, 1, !dbg !250
  %13 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 0, !dbg !251
  %14 = load i32, ptr %13, align 4, !dbg !251
  %15 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, i32 noundef %12, i32 noundef %14), !dbg !252
  %16 = load i32, ptr %3, align 4, !dbg !253
  %17 = sitofp i32 %16 to double, !dbg !253
  %18 = fadd double 2.800000e+01, %17, !dbg !254
  %19 = getelementptr inbounds [2 x double], ptr %5, i64 0, i64 0, !dbg !255
  %20 = load double, ptr %19, align 16, !dbg !255
  %21 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, double noundef %18, double noundef %20), !dbg !256
  %22 = load i32, ptr %3, align 4, !dbg !257
  %23 = mul nsw i32 3, %22, !dbg !258
  %24 = load i32, ptr %3, align 4, !dbg !259
  %25 = mul nsw i32 2, %24, !dbg !260
  %26 = load i32, ptr %3, align 4, !dbg !261
  %27 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 1, !dbg !262
  %28 = load i32, ptr %27, align 4, !dbg !262
  %29 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, i32 noundef %23, i32 noundef %25, i32 noundef %26, i32 noundef %28), !dbg !263
  %30 = getelementptr inbounds [3 x i32], ptr %4, i64 0, i64 2, !dbg !264
  %31 = load i32, ptr %30, align 4, !dbg !264
  %32 = call i32 (ptr, ...) @printf(ptr noundef @.str.7, i32 noundef %31), !dbg !265
  %33 = getelementptr inbounds [2 x double], ptr %5, i64 0, i64 1, !dbg !266
  %34 = load double, ptr %33, align 8, !dbg !266
  %35 = call i32 (ptr, ...) @printf(ptr noundef @.str.8, double noundef %34), !dbg !267
  call void @llvm.dbg.declare(metadata ptr %6, metadata !268, metadata !DIExpression()), !dbg !269
  %36 = call i64 @clock() #4, !dbg !270
  store i64 %36, ptr %6, align 8, !dbg !269
  call void @llvm.dbg.declare(metadata ptr %7, metadata !271, metadata !DIExpression()), !dbg !272
  %37 = load i64, ptr %6, align 8, !dbg !273
  %38 = load i64, ptr %2, align 8, !dbg !274
  %39 = sub nsw i64 %37, %38, !dbg !275
  %40 = sitofp i64 %39 to double, !dbg !276
  %41 = fdiv double %40, 1.000000e+06, !dbg !277
  %42 = fmul double %41, 1.000000e+03, !dbg !278
  store double %42, ptr %7, align 8, !dbg !272
  %43 = load double, ptr %7, align 8, !dbg !279
  %44 = call i32 (ptr, ...) @printf(ptr noundef @.str.9, double noundef %43), !dbg !280
  %45 = call i32 (ptr, ...) @printf(ptr noundef @.str.10), !dbg !281
  ret i32 0, !dbg !282
}

; Function Attrs: nounwind
declare i64 @clock() #2

declare i32 @printf(ptr noundef, ...) #3

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { nounwind }

!llvm.dbg.cu = !{!34}
!llvm.module.flags = !{!41, !42, !43, !44, !45, !46, !47}
!llvm.ident = !{!48}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(scope: null, file: !2, line: 71, type: !3, isLocal: true, isDefinition: true)
!2 = !DIFile(filename: "recursive.c", directory: "/home/yxk/test-sgx/SGX-test/recursive", checksumkind: CSK_MD5, checksum: "82d4c8c08677d738c640b49a6de3c98f")
!3 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 120, elements: !5)
!4 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!5 = !{!6}
!6 = !DISubrange(count: 15)
!7 = !DIGlobalVariableExpression(var: !8, expr: !DIExpression())
!8 = distinct !DIGlobalVariable(scope: null, file: !2, line: 72, type: !9, isLocal: true, isDefinition: true)
!9 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 136, elements: !10)
!10 = !{!11}
!11 = !DISubrange(count: 17)
!12 = !DIGlobalVariableExpression(var: !13, expr: !DIExpression())
!13 = distinct !DIGlobalVariable(scope: null, file: !2, line: 73, type: !14, isLocal: true, isDefinition: true)
!14 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 152, elements: !15)
!15 = !{!16}
!16 = !DISubrange(count: 19)
!17 = !DIGlobalVariableExpression(var: !18, expr: !DIExpression())
!18 = distinct !DIGlobalVariable(scope: null, file: !2, line: 74, type: !19, isLocal: true, isDefinition: true)
!19 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 96, elements: !20)
!20 = !{!21}
!21 = !DISubrange(count: 12)
!22 = !DIGlobalVariableExpression(var: !23, expr: !DIExpression())
!23 = distinct !DIGlobalVariable(scope: null, file: !2, line: 75, type: !24, isLocal: true, isDefinition: true)
!24 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 192, elements: !25)
!25 = !{!26}
!26 = !DISubrange(count: 24)
!27 = !DIGlobalVariableExpression(var: !28, expr: !DIExpression())
!28 = distinct !DIGlobalVariable(scope: null, file: !2, line: 79, type: !14, isLocal: true, isDefinition: true)
!29 = !DIGlobalVariableExpression(var: !30, expr: !DIExpression())
!30 = distinct !DIGlobalVariable(scope: null, file: !2, line: 80, type: !31, isLocal: true, isDefinition: true)
!31 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 384, elements: !32)
!32 = !{!33}
!33 = !DISubrange(count: 48)
!34 = distinct !DICompileUnit(language: DW_LANG_C11, file: !2, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !35, globals: !40, splitDebugInlining: false, nameTableKind: None)
!35 = !{!36, !37}
!36 = !DIBasicType(name: "double", size: 64, encoding: DW_ATE_float)
!37 = !DIDerivedType(tag: DW_TAG_typedef, name: "__clock_t", file: !38, line: 156, baseType: !39)
!38 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!39 = !DIBasicType(name: "long", size: 64, encoding: DW_ATE_signed)
!40 = !{!0, !7, !12, !17, !22, !27, !29}
!41 = !{i32 7, !"Dwarf Version", i32 5}
!42 = !{i32 2, !"Debug Info Version", i32 3}
!43 = !{i32 1, !"wchar_size", i32 4}
!44 = !{i32 8, !"PIC Level", i32 2}
!45 = !{i32 7, !"PIE Level", i32 2}
!46 = !{i32 7, !"uwtable", i32 2}
!47 = !{i32 7, !"frame-pointer", i32 2}
!48 = !{!"Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)"}
!49 = distinct !DISubprogram(name: "ack", scope: !2, file: !2, line: 12, type: !50, scopeLine: 12, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !34, retainedNodes: !53)
!50 = !DISubroutineType(types: !51)
!51 = !{!52, !52, !52}
!52 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!53 = !{}
!54 = !DILocalVariable(name: "x", arg: 1, scope: !49, file: !2, line: 12, type: !52)
!55 = !DILocation(line: 12, column: 13, scope: !49)
!56 = !DILocalVariable(name: "y", arg: 2, scope: !49, file: !2, line: 12, type: !52)
!57 = !DILocation(line: 12, column: 20, scope: !49)
!58 = !DILocation(line: 13, column: 7, scope: !59)
!59 = distinct !DILexicalBlock(scope: !49, file: !2, line: 13, column: 7)
!60 = !DILocation(line: 13, column: 9, scope: !59)
!61 = !DILocation(line: 13, column: 7, scope: !49)
!62 = !DILocation(line: 14, column: 12, scope: !63)
!63 = distinct !DILexicalBlock(scope: !59, file: !2, line: 13, column: 15)
!64 = !DILocation(line: 14, column: 14, scope: !63)
!65 = !DILocation(line: 14, column: 5, scope: !63)
!66 = !DILocation(line: 17, column: 14, scope: !49)
!67 = !DILocation(line: 17, column: 16, scope: !49)
!68 = !DILocation(line: 17, column: 23, scope: !49)
!69 = !DILocation(line: 17, column: 25, scope: !49)
!70 = !DILocation(line: 17, column: 22, scope: !49)
!71 = !DILocation(line: 17, column: 36, scope: !49)
!72 = !DILocation(line: 17, column: 39, scope: !49)
!73 = !DILocation(line: 17, column: 41, scope: !49)
!74 = !DILocation(line: 17, column: 32, scope: !49)
!75 = !DILocation(line: 17, column: 10, scope: !49)
!76 = !DILocation(line: 17, column: 3, scope: !49)
!77 = !DILocation(line: 18, column: 1, scope: !49)
!78 = distinct !DISubprogram(name: "fib", scope: !2, file: !2, line: 21, type: !79, scopeLine: 21, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !34, retainedNodes: !53)
!79 = !DISubroutineType(types: !80)
!80 = !{!52, !52}
!81 = !DILocalVariable(name: "n", arg: 1, scope: !78, file: !2, line: 21, type: !52)
!82 = !DILocation(line: 21, column: 13, scope: !78)
!83 = !DILocation(line: 22, column: 7, scope: !84)
!84 = distinct !DILexicalBlock(scope: !78, file: !2, line: 22, column: 7)
!85 = !DILocation(line: 22, column: 9, scope: !84)
!86 = !DILocation(line: 22, column: 7, scope: !78)
!87 = !DILocation(line: 23, column: 5, scope: !88)
!88 = distinct !DILexicalBlock(scope: !84, file: !2, line: 22, column: 14)
!89 = !DILocation(line: 25, column: 14, scope: !78)
!90 = !DILocation(line: 25, column: 16, scope: !78)
!91 = !DILocation(line: 25, column: 10, scope: !78)
!92 = !DILocation(line: 25, column: 27, scope: !78)
!93 = !DILocation(line: 25, column: 29, scope: !78)
!94 = !DILocation(line: 25, column: 23, scope: !78)
!95 = !DILocation(line: 25, column: 21, scope: !78)
!96 = !DILocation(line: 25, column: 3, scope: !78)
!97 = !DILocation(line: 26, column: 1, scope: !78)
!98 = distinct !DISubprogram(name: "fibFP", scope: !2, file: !2, line: 29, type: !99, scopeLine: 29, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !34, retainedNodes: !53)
!99 = !DISubroutineType(types: !100)
!100 = !{!36, !36}
!101 = !DILocalVariable(name: "n", arg: 1, scope: !98, file: !2, line: 29, type: !36)
!102 = !DILocation(line: 29, column: 21, scope: !98)
!103 = !DILocation(line: 30, column: 7, scope: !104)
!104 = distinct !DILexicalBlock(scope: !98, file: !2, line: 30, column: 7)
!105 = !DILocation(line: 30, column: 9, scope: !104)
!106 = !DILocation(line: 30, column: 7, scope: !98)
!107 = !DILocation(line: 31, column: 5, scope: !108)
!108 = distinct !DILexicalBlock(scope: !104, file: !2, line: 30, column: 16)
!109 = !DILocation(line: 33, column: 16, scope: !98)
!110 = !DILocation(line: 33, column: 18, scope: !98)
!111 = !DILocation(line: 33, column: 10, scope: !98)
!112 = !DILocation(line: 33, column: 33, scope: !98)
!113 = !DILocation(line: 33, column: 35, scope: !98)
!114 = !DILocation(line: 33, column: 27, scope: !98)
!115 = !DILocation(line: 33, column: 25, scope: !98)
!116 = !DILocation(line: 33, column: 3, scope: !98)
!117 = !DILocation(line: 34, column: 1, scope: !98)
!118 = distinct !DISubprogram(name: "tak", scope: !2, file: !2, line: 37, type: !119, scopeLine: 37, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !34, retainedNodes: !53)
!119 = !DISubroutineType(types: !120)
!120 = !{!52, !52, !52, !52}
!121 = !DILocalVariable(name: "x", arg: 1, scope: !118, file: !2, line: 37, type: !52)
!122 = !DILocation(line: 37, column: 13, scope: !118)
!123 = !DILocalVariable(name: "y", arg: 2, scope: !118, file: !2, line: 37, type: !52)
!124 = !DILocation(line: 37, column: 20, scope: !118)
!125 = !DILocalVariable(name: "z", arg: 3, scope: !118, file: !2, line: 37, type: !52)
!126 = !DILocation(line: 37, column: 27, scope: !118)
!127 = !DILocation(line: 38, column: 7, scope: !128)
!128 = distinct !DILexicalBlock(scope: !118, file: !2, line: 38, column: 7)
!129 = !DILocation(line: 38, column: 11, scope: !128)
!130 = !DILocation(line: 38, column: 9, scope: !128)
!131 = !DILocation(line: 38, column: 7, scope: !118)
!132 = !DILocation(line: 39, column: 20, scope: !133)
!133 = distinct !DILexicalBlock(scope: !128, file: !2, line: 38, column: 14)
!134 = !DILocation(line: 39, column: 22, scope: !133)
!135 = !DILocation(line: 39, column: 27, scope: !133)
!136 = !DILocation(line: 39, column: 30, scope: !133)
!137 = !DILocation(line: 39, column: 16, scope: !133)
!138 = !DILocation(line: 39, column: 38, scope: !133)
!139 = !DILocation(line: 39, column: 40, scope: !133)
!140 = !DILocation(line: 39, column: 45, scope: !133)
!141 = !DILocation(line: 39, column: 48, scope: !133)
!142 = !DILocation(line: 39, column: 34, scope: !133)
!143 = !DILocation(line: 39, column: 56, scope: !133)
!144 = !DILocation(line: 39, column: 58, scope: !133)
!145 = !DILocation(line: 39, column: 63, scope: !133)
!146 = !DILocation(line: 39, column: 66, scope: !133)
!147 = !DILocation(line: 39, column: 52, scope: !133)
!148 = !DILocation(line: 39, column: 12, scope: !133)
!149 = !DILocation(line: 39, column: 5, scope: !133)
!150 = !DILocation(line: 41, column: 10, scope: !118)
!151 = !DILocation(line: 41, column: 3, scope: !118)
!152 = !DILocation(line: 42, column: 1, scope: !118)
!153 = distinct !DISubprogram(name: "takFP", scope: !2, file: !2, line: 45, type: !154, scopeLine: 45, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !34, retainedNodes: !53)
!154 = !DISubroutineType(types: !155)
!155 = !{!36, !36, !36, !36}
!156 = !DILocalVariable(name: "x", arg: 1, scope: !153, file: !2, line: 45, type: !36)
!157 = !DILocation(line: 45, column: 21, scope: !153)
!158 = !DILocalVariable(name: "y", arg: 2, scope: !153, file: !2, line: 45, type: !36)
!159 = !DILocation(line: 45, column: 31, scope: !153)
!160 = !DILocalVariable(name: "z", arg: 3, scope: !153, file: !2, line: 45, type: !36)
!161 = !DILocation(line: 45, column: 41, scope: !153)
!162 = !DILocation(line: 46, column: 9, scope: !163)
!163 = distinct !DILexicalBlock(scope: !153, file: !2, line: 46, column: 9)
!164 = !DILocation(line: 46, column: 13, scope: !163)
!165 = !DILocation(line: 46, column: 11, scope: !163)
!166 = !DILocation(line: 46, column: 9, scope: !153)
!167 = !DILocation(line: 47, column: 29, scope: !163)
!168 = !DILocation(line: 47, column: 30, scope: !163)
!169 = !DILocation(line: 47, column: 36, scope: !163)
!170 = !DILocation(line: 47, column: 39, scope: !163)
!171 = !DILocation(line: 47, column: 23, scope: !163)
!172 = !DILocation(line: 47, column: 49, scope: !163)
!173 = !DILocation(line: 47, column: 50, scope: !163)
!174 = !DILocation(line: 47, column: 56, scope: !163)
!175 = !DILocation(line: 47, column: 59, scope: !163)
!176 = !DILocation(line: 47, column: 43, scope: !163)
!177 = !DILocation(line: 47, column: 69, scope: !163)
!178 = !DILocation(line: 47, column: 70, scope: !163)
!179 = !DILocation(line: 47, column: 76, scope: !163)
!180 = !DILocation(line: 47, column: 79, scope: !163)
!181 = !DILocation(line: 47, column: 63, scope: !163)
!182 = !DILocation(line: 47, column: 16, scope: !163)
!183 = !DILocation(line: 47, column: 9, scope: !163)
!184 = !DILocation(line: 48, column: 12, scope: !153)
!185 = !DILocation(line: 48, column: 5, scope: !153)
!186 = !DILocation(line: 49, column: 1, scope: !153)
!187 = distinct !DISubprogram(name: "d_re", scope: !2, file: !2, line: 52, type: !188, scopeLine: 52, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !34, retainedNodes: !53)
!188 = !DISubroutineType(types: !189)
!189 = !{null, !190, !191}
!190 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !52, size: 64)
!191 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !36, size: 64)
!192 = !DILocalVariable(name: "mi", arg: 1, scope: !187, file: !2, line: 52, type: !190)
!193 = !DILocation(line: 52, column: 16, scope: !187)
!194 = !DILocalVariable(name: "md", arg: 2, scope: !187, file: !2, line: 52, type: !191)
!195 = !DILocation(line: 52, column: 28, scope: !187)
!196 = !DILocalVariable(name: "n", scope: !187, file: !2, line: 53, type: !52)
!197 = !DILocation(line: 53, column: 7, scope: !187)
!198 = !DILocation(line: 55, column: 18, scope: !187)
!199 = !DILocation(line: 55, column: 19, scope: !187)
!200 = !DILocation(line: 55, column: 11, scope: !187)
!201 = !DILocation(line: 55, column: 5, scope: !187)
!202 = !DILocation(line: 55, column: 9, scope: !187)
!203 = !DILocation(line: 56, column: 21, scope: !187)
!204 = !DILocation(line: 56, column: 20, scope: !187)
!205 = !DILocation(line: 56, column: 10, scope: !187)
!206 = !DILocation(line: 56, column: 4, scope: !187)
!207 = !DILocation(line: 56, column: 8, scope: !187)
!208 = !DILocation(line: 57, column: 17, scope: !187)
!209 = !DILocation(line: 57, column: 16, scope: !187)
!210 = !DILocation(line: 57, column: 22, scope: !187)
!211 = !DILocation(line: 57, column: 21, scope: !187)
!212 = !DILocation(line: 57, column: 25, scope: !187)
!213 = !DILocation(line: 57, column: 11, scope: !187)
!214 = !DILocation(line: 57, column: 3, scope: !187)
!215 = !DILocation(line: 57, column: 5, scope: !187)
!216 = !DILocation(line: 57, column: 9, scope: !187)
!217 = !DILocation(line: 58, column: 13, scope: !187)
!218 = !DILocation(line: 58, column: 5, scope: !187)
!219 = !DILocation(line: 58, column: 7, scope: !187)
!220 = !DILocation(line: 58, column: 11, scope: !187)
!221 = !DILocation(line: 59, column: 13, scope: !187)
!222 = !DILocation(line: 59, column: 5, scope: !187)
!223 = !DILocation(line: 59, column: 7, scope: !187)
!224 = !DILocation(line: 59, column: 11, scope: !187)
!225 = !DILocation(line: 62, column: 3, scope: !187)
!226 = distinct !DISubprogram(name: "main", scope: !2, file: !2, line: 65, type: !227, scopeLine: 65, spFlags: DISPFlagDefinition, unit: !34, retainedNodes: !53)
!227 = !DISubroutineType(types: !228)
!228 = !{!52}
!229 = !DILocalVariable(name: "start_time", scope: !226, file: !2, line: 66, type: !230)
!230 = !DIDerivedType(tag: DW_TAG_typedef, name: "clock_t", file: !231, line: 7, baseType: !37)
!231 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h", directory: "", checksumkind: CSK_MD5, checksum: "1aade99fd778d1551600c7ca1410b9f1")
!232 = !DILocation(line: 66, column: 11, scope: !226)
!233 = !DILocation(line: 66, column: 24, scope: !226)
!234 = !DILocalVariable(name: "n", scope: !226, file: !2, line: 67, type: !52)
!235 = !DILocation(line: 67, column: 7, scope: !226)
!236 = !DILocalVariable(name: "mi", scope: !226, file: !2, line: 68, type: !237)
!237 = !DICompositeType(tag: DW_TAG_array_type, baseType: !52, size: 96, elements: !238)
!238 = !{!239}
!239 = !DISubrange(count: 3)
!240 = !DILocation(line: 68, column: 7, scope: !226)
!241 = !DILocalVariable(name: "md", scope: !226, file: !2, line: 69, type: !242)
!242 = !DICompositeType(tag: DW_TAG_array_type, baseType: !36, size: 128, elements: !243)
!243 = !{!244}
!244 = !DISubrange(count: 2)
!245 = !DILocation(line: 69, column: 10, scope: !226)
!246 = !DILocation(line: 70, column: 8, scope: !226)
!247 = !DILocation(line: 70, column: 12, scope: !226)
!248 = !DILocation(line: 70, column: 3, scope: !226)
!249 = !DILocation(line: 71, column: 29, scope: !226)
!250 = !DILocation(line: 71, column: 31, scope: !226)
!251 = !DILocation(line: 71, column: 36, scope: !226)
!252 = !DILocation(line: 71, column: 3, scope: !226)
!253 = !DILocation(line: 72, column: 38, scope: !226)
!254 = !DILocation(line: 72, column: 36, scope: !226)
!255 = !DILocation(line: 72, column: 41, scope: !226)
!256 = !DILocation(line: 72, column: 3, scope: !226)
!257 = !DILocation(line: 73, column: 37, scope: !226)
!258 = !DILocation(line: 73, column: 35, scope: !226)
!259 = !DILocation(line: 73, column: 44, scope: !226)
!260 = !DILocation(line: 73, column: 42, scope: !226)
!261 = !DILocation(line: 73, column: 47, scope: !226)
!262 = !DILocation(line: 73, column: 50, scope: !226)
!263 = !DILocation(line: 73, column: 3, scope: !226)
!264 = !DILocation(line: 74, column: 26, scope: !226)
!265 = !DILocation(line: 74, column: 3, scope: !226)
!266 = !DILocation(line: 75, column: 38, scope: !226)
!267 = !DILocation(line: 75, column: 3, scope: !226)
!268 = !DILocalVariable(name: "end_time", scope: !226, file: !2, line: 77, type: !230)
!269 = !DILocation(line: 77, column: 11, scope: !226)
!270 = !DILocation(line: 77, column: 22, scope: !226)
!271 = !DILocalVariable(name: "time_taken_ms", scope: !226, file: !2, line: 78, type: !36)
!272 = !DILocation(line: 78, column: 10, scope: !226)
!273 = !DILocation(line: 78, column: 36, scope: !226)
!274 = !DILocation(line: 78, column: 47, scope: !226)
!275 = !DILocation(line: 78, column: 45, scope: !226)
!276 = !DILocation(line: 78, column: 27, scope: !226)
!277 = !DILocation(line: 78, column: 60, scope: !226)
!278 = !DILocation(line: 78, column: 77, scope: !226)
!279 = !DILocation(line: 79, column: 33, scope: !226)
!280 = !DILocation(line: 79, column: 3, scope: !226)
!281 = !DILocation(line: 80, column: 3, scope: !226)
!282 = !DILocation(line: 81, column: 3, scope: !226)
