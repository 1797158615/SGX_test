; ModuleID = 'spectral-norm.c'
source_filename = "spectral-norm.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"SGX\00", section "llvm.metadata"
@.str.1 = private unnamed_addr constant [16 x i8] c"spectral-norm.c\00", section "llvm.metadata"
@.str.2 = private unnamed_addr constant [14 x i8] c"memsize(4, 8)\00", section "llvm.metadata"
@.str.3 = private unnamed_addr constant [6 x i8] c"TAFUN\00", section "llvm.metadata"
@.str.4 = private unnamed_addr constant [7 x i8] c"%0.9f\0A\00", align 1, !dbg !0
@.str.5 = private unnamed_addr constant [19 x i8] c"use time: %.3f ms\0A\00", align 1, !dbg !7
@.str.6 = private unnamed_addr constant [48 x i8] c"**********************************************\0A\00", align 1, !dbg !12
@llvm.global.annotations = appending global [7 x { ptr, ptr, ptr, i32, ptr }] [{ ptr, ptr, ptr, i32, ptr } { ptr @eval_A, ptr @.str, ptr @.str.1, i32 15, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @eval_A_times_u, ptr @.str, ptr @.str.1, i32 18, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @eval_At_times_u, ptr @.str, ptr @.str.1, i32 29, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @eval_AtA_times_u, ptr @.str, ptr @.str.1, i32 40, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_sp, ptr @.str, ptr @.str.1, i32 44, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_sp, ptr @.str.2, ptr @.str.1, i32 44, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_sp, ptr @.str.3, ptr @.str.1, i32 44, ptr null }], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local double @eval_A(i32 noundef %0, i32 noundef %1) #0 !dbg !32 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  call void @llvm.dbg.declare(metadata ptr %3, metadata !37, metadata !DIExpression()), !dbg !38
  store i32 %1, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !39, metadata !DIExpression()), !dbg !40
  %5 = load i32, ptr %3, align 4, !dbg !41
  %6 = load i32, ptr %4, align 4, !dbg !42
  %7 = add nsw i32 %5, %6, !dbg !43
  %8 = load i32, ptr %3, align 4, !dbg !44
  %9 = load i32, ptr %4, align 4, !dbg !45
  %10 = add nsw i32 %8, %9, !dbg !46
  %11 = add nsw i32 %10, 1, !dbg !47
  %12 = mul nsw i32 %7, %11, !dbg !48
  %13 = sdiv i32 %12, 2, !dbg !49
  %14 = load i32, ptr %3, align 4, !dbg !50
  %15 = add nsw i32 %13, %14, !dbg !51
  %16 = add nsw i32 %15, 1, !dbg !52
  %17 = sitofp i32 %16 to double, !dbg !53
  %18 = fdiv double 1.000000e+00, %17, !dbg !54
  ret double %18, !dbg !55
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @eval_A_times_u(i32 noundef %0, ptr noundef %1, ptr noundef %2) #0 !dbg !56 {
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca ptr, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !62, metadata !DIExpression()), !dbg !63
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !64, metadata !DIExpression()), !dbg !65
  store ptr %2, ptr %6, align 8
  call void @llvm.dbg.declare(metadata ptr %6, metadata !66, metadata !DIExpression()), !dbg !67
  call void @llvm.dbg.declare(metadata ptr %7, metadata !68, metadata !DIExpression()), !dbg !69
  call void @llvm.dbg.declare(metadata ptr %8, metadata !70, metadata !DIExpression()), !dbg !71
  store i32 0, ptr %7, align 4, !dbg !72
  br label %9, !dbg !74

9:                                                ; preds = %41, %3
  %10 = load i32, ptr %7, align 4, !dbg !75
  %11 = load i32, ptr %4, align 4, !dbg !77
  %12 = icmp slt i32 %10, %11, !dbg !78
  br i1 %12, label %13, label %44, !dbg !79

13:                                               ; preds = %9
  %14 = load ptr, ptr %6, align 8, !dbg !80
  %15 = load i32, ptr %7, align 4, !dbg !82
  %16 = sext i32 %15 to i64, !dbg !80
  %17 = getelementptr inbounds double, ptr %14, i64 %16, !dbg !80
  store double 0.000000e+00, ptr %17, align 8, !dbg !83
  store i32 0, ptr %8, align 4, !dbg !84
  br label %18, !dbg !86

18:                                               ; preds = %37, %13
  %19 = load i32, ptr %8, align 4, !dbg !87
  %20 = load i32, ptr %4, align 4, !dbg !89
  %21 = icmp slt i32 %19, %20, !dbg !90
  br i1 %21, label %22, label %40, !dbg !91

22:                                               ; preds = %18
  %23 = load i32, ptr %7, align 4, !dbg !92
  %24 = load i32, ptr %8, align 4, !dbg !93
  %25 = call double @eval_A(i32 noundef %23, i32 noundef %24), !dbg !94
  %26 = load ptr, ptr %5, align 8, !dbg !95
  %27 = load i32, ptr %8, align 4, !dbg !96
  %28 = sext i32 %27 to i64, !dbg !95
  %29 = getelementptr inbounds double, ptr %26, i64 %28, !dbg !95
  %30 = load double, ptr %29, align 8, !dbg !95
  %31 = load ptr, ptr %6, align 8, !dbg !97
  %32 = load i32, ptr %7, align 4, !dbg !98
  %33 = sext i32 %32 to i64, !dbg !97
  %34 = getelementptr inbounds double, ptr %31, i64 %33, !dbg !97
  %35 = load double, ptr %34, align 8, !dbg !99
  %36 = call double @llvm.fmuladd.f64(double %25, double %30, double %35), !dbg !99
  store double %36, ptr %34, align 8, !dbg !99
  br label %37, !dbg !97

37:                                               ; preds = %22
  %38 = load i32, ptr %8, align 4, !dbg !100
  %39 = add nsw i32 %38, 1, !dbg !100
  store i32 %39, ptr %8, align 4, !dbg !100
  br label %18, !dbg !101, !llvm.loop !102

40:                                               ; preds = %18
  br label %41, !dbg !105

41:                                               ; preds = %40
  %42 = load i32, ptr %7, align 4, !dbg !106
  %43 = add nsw i32 %42, 1, !dbg !106
  store i32 %43, ptr %7, align 4, !dbg !106
  br label %9, !dbg !107, !llvm.loop !108

44:                                               ; preds = %9
  ret void, !dbg !110
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare double @llvm.fmuladd.f64(double, double, double) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @eval_At_times_u(i32 noundef %0, ptr noundef %1, ptr noundef %2) #0 !dbg !111 {
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca ptr, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !112, metadata !DIExpression()), !dbg !113
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !114, metadata !DIExpression()), !dbg !115
  store ptr %2, ptr %6, align 8
  call void @llvm.dbg.declare(metadata ptr %6, metadata !116, metadata !DIExpression()), !dbg !117
  call void @llvm.dbg.declare(metadata ptr %7, metadata !118, metadata !DIExpression()), !dbg !119
  call void @llvm.dbg.declare(metadata ptr %8, metadata !120, metadata !DIExpression()), !dbg !121
  store i32 0, ptr %7, align 4, !dbg !122
  br label %9, !dbg !124

9:                                                ; preds = %41, %3
  %10 = load i32, ptr %7, align 4, !dbg !125
  %11 = load i32, ptr %4, align 4, !dbg !127
  %12 = icmp slt i32 %10, %11, !dbg !128
  br i1 %12, label %13, label %44, !dbg !129

13:                                               ; preds = %9
  %14 = load ptr, ptr %6, align 8, !dbg !130
  %15 = load i32, ptr %7, align 4, !dbg !132
  %16 = sext i32 %15 to i64, !dbg !130
  %17 = getelementptr inbounds double, ptr %14, i64 %16, !dbg !130
  store double 0.000000e+00, ptr %17, align 8, !dbg !133
  store i32 0, ptr %8, align 4, !dbg !134
  br label %18, !dbg !136

18:                                               ; preds = %37, %13
  %19 = load i32, ptr %8, align 4, !dbg !137
  %20 = load i32, ptr %4, align 4, !dbg !139
  %21 = icmp slt i32 %19, %20, !dbg !140
  br i1 %21, label %22, label %40, !dbg !141

22:                                               ; preds = %18
  %23 = load i32, ptr %8, align 4, !dbg !142
  %24 = load i32, ptr %7, align 4, !dbg !143
  %25 = call double @eval_A(i32 noundef %23, i32 noundef %24), !dbg !144
  %26 = load ptr, ptr %5, align 8, !dbg !145
  %27 = load i32, ptr %8, align 4, !dbg !146
  %28 = sext i32 %27 to i64, !dbg !145
  %29 = getelementptr inbounds double, ptr %26, i64 %28, !dbg !145
  %30 = load double, ptr %29, align 8, !dbg !145
  %31 = load ptr, ptr %6, align 8, !dbg !147
  %32 = load i32, ptr %7, align 4, !dbg !148
  %33 = sext i32 %32 to i64, !dbg !147
  %34 = getelementptr inbounds double, ptr %31, i64 %33, !dbg !147
  %35 = load double, ptr %34, align 8, !dbg !149
  %36 = call double @llvm.fmuladd.f64(double %25, double %30, double %35), !dbg !149
  store double %36, ptr %34, align 8, !dbg !149
  br label %37, !dbg !147

37:                                               ; preds = %22
  %38 = load i32, ptr %8, align 4, !dbg !150
  %39 = add nsw i32 %38, 1, !dbg !150
  store i32 %39, ptr %8, align 4, !dbg !150
  br label %18, !dbg !151, !llvm.loop !152

40:                                               ; preds = %18
  br label %41, !dbg !154

41:                                               ; preds = %40
  %42 = load i32, ptr %7, align 4, !dbg !155
  %43 = add nsw i32 %42, 1, !dbg !155
  store i32 %43, ptr %7, align 4, !dbg !155
  br label %9, !dbg !156, !llvm.loop !157

44:                                               ; preds = %9
  ret void, !dbg !159
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @eval_AtA_times_u(i32 noundef %0, ptr noundef %1, ptr noundef %2) #0 !dbg !160 {
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca ptr, align 8
  %7 = alloca ptr, align 8
  %8 = alloca i64, align 8
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !161, metadata !DIExpression()), !dbg !162
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !163, metadata !DIExpression()), !dbg !164
  store ptr %2, ptr %6, align 8
  call void @llvm.dbg.declare(metadata ptr %6, metadata !165, metadata !DIExpression()), !dbg !166
  %9 = load i32, ptr %4, align 4, !dbg !167
  %10 = zext i32 %9 to i64, !dbg !168
  %11 = call ptr @llvm.stacksave(), !dbg !168
  store ptr %11, ptr %7, align 8, !dbg !168
  %12 = alloca double, i64 %10, align 16, !dbg !168
  store i64 %10, ptr %8, align 8, !dbg !168
  call void @llvm.dbg.declare(metadata ptr %8, metadata !169, metadata !DIExpression()), !dbg !171
  call void @llvm.dbg.declare(metadata ptr %12, metadata !172, metadata !DIExpression()), !dbg !176
  %13 = load i32, ptr %4, align 4, !dbg !177
  %14 = load ptr, ptr %5, align 8, !dbg !178
  call void @eval_A_times_u(i32 noundef %13, ptr noundef %14, ptr noundef %12), !dbg !179
  %15 = load i32, ptr %4, align 4, !dbg !180
  %16 = load ptr, ptr %6, align 8, !dbg !181
  call void @eval_At_times_u(i32 noundef %15, ptr noundef %12, ptr noundef %16), !dbg !182
  %17 = load ptr, ptr %7, align 8, !dbg !183
  call void @llvm.stackrestore(ptr %17), !dbg !183
  ret void, !dbg !183
}

; Function Attrs: nocallback nofree nosync nounwind willreturn
declare ptr @llvm.stacksave() #2

; Function Attrs: nocallback nofree nosync nounwind willreturn
declare void @llvm.stackrestore(ptr) #2

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @d_sp(ptr noundef %0, ptr noundef %1) #0 !dbg !184 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca ptr, align 8
  %8 = alloca i64, align 8
  %9 = alloca i64, align 8
  %10 = alloca double, align 8
  %11 = alloca double, align 8
  store ptr %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !188, metadata !DIExpression()), !dbg !189
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !190, metadata !DIExpression()), !dbg !191
  call void @llvm.dbg.declare(metadata ptr %5, metadata !192, metadata !DIExpression()), !dbg !193
  call void @llvm.dbg.declare(metadata ptr %6, metadata !194, metadata !DIExpression()), !dbg !195
  %12 = load ptr, ptr %3, align 8, !dbg !196
  %13 = load i32, ptr %12, align 4, !dbg !197
  store i32 %13, ptr %6, align 4, !dbg !195
  %14 = load i32, ptr %6, align 4, !dbg !198
  %15 = zext i32 %14 to i64, !dbg !199
  %16 = call ptr @llvm.stacksave(), !dbg !199
  store ptr %16, ptr %7, align 8, !dbg !199
  %17 = alloca double, i64 %15, align 16, !dbg !199
  store i64 %15, ptr %8, align 8, !dbg !199
  call void @llvm.dbg.declare(metadata ptr %8, metadata !200, metadata !DIExpression()), !dbg !201
  call void @llvm.dbg.declare(metadata ptr %17, metadata !202, metadata !DIExpression()), !dbg !206
  %18 = load i32, ptr %6, align 4, !dbg !207
  %19 = zext i32 %18 to i64, !dbg !199
  %20 = alloca double, i64 %19, align 16, !dbg !199
  store i64 %19, ptr %9, align 8, !dbg !199
  call void @llvm.dbg.declare(metadata ptr %9, metadata !208, metadata !DIExpression()), !dbg !201
  call void @llvm.dbg.declare(metadata ptr %20, metadata !209, metadata !DIExpression()), !dbg !213
  call void @llvm.dbg.declare(metadata ptr %10, metadata !214, metadata !DIExpression()), !dbg !215
  call void @llvm.dbg.declare(metadata ptr %11, metadata !216, metadata !DIExpression()), !dbg !217
  store i32 0, ptr %5, align 4, !dbg !218
  br label %21, !dbg !220

21:                                               ; preds = %29, %2
  %22 = load i32, ptr %5, align 4, !dbg !221
  %23 = load i32, ptr %6, align 4, !dbg !223
  %24 = icmp slt i32 %22, %23, !dbg !224
  br i1 %24, label %25, label %32, !dbg !225

25:                                               ; preds = %21
  %26 = load i32, ptr %5, align 4, !dbg !226
  %27 = sext i32 %26 to i64, !dbg !227
  %28 = getelementptr inbounds double, ptr %17, i64 %27, !dbg !227
  store double 1.000000e+00, ptr %28, align 8, !dbg !228
  br label %29, !dbg !227

29:                                               ; preds = %25
  %30 = load i32, ptr %5, align 4, !dbg !229
  %31 = add nsw i32 %30, 1, !dbg !229
  store i32 %31, ptr %5, align 4, !dbg !229
  br label %21, !dbg !230, !llvm.loop !231

32:                                               ; preds = %21
  store i32 0, ptr %5, align 4, !dbg !233
  br label %33, !dbg !235

33:                                               ; preds = %39, %32
  %34 = load i32, ptr %5, align 4, !dbg !236
  %35 = icmp slt i32 %34, 10, !dbg !238
  br i1 %35, label %36, label %42, !dbg !239

36:                                               ; preds = %33
  %37 = load i32, ptr %6, align 4, !dbg !240
  call void @eval_AtA_times_u(i32 noundef %37, ptr noundef %17, ptr noundef %20), !dbg !242
  %38 = load i32, ptr %6, align 4, !dbg !243
  call void @eval_AtA_times_u(i32 noundef %38, ptr noundef %20, ptr noundef %17), !dbg !244
  br label %39, !dbg !245

39:                                               ; preds = %36
  %40 = load i32, ptr %5, align 4, !dbg !246
  %41 = add nsw i32 %40, 1, !dbg !246
  store i32 %41, ptr %5, align 4, !dbg !246
  br label %33, !dbg !247, !llvm.loop !248

42:                                               ; preds = %33
  store double 0.000000e+00, ptr %11, align 8, !dbg !250
  store double 0.000000e+00, ptr %10, align 8, !dbg !251
  store i32 0, ptr %5, align 4, !dbg !252
  br label %43, !dbg !254

43:                                               ; preds = %68, %42
  %44 = load i32, ptr %5, align 4, !dbg !255
  %45 = load i32, ptr %6, align 4, !dbg !257
  %46 = icmp slt i32 %44, %45, !dbg !258
  br i1 %46, label %47, label %71, !dbg !259

47:                                               ; preds = %43
  %48 = load i32, ptr %5, align 4, !dbg !260
  %49 = sext i32 %48 to i64, !dbg !262
  %50 = getelementptr inbounds double, ptr %17, i64 %49, !dbg !262
  %51 = load double, ptr %50, align 8, !dbg !262
  %52 = load i32, ptr %5, align 4, !dbg !263
  %53 = sext i32 %52 to i64, !dbg !264
  %54 = getelementptr inbounds double, ptr %20, i64 %53, !dbg !264
  %55 = load double, ptr %54, align 8, !dbg !264
  %56 = load double, ptr %10, align 8, !dbg !265
  %57 = call double @llvm.fmuladd.f64(double %51, double %55, double %56), !dbg !265
  store double %57, ptr %10, align 8, !dbg !265
  %58 = load i32, ptr %5, align 4, !dbg !266
  %59 = sext i32 %58 to i64, !dbg !267
  %60 = getelementptr inbounds double, ptr %20, i64 %59, !dbg !267
  %61 = load double, ptr %60, align 8, !dbg !267
  %62 = load i32, ptr %5, align 4, !dbg !268
  %63 = sext i32 %62 to i64, !dbg !269
  %64 = getelementptr inbounds double, ptr %20, i64 %63, !dbg !269
  %65 = load double, ptr %64, align 8, !dbg !269
  %66 = load double, ptr %11, align 8, !dbg !270
  %67 = call double @llvm.fmuladd.f64(double %61, double %65, double %66), !dbg !270
  store double %67, ptr %11, align 8, !dbg !270
  br label %68, !dbg !271

68:                                               ; preds = %47
  %69 = load i32, ptr %5, align 4, !dbg !272
  %70 = add nsw i32 %69, 1, !dbg !272
  store i32 %70, ptr %5, align 4, !dbg !272
  br label %43, !dbg !273, !llvm.loop !274

71:                                               ; preds = %43
  %72 = load double, ptr %10, align 8, !dbg !276
  %73 = load double, ptr %11, align 8, !dbg !277
  %74 = fdiv double %72, %73, !dbg !278
  %75 = call double @sqrt(double noundef %74) #6, !dbg !279
  %76 = load ptr, ptr %4, align 8, !dbg !280
  store double %75, ptr %76, align 8, !dbg !281
  %77 = load ptr, ptr %7, align 8, !dbg !282
  call void @llvm.stackrestore(ptr %77), !dbg !282
  ret void, !dbg !282
}

; Function Attrs: nounwind
declare double @sqrt(double noundef) #3

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main(i32 noundef %0, ptr noundef %1) #0 !dbg !283 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca i64, align 8
  %7 = alloca i32, align 4
  %8 = alloca double, align 8
  %9 = alloca i64, align 8
  %10 = alloca double, align 8
  store i32 0, ptr %3, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !288, metadata !DIExpression()), !dbg !289
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !290, metadata !DIExpression()), !dbg !291
  call void @llvm.dbg.declare(metadata ptr %6, metadata !292, metadata !DIExpression()), !dbg !295
  %11 = call i64 @clock() #6, !dbg !296
  store i64 %11, ptr %6, align 8, !dbg !295
  call void @llvm.dbg.declare(metadata ptr %7, metadata !297, metadata !DIExpression()), !dbg !298
  %12 = load i32, ptr %4, align 4, !dbg !299
  %13 = icmp eq i32 %12, 2, !dbg !300
  br i1 %13, label %14, label %19, !dbg !301

14:                                               ; preds = %2
  %15 = load ptr, ptr %5, align 8, !dbg !302
  %16 = getelementptr inbounds ptr, ptr %15, i64 1, !dbg !302
  %17 = load ptr, ptr %16, align 8, !dbg !302
  %18 = call i32 @atoi(ptr noundef %17) #7, !dbg !303
  br label %20, !dbg !301

19:                                               ; preds = %2
  br label %20, !dbg !301

20:                                               ; preds = %19, %14
  %21 = phi i32 [ %18, %14 ], [ 2000, %19 ], !dbg !301
  store i32 %21, ptr %7, align 4, !dbg !298
  call void @llvm.dbg.declare(metadata ptr %8, metadata !304, metadata !DIExpression()), !dbg !305
  call void @d_sp(ptr noundef %7, ptr noundef %8), !dbg !306
  %22 = load double, ptr %8, align 8, !dbg !307
  %23 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, double noundef %22), !dbg !308
  call void @llvm.dbg.declare(metadata ptr %9, metadata !309, metadata !DIExpression()), !dbg !310
  %24 = call i64 @clock() #6, !dbg !311
  store i64 %24, ptr %9, align 8, !dbg !310
  call void @llvm.dbg.declare(metadata ptr %10, metadata !312, metadata !DIExpression()), !dbg !313
  %25 = load i64, ptr %9, align 8, !dbg !314
  %26 = load i64, ptr %6, align 8, !dbg !315
  %27 = sub nsw i64 %25, %26, !dbg !316
  %28 = sitofp i64 %27 to double, !dbg !317
  %29 = fdiv double %28, 1.000000e+06, !dbg !318
  %30 = fmul double %29, 1.000000e+03, !dbg !319
  store double %30, ptr %10, align 8, !dbg !313
  %31 = load double, ptr %10, align 8, !dbg !320
  %32 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, double noundef %31), !dbg !321
  %33 = call i32 (ptr, ...) @printf(ptr noundef @.str.6), !dbg !322
  ret i32 0, !dbg !323
}

; Function Attrs: nounwind
declare i64 @clock() #3

; Function Attrs: nounwind willreturn memory(read)
declare i32 @atoi(ptr noundef) #4

declare i32 @printf(ptr noundef, ...) #5

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nocallback nofree nosync nounwind willreturn }
attributes #3 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { nounwind willreturn memory(read) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #6 = { nounwind }
attributes #7 = { nounwind willreturn memory(read) }

!llvm.dbg.cu = !{!17}
!llvm.module.flags = !{!24, !25, !26, !27, !28, !29, !30}
!llvm.ident = !{!31}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(scope: null, file: !2, line: 71, type: !3, isLocal: true, isDefinition: true)
!2 = !DIFile(filename: "spectral-norm.c", directory: "/home/yxk/test-sgx/SGX-test/spectral-norm", checksumkind: CSK_MD5, checksum: "e126bfc81933e29752fea4f0dbda8adf")
!3 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 56, elements: !5)
!4 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!5 = !{!6}
!6 = !DISubrange(count: 7)
!7 = !DIGlobalVariableExpression(var: !8, expr: !DIExpression())
!8 = distinct !DIGlobalVariable(scope: null, file: !2, line: 74, type: !9, isLocal: true, isDefinition: true)
!9 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 152, elements: !10)
!10 = !{!11}
!11 = !DISubrange(count: 19)
!12 = !DIGlobalVariableExpression(var: !13, expr: !DIExpression())
!13 = distinct !DIGlobalVariable(scope: null, file: !2, line: 75, type: !14, isLocal: true, isDefinition: true)
!14 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 384, elements: !15)
!15 = !{!16}
!16 = !DISubrange(count: 48)
!17 = distinct !DICompileUnit(language: DW_LANG_C11, file: !2, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !18, globals: !23, splitDebugInlining: false, nameTableKind: None)
!18 = !{!19, !20}
!19 = !DIBasicType(name: "double", size: 64, encoding: DW_ATE_float)
!20 = !DIDerivedType(tag: DW_TAG_typedef, name: "__clock_t", file: !21, line: 156, baseType: !22)
!21 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!22 = !DIBasicType(name: "long", size: 64, encoding: DW_ATE_signed)
!23 = !{!0, !7, !12}
!24 = !{i32 7, !"Dwarf Version", i32 5}
!25 = !{i32 2, !"Debug Info Version", i32 3}
!26 = !{i32 1, !"wchar_size", i32 4}
!27 = !{i32 8, !"PIC Level", i32 2}
!28 = !{i32 7, !"PIE Level", i32 2}
!29 = !{i32 7, !"uwtable", i32 2}
!30 = !{i32 7, !"frame-pointer", i32 2}
!31 = !{!"Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)"}
!32 = distinct !DISubprogram(name: "eval_A", scope: !2, file: !2, line: 15, type: !33, scopeLine: 15, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !36)
!33 = !DISubroutineType(types: !34)
!34 = !{!19, !35, !35}
!35 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!36 = !{}
!37 = !DILocalVariable(name: "i", arg: 1, scope: !32, file: !2, line: 15, type: !35)
!38 = !DILocation(line: 15, column: 19, scope: !32)
!39 = !DILocalVariable(name: "j", arg: 2, scope: !32, file: !2, line: 15, type: !35)
!40 = !DILocation(line: 15, column: 26, scope: !32)
!41 = !DILocation(line: 15, column: 44, scope: !32)
!42 = !DILocation(line: 15, column: 46, scope: !32)
!43 = !DILocation(line: 15, column: 45, scope: !32)
!44 = !DILocation(line: 15, column: 50, scope: !32)
!45 = !DILocation(line: 15, column: 52, scope: !32)
!46 = !DILocation(line: 15, column: 51, scope: !32)
!47 = !DILocation(line: 15, column: 53, scope: !32)
!48 = !DILocation(line: 15, column: 48, scope: !32)
!49 = !DILocation(line: 15, column: 56, scope: !32)
!50 = !DILocation(line: 15, column: 59, scope: !32)
!51 = !DILocation(line: 15, column: 58, scope: !32)
!52 = !DILocation(line: 15, column: 60, scope: !32)
!53 = !DILocation(line: 15, column: 42, scope: !32)
!54 = !DILocation(line: 15, column: 41, scope: !32)
!55 = !DILocation(line: 15, column: 31, scope: !32)
!56 = distinct !DISubprogram(name: "eval_A_times_u", scope: !2, file: !2, line: 18, type: !57, scopeLine: 19, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !36)
!57 = !DISubroutineType(types: !58)
!58 = !{null, !35, !59, !61}
!59 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !60, size: 64)
!60 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !19)
!61 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !19, size: 64)
!62 = !DILocalVariable(name: "N", arg: 1, scope: !56, file: !2, line: 18, type: !35)
!63 = !DILocation(line: 18, column: 25, scope: !56)
!64 = !DILocalVariable(name: "u", arg: 2, scope: !56, file: !2, line: 18, type: !59)
!65 = !DILocation(line: 18, column: 41, scope: !56)
!66 = !DILocalVariable(name: "Au", arg: 3, scope: !56, file: !2, line: 18, type: !61)
!67 = !DILocation(line: 18, column: 53, scope: !56)
!68 = !DILocalVariable(name: "i", scope: !56, file: !2, line: 20, type: !35)
!69 = !DILocation(line: 20, column: 7, scope: !56)
!70 = !DILocalVariable(name: "j", scope: !56, file: !2, line: 20, type: !35)
!71 = !DILocation(line: 20, column: 9, scope: !56)
!72 = !DILocation(line: 21, column: 8, scope: !73)
!73 = distinct !DILexicalBlock(scope: !56, file: !2, line: 21, column: 3)
!74 = !DILocation(line: 21, column: 7, scope: !73)
!75 = !DILocation(line: 21, column: 11, scope: !76)
!76 = distinct !DILexicalBlock(scope: !73, file: !2, line: 21, column: 3)
!77 = !DILocation(line: 21, column: 13, scope: !76)
!78 = !DILocation(line: 21, column: 12, scope: !76)
!79 = !DILocation(line: 21, column: 3, scope: !73)
!80 = !DILocation(line: 23, column: 7, scope: !81)
!81 = distinct !DILexicalBlock(scope: !76, file: !2, line: 22, column: 5)
!82 = !DILocation(line: 23, column: 10, scope: !81)
!83 = !DILocation(line: 23, column: 12, scope: !81)
!84 = !DILocation(line: 24, column: 12, scope: !85)
!85 = distinct !DILexicalBlock(scope: !81, file: !2, line: 24, column: 7)
!86 = !DILocation(line: 24, column: 11, scope: !85)
!87 = !DILocation(line: 24, column: 15, scope: !88)
!88 = distinct !DILexicalBlock(scope: !85, file: !2, line: 24, column: 7)
!89 = !DILocation(line: 24, column: 17, scope: !88)
!90 = !DILocation(line: 24, column: 16, scope: !88)
!91 = !DILocation(line: 24, column: 7, scope: !85)
!92 = !DILocation(line: 24, column: 38, scope: !88)
!93 = !DILocation(line: 24, column: 40, scope: !88)
!94 = !DILocation(line: 24, column: 31, scope: !88)
!95 = !DILocation(line: 24, column: 43, scope: !88)
!96 = !DILocation(line: 24, column: 45, scope: !88)
!97 = !DILocation(line: 24, column: 24, scope: !88)
!98 = !DILocation(line: 24, column: 27, scope: !88)
!99 = !DILocation(line: 24, column: 29, scope: !88)
!100 = !DILocation(line: 24, column: 20, scope: !88)
!101 = !DILocation(line: 24, column: 7, scope: !88)
!102 = distinct !{!102, !91, !103, !104}
!103 = !DILocation(line: 24, column: 46, scope: !85)
!104 = !{!"llvm.loop.mustprogress"}
!105 = !DILocation(line: 25, column: 5, scope: !81)
!106 = !DILocation(line: 21, column: 16, scope: !76)
!107 = !DILocation(line: 21, column: 3, scope: !76)
!108 = distinct !{!108, !79, !109, !104}
!109 = !DILocation(line: 25, column: 5, scope: !73)
!110 = !DILocation(line: 26, column: 1, scope: !56)
!111 = distinct !DISubprogram(name: "eval_At_times_u", scope: !2, file: !2, line: 29, type: !57, scopeLine: 30, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !36)
!112 = !DILocalVariable(name: "N", arg: 1, scope: !111, file: !2, line: 29, type: !35)
!113 = !DILocation(line: 29, column: 26, scope: !111)
!114 = !DILocalVariable(name: "u", arg: 2, scope: !111, file: !2, line: 29, type: !59)
!115 = !DILocation(line: 29, column: 42, scope: !111)
!116 = !DILocalVariable(name: "Au", arg: 3, scope: !111, file: !2, line: 29, type: !61)
!117 = !DILocation(line: 29, column: 54, scope: !111)
!118 = !DILocalVariable(name: "i", scope: !111, file: !2, line: 31, type: !35)
!119 = !DILocation(line: 31, column: 7, scope: !111)
!120 = !DILocalVariable(name: "j", scope: !111, file: !2, line: 31, type: !35)
!121 = !DILocation(line: 31, column: 9, scope: !111)
!122 = !DILocation(line: 32, column: 8, scope: !123)
!123 = distinct !DILexicalBlock(scope: !111, file: !2, line: 32, column: 3)
!124 = !DILocation(line: 32, column: 7, scope: !123)
!125 = !DILocation(line: 32, column: 11, scope: !126)
!126 = distinct !DILexicalBlock(scope: !123, file: !2, line: 32, column: 3)
!127 = !DILocation(line: 32, column: 13, scope: !126)
!128 = !DILocation(line: 32, column: 12, scope: !126)
!129 = !DILocation(line: 32, column: 3, scope: !123)
!130 = !DILocation(line: 34, column: 7, scope: !131)
!131 = distinct !DILexicalBlock(scope: !126, file: !2, line: 33, column: 5)
!132 = !DILocation(line: 34, column: 10, scope: !131)
!133 = !DILocation(line: 34, column: 12, scope: !131)
!134 = !DILocation(line: 35, column: 12, scope: !135)
!135 = distinct !DILexicalBlock(scope: !131, file: !2, line: 35, column: 7)
!136 = !DILocation(line: 35, column: 11, scope: !135)
!137 = !DILocation(line: 35, column: 15, scope: !138)
!138 = distinct !DILexicalBlock(scope: !135, file: !2, line: 35, column: 7)
!139 = !DILocation(line: 35, column: 17, scope: !138)
!140 = !DILocation(line: 35, column: 16, scope: !138)
!141 = !DILocation(line: 35, column: 7, scope: !135)
!142 = !DILocation(line: 35, column: 38, scope: !138)
!143 = !DILocation(line: 35, column: 40, scope: !138)
!144 = !DILocation(line: 35, column: 31, scope: !138)
!145 = !DILocation(line: 35, column: 43, scope: !138)
!146 = !DILocation(line: 35, column: 45, scope: !138)
!147 = !DILocation(line: 35, column: 24, scope: !138)
!148 = !DILocation(line: 35, column: 27, scope: !138)
!149 = !DILocation(line: 35, column: 29, scope: !138)
!150 = !DILocation(line: 35, column: 20, scope: !138)
!151 = !DILocation(line: 35, column: 7, scope: !138)
!152 = distinct !{!152, !141, !153, !104}
!153 = !DILocation(line: 35, column: 46, scope: !135)
!154 = !DILocation(line: 36, column: 5, scope: !131)
!155 = !DILocation(line: 32, column: 16, scope: !126)
!156 = !DILocation(line: 32, column: 3, scope: !126)
!157 = distinct !{!157, !129, !158, !104}
!158 = !DILocation(line: 36, column: 5, scope: !123)
!159 = !DILocation(line: 37, column: 1, scope: !111)
!160 = distinct !DISubprogram(name: "eval_AtA_times_u", scope: !2, file: !2, line: 40, type: !57, scopeLine: 41, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !36)
!161 = !DILocalVariable(name: "N", arg: 1, scope: !160, file: !2, line: 40, type: !35)
!162 = !DILocation(line: 40, column: 27, scope: !160)
!163 = !DILocalVariable(name: "u", arg: 2, scope: !160, file: !2, line: 40, type: !59)
!164 = !DILocation(line: 40, column: 43, scope: !160)
!165 = !DILocalVariable(name: "AtAu", arg: 3, scope: !160, file: !2, line: 40, type: !61)
!166 = !DILocation(line: 40, column: 55, scope: !160)
!167 = !DILocation(line: 41, column: 12, scope: !160)
!168 = !DILocation(line: 41, column: 3, scope: !160)
!169 = !DILocalVariable(name: "__vla_expr0", scope: !160, type: !170, flags: DIFlagArtificial)
!170 = !DIBasicType(name: "unsigned long", size: 64, encoding: DW_ATE_unsigned)
!171 = !DILocation(line: 0, scope: !160)
!172 = !DILocalVariable(name: "v", scope: !160, file: !2, line: 41, type: !173)
!173 = !DICompositeType(tag: DW_TAG_array_type, baseType: !19, elements: !174)
!174 = !{!175}
!175 = !DISubrange(count: !169)
!176 = !DILocation(line: 41, column: 10, scope: !160)
!177 = !DILocation(line: 41, column: 31, scope: !160)
!178 = !DILocation(line: 41, column: 33, scope: !160)
!179 = !DILocation(line: 41, column: 16, scope: !160)
!180 = !DILocation(line: 41, column: 55, scope: !160)
!181 = !DILocation(line: 41, column: 59, scope: !160)
!182 = !DILocation(line: 41, column: 39, scope: !160)
!183 = !DILocation(line: 41, column: 66, scope: !160)
!184 = distinct !DISubprogram(name: "d_sp", scope: !2, file: !2, line: 44, type: !185, scopeLine: 45, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !36)
!185 = !DISubroutineType(types: !186)
!186 = !{null, !187, !61}
!187 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !35, size: 64)
!188 = !DILocalVariable(name: "Np", arg: 1, scope: !184, file: !2, line: 44, type: !187)
!189 = !DILocation(line: 44, column: 16, scope: !184)
!190 = !DILocalVariable(name: "d", arg: 2, scope: !184, file: !2, line: 44, type: !61)
!191 = !DILocation(line: 44, column: 28, scope: !184)
!192 = !DILocalVariable(name: "i", scope: !184, file: !2, line: 48, type: !35)
!193 = !DILocation(line: 48, column: 7, scope: !184)
!194 = !DILocalVariable(name: "N", scope: !184, file: !2, line: 49, type: !35)
!195 = !DILocation(line: 49, column: 7, scope: !184)
!196 = !DILocation(line: 49, column: 12, scope: !184)
!197 = !DILocation(line: 49, column: 11, scope: !184)
!198 = !DILocation(line: 50, column: 12, scope: !184)
!199 = !DILocation(line: 50, column: 3, scope: !184)
!200 = !DILocalVariable(name: "__vla_expr0", scope: !184, type: !170, flags: DIFlagArtificial)
!201 = !DILocation(line: 0, scope: !184)
!202 = !DILocalVariable(name: "u", scope: !184, file: !2, line: 50, type: !203)
!203 = !DICompositeType(tag: DW_TAG_array_type, baseType: !19, elements: !204)
!204 = !{!205}
!205 = !DISubrange(count: !200)
!206 = !DILocation(line: 50, column: 10, scope: !184)
!207 = !DILocation(line: 50, column: 17, scope: !184)
!208 = !DILocalVariable(name: "__vla_expr1", scope: !184, type: !170, flags: DIFlagArtificial)
!209 = !DILocalVariable(name: "v", scope: !184, file: !2, line: 50, type: !210)
!210 = !DICompositeType(tag: DW_TAG_array_type, baseType: !19, elements: !211)
!211 = !{!212}
!212 = !DISubrange(count: !208)
!213 = !DILocation(line: 50, column: 15, scope: !184)
!214 = !DILocalVariable(name: "vBv", scope: !184, file: !2, line: 50, type: !19)
!215 = !DILocation(line: 50, column: 20, scope: !184)
!216 = !DILocalVariable(name: "vv", scope: !184, file: !2, line: 50, type: !19)
!217 = !DILocation(line: 50, column: 24, scope: !184)
!218 = !DILocation(line: 51, column: 8, scope: !219)
!219 = distinct !DILexicalBlock(scope: !184, file: !2, line: 51, column: 3)
!220 = !DILocation(line: 51, column: 7, scope: !219)
!221 = !DILocation(line: 51, column: 11, scope: !222)
!222 = distinct !DILexicalBlock(scope: !219, file: !2, line: 51, column: 3)
!223 = !DILocation(line: 51, column: 13, scope: !222)
!224 = !DILocation(line: 51, column: 12, scope: !222)
!225 = !DILocation(line: 51, column: 3, scope: !219)
!226 = !DILocation(line: 51, column: 22, scope: !222)
!227 = !DILocation(line: 51, column: 20, scope: !222)
!228 = !DILocation(line: 51, column: 24, scope: !222)
!229 = !DILocation(line: 51, column: 16, scope: !222)
!230 = !DILocation(line: 51, column: 3, scope: !222)
!231 = distinct !{!231, !225, !232, !104}
!232 = !DILocation(line: 51, column: 25, scope: !219)
!233 = !DILocation(line: 52, column: 8, scope: !234)
!234 = distinct !DILexicalBlock(scope: !184, file: !2, line: 52, column: 3)
!235 = !DILocation(line: 52, column: 7, scope: !234)
!236 = !DILocation(line: 52, column: 11, scope: !237)
!237 = distinct !DILexicalBlock(scope: !234, file: !2, line: 52, column: 3)
!238 = !DILocation(line: 52, column: 12, scope: !237)
!239 = !DILocation(line: 52, column: 3, scope: !234)
!240 = !DILocation(line: 54, column: 24, scope: !241)
!241 = distinct !DILexicalBlock(scope: !237, file: !2, line: 53, column: 5)
!242 = !DILocation(line: 54, column: 7, scope: !241)
!243 = !DILocation(line: 55, column: 24, scope: !241)
!244 = !DILocation(line: 55, column: 7, scope: !241)
!245 = !DILocation(line: 56, column: 5, scope: !241)
!246 = !DILocation(line: 52, column: 17, scope: !237)
!247 = !DILocation(line: 52, column: 3, scope: !237)
!248 = distinct !{!248, !239, !249, !104}
!249 = !DILocation(line: 56, column: 5, scope: !234)
!250 = !DILocation(line: 57, column: 9, scope: !184)
!251 = !DILocation(line: 57, column: 6, scope: !184)
!252 = !DILocation(line: 58, column: 8, scope: !253)
!253 = distinct !DILexicalBlock(scope: !184, file: !2, line: 58, column: 3)
!254 = !DILocation(line: 58, column: 7, scope: !253)
!255 = !DILocation(line: 58, column: 11, scope: !256)
!256 = distinct !DILexicalBlock(scope: !253, file: !2, line: 58, column: 3)
!257 = !DILocation(line: 58, column: 13, scope: !256)
!258 = !DILocation(line: 58, column: 12, scope: !256)
!259 = !DILocation(line: 58, column: 3, scope: !253)
!260 = !DILocation(line: 58, column: 29, scope: !261)
!261 = distinct !DILexicalBlock(scope: !256, file: !2, line: 58, column: 20)
!262 = !DILocation(line: 58, column: 27, scope: !261)
!263 = !DILocation(line: 58, column: 34, scope: !261)
!264 = !DILocation(line: 58, column: 32, scope: !261)
!265 = !DILocation(line: 58, column: 25, scope: !261)
!266 = !DILocation(line: 58, column: 44, scope: !261)
!267 = !DILocation(line: 58, column: 42, scope: !261)
!268 = !DILocation(line: 58, column: 49, scope: !261)
!269 = !DILocation(line: 58, column: 47, scope: !261)
!270 = !DILocation(line: 58, column: 40, scope: !261)
!271 = !DILocation(line: 58, column: 53, scope: !261)
!272 = !DILocation(line: 58, column: 16, scope: !256)
!273 = !DILocation(line: 58, column: 3, scope: !256)
!274 = distinct !{!274, !259, !275, !104}
!275 = !DILocation(line: 58, column: 53, scope: !253)
!276 = !DILocation(line: 59, column: 13, scope: !184)
!277 = !DILocation(line: 59, column: 17, scope: !184)
!278 = !DILocation(line: 59, column: 16, scope: !184)
!279 = !DILocation(line: 59, column: 8, scope: !184)
!280 = !DILocation(line: 59, column: 4, scope: !184)
!281 = !DILocation(line: 59, column: 6, scope: !184)
!282 = !DILocation(line: 63, column: 1, scope: !184)
!283 = distinct !DISubprogram(name: "main", scope: !2, file: !2, line: 65, type: !284, scopeLine: 65, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !36)
!284 = !DISubroutineType(types: !285)
!285 = !{!35, !35, !286}
!286 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !287, size: 64)
!287 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !4, size: 64)
!288 = !DILocalVariable(name: "argc", arg: 1, scope: !283, file: !2, line: 65, type: !35)
!289 = !DILocation(line: 65, column: 14, scope: !283)
!290 = !DILocalVariable(name: "argv", arg: 2, scope: !283, file: !2, line: 65, type: !286)
!291 = !DILocation(line: 65, column: 26, scope: !283)
!292 = !DILocalVariable(name: "start_time", scope: !283, file: !2, line: 67, type: !293)
!293 = !DIDerivedType(tag: DW_TAG_typedef, name: "clock_t", file: !294, line: 7, baseType: !20)
!294 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h", directory: "", checksumkind: CSK_MD5, checksum: "1aade99fd778d1551600c7ca1410b9f1")
!295 = !DILocation(line: 67, column: 11, scope: !283)
!296 = !DILocation(line: 67, column: 24, scope: !283)
!297 = !DILocalVariable(name: "N", scope: !283, file: !2, line: 68, type: !35)
!298 = !DILocation(line: 68, column: 7, scope: !283)
!299 = !DILocation(line: 68, column: 13, scope: !283)
!300 = !DILocation(line: 68, column: 18, scope: !283)
!301 = !DILocation(line: 68, column: 12, scope: !283)
!302 = !DILocation(line: 68, column: 31, scope: !283)
!303 = !DILocation(line: 68, column: 26, scope: !283)
!304 = !DILocalVariable(name: "d", scope: !283, file: !2, line: 69, type: !19)
!305 = !DILocation(line: 69, column: 10, scope: !283)
!306 = !DILocation(line: 70, column: 3, scope: !283)
!307 = !DILocation(line: 71, column: 21, scope: !283)
!308 = !DILocation(line: 71, column: 4, scope: !283)
!309 = !DILocalVariable(name: "end_time", scope: !283, file: !2, line: 72, type: !293)
!310 = !DILocation(line: 72, column: 11, scope: !283)
!311 = !DILocation(line: 72, column: 22, scope: !283)
!312 = !DILocalVariable(name: "time_taken_ms", scope: !283, file: !2, line: 73, type: !19)
!313 = !DILocation(line: 73, column: 12, scope: !283)
!314 = !DILocation(line: 73, column: 38, scope: !283)
!315 = !DILocation(line: 73, column: 49, scope: !283)
!316 = !DILocation(line: 73, column: 47, scope: !283)
!317 = !DILocation(line: 73, column: 29, scope: !283)
!318 = !DILocation(line: 73, column: 62, scope: !283)
!319 = !DILocation(line: 73, column: 79, scope: !283)
!320 = !DILocation(line: 74, column: 35, scope: !283)
!321 = !DILocation(line: 74, column: 5, scope: !283)
!322 = !DILocation(line: 75, column: 5, scope: !283)
!323 = !DILocation(line: 76, column: 3, scope: !283)
