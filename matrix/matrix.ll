; ModuleID = 'matrix.c'
source_filename = "matrix.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"SGX\00", section "llvm.metadata"
@.str.1 = private unnamed_addr constant [9 x i8] c"matrix.c\00", section "llvm.metadata"
@.str.2 = private unnamed_addr constant [15 x i8] c"memsize(16, 4)\00", section "llvm.metadata"
@.str.3 = private unnamed_addr constant [6 x i8] c"TAFUN\00", section "llvm.metadata"
@.str.4 = private unnamed_addr constant [13 x i8] c"%d %d %d %d\0A\00", align 1, !dbg !0
@.str.5 = private unnamed_addr constant [19 x i8] c"use time: %.3f ms\0A\00", align 1, !dbg !7
@.str.6 = private unnamed_addr constant [48 x i8] c"**********************************************\0A\00", align 1, !dbg !12
@llvm.global.annotations = appending global [7 x { ptr, ptr, ptr, i32, ptr }] [{ ptr, ptr, ptr, i32, ptr } { ptr @mkmatrix, ptr @.str, ptr @.str.1, i32 14, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @zeromatrix, ptr @.str, ptr @.str.1, i32 27, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @freematrix, ptr @.str, ptr @.str.1, i32 35, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @mmult, ptr @.str, ptr @.str.1, i32 41, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_ma, ptr @.str, ptr @.str.1, i32 56, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_ma, ptr @.str.2, ptr @.str.1, i32 56, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_ma, ptr @.str.3, ptr @.str.1, i32 56, ptr null }], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local ptr @mkmatrix(i32 noundef %0, i32 noundef %1) #0 !dbg !35 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca ptr, align 8
  store i32 %0, ptr %3, align 4
  call void @llvm.dbg.declare(metadata ptr %3, metadata !39, metadata !DIExpression()), !dbg !40
  store i32 %1, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !41, metadata !DIExpression()), !dbg !42
  call void @llvm.dbg.declare(metadata ptr %5, metadata !43, metadata !DIExpression()), !dbg !44
  call void @llvm.dbg.declare(metadata ptr %6, metadata !45, metadata !DIExpression()), !dbg !46
  call void @llvm.dbg.declare(metadata ptr %7, metadata !47, metadata !DIExpression()), !dbg !48
  store i32 1, ptr %7, align 4, !dbg !48
  call void @llvm.dbg.declare(metadata ptr %8, metadata !49, metadata !DIExpression()), !dbg !50
  %9 = load i32, ptr %3, align 4, !dbg !51
  %10 = sext i32 %9 to i64, !dbg !51
  %11 = mul i64 %10, 8, !dbg !52
  %12 = call noalias ptr @malloc(i64 noundef %11) #6, !dbg !53
  store ptr %12, ptr %8, align 8, !dbg !50
  store i32 0, ptr %5, align 4, !dbg !54
  br label %13, !dbg !56

13:                                               ; preds = %45, %2
  %14 = load i32, ptr %5, align 4, !dbg !57
  %15 = load i32, ptr %3, align 4, !dbg !59
  %16 = icmp slt i32 %14, %15, !dbg !60
  br i1 %16, label %17, label %48, !dbg !61

17:                                               ; preds = %13
  %18 = load i32, ptr %4, align 4, !dbg !62
  %19 = sext i32 %18 to i64, !dbg !62
  %20 = mul i64 %19, 4, !dbg !64
  %21 = call noalias ptr @malloc(i64 noundef %20) #6, !dbg !65
  %22 = load ptr, ptr %8, align 8, !dbg !66
  %23 = load i32, ptr %5, align 4, !dbg !67
  %24 = sext i32 %23 to i64, !dbg !66
  %25 = getelementptr inbounds ptr, ptr %22, i64 %24, !dbg !66
  store ptr %21, ptr %25, align 8, !dbg !68
  store i32 0, ptr %6, align 4, !dbg !69
  br label %26, !dbg !71

26:                                               ; preds = %41, %17
  %27 = load i32, ptr %6, align 4, !dbg !72
  %28 = load i32, ptr %4, align 4, !dbg !74
  %29 = icmp slt i32 %27, %28, !dbg !75
  br i1 %29, label %30, label %44, !dbg !76

30:                                               ; preds = %26
  %31 = load i32, ptr %7, align 4, !dbg !77
  %32 = add nsw i32 %31, 1, !dbg !77
  store i32 %32, ptr %7, align 4, !dbg !77
  %33 = load ptr, ptr %8, align 8, !dbg !79
  %34 = load i32, ptr %5, align 4, !dbg !80
  %35 = sext i32 %34 to i64, !dbg !79
  %36 = getelementptr inbounds ptr, ptr %33, i64 %35, !dbg !79
  %37 = load ptr, ptr %36, align 8, !dbg !79
  %38 = load i32, ptr %6, align 4, !dbg !81
  %39 = sext i32 %38 to i64, !dbg !79
  %40 = getelementptr inbounds i32, ptr %37, i64 %39, !dbg !79
  store i32 %31, ptr %40, align 4, !dbg !82
  br label %41, !dbg !83

41:                                               ; preds = %30
  %42 = load i32, ptr %6, align 4, !dbg !84
  %43 = add nsw i32 %42, 1, !dbg !84
  store i32 %43, ptr %6, align 4, !dbg !84
  br label %26, !dbg !85, !llvm.loop !86

44:                                               ; preds = %26
  br label %45, !dbg !89

45:                                               ; preds = %44
  %46 = load i32, ptr %5, align 4, !dbg !90
  %47 = add nsw i32 %46, 1, !dbg !90
  store i32 %47, ptr %5, align 4, !dbg !90
  br label %13, !dbg !91, !llvm.loop !92

48:                                               ; preds = %13
  %49 = load ptr, ptr %8, align 8, !dbg !94
  ret ptr %49, !dbg !95
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: nounwind allocsize(0)
declare noalias ptr @malloc(i64 noundef) #2

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @zeromatrix(i32 noundef %0, i32 noundef %1, ptr noundef %2) #0 !dbg !96 {
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  %6 = alloca ptr, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !99, metadata !DIExpression()), !dbg !100
  store i32 %1, ptr %5, align 4
  call void @llvm.dbg.declare(metadata ptr %5, metadata !101, metadata !DIExpression()), !dbg !102
  store ptr %2, ptr %6, align 8
  call void @llvm.dbg.declare(metadata ptr %6, metadata !103, metadata !DIExpression()), !dbg !104
  call void @llvm.dbg.declare(metadata ptr %7, metadata !105, metadata !DIExpression()), !dbg !106
  call void @llvm.dbg.declare(metadata ptr %8, metadata !107, metadata !DIExpression()), !dbg !108
  store i32 0, ptr %7, align 4, !dbg !109
  br label %9, !dbg !111

9:                                                ; preds = %31, %3
  %10 = load i32, ptr %7, align 4, !dbg !112
  %11 = load i32, ptr %4, align 4, !dbg !114
  %12 = icmp slt i32 %10, %11, !dbg !115
  br i1 %12, label %13, label %34, !dbg !116

13:                                               ; preds = %9
  store i32 0, ptr %8, align 4, !dbg !117
  br label %14, !dbg !119

14:                                               ; preds = %27, %13
  %15 = load i32, ptr %8, align 4, !dbg !120
  %16 = load i32, ptr %5, align 4, !dbg !122
  %17 = icmp slt i32 %15, %16, !dbg !123
  br i1 %17, label %18, label %30, !dbg !124

18:                                               ; preds = %14
  %19 = load ptr, ptr %6, align 8, !dbg !125
  %20 = load i32, ptr %7, align 4, !dbg !126
  %21 = sext i32 %20 to i64, !dbg !125
  %22 = getelementptr inbounds ptr, ptr %19, i64 %21, !dbg !125
  %23 = load ptr, ptr %22, align 8, !dbg !125
  %24 = load i32, ptr %8, align 4, !dbg !127
  %25 = sext i32 %24 to i64, !dbg !125
  %26 = getelementptr inbounds i32, ptr %23, i64 %25, !dbg !125
  store i32 0, ptr %26, align 4, !dbg !128
  br label %27, !dbg !125

27:                                               ; preds = %18
  %28 = load i32, ptr %8, align 4, !dbg !129
  %29 = add nsw i32 %28, 1, !dbg !129
  store i32 %29, ptr %8, align 4, !dbg !129
  br label %14, !dbg !130, !llvm.loop !131

30:                                               ; preds = %14
  br label %31, !dbg !132

31:                                               ; preds = %30
  %32 = load i32, ptr %7, align 4, !dbg !133
  %33 = add nsw i32 %32, 1, !dbg !133
  store i32 %33, ptr %7, align 4, !dbg !133
  br label %9, !dbg !134, !llvm.loop !135

34:                                               ; preds = %9
  ret void, !dbg !137
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @freematrix(i32 noundef %0, ptr noundef %1) #0 !dbg !138 {
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  store i32 %0, ptr %3, align 4
  call void @llvm.dbg.declare(metadata ptr %3, metadata !141, metadata !DIExpression()), !dbg !142
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !143, metadata !DIExpression()), !dbg !144
  br label %5, !dbg !145

5:                                                ; preds = %9, %2
  %6 = load i32, ptr %3, align 4, !dbg !146
  %7 = add nsw i32 %6, -1, !dbg !146
  store i32 %7, ptr %3, align 4, !dbg !146
  %8 = icmp sgt i32 %7, -1, !dbg !147
  br i1 %8, label %9, label %15, !dbg !145

9:                                                ; preds = %5
  %10 = load ptr, ptr %4, align 8, !dbg !148
  %11 = load i32, ptr %3, align 4, !dbg !150
  %12 = sext i32 %11 to i64, !dbg !148
  %13 = getelementptr inbounds ptr, ptr %10, i64 %12, !dbg !148
  %14 = load ptr, ptr %13, align 8, !dbg !148
  call void @free(ptr noundef %14) #7, !dbg !151
  br label %5, !dbg !145, !llvm.loop !152

15:                                               ; preds = %5
  %16 = load ptr, ptr %4, align 8, !dbg !154
  call void @free(ptr noundef %16) #7, !dbg !155
  ret void, !dbg !156
}

; Function Attrs: nounwind
declare void @free(ptr noundef) #3

; Function Attrs: noinline nounwind optnone uwtable
define dso_local ptr @mmult(i32 noundef %0, i32 noundef %1, ptr noundef %2, ptr noundef %3, ptr noundef %4) #0 !dbg !157 {
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca ptr, align 8
  %9 = alloca ptr, align 8
  %10 = alloca ptr, align 8
  %11 = alloca i32, align 4
  %12 = alloca i32, align 4
  %13 = alloca i32, align 4
  %14 = alloca i32, align 4
  store i32 %0, ptr %6, align 4
  call void @llvm.dbg.declare(metadata ptr %6, metadata !160, metadata !DIExpression()), !dbg !161
  store i32 %1, ptr %7, align 4
  call void @llvm.dbg.declare(metadata ptr %7, metadata !162, metadata !DIExpression()), !dbg !163
  store ptr %2, ptr %8, align 8
  call void @llvm.dbg.declare(metadata ptr %8, metadata !164, metadata !DIExpression()), !dbg !165
  store ptr %3, ptr %9, align 8
  call void @llvm.dbg.declare(metadata ptr %9, metadata !166, metadata !DIExpression()), !dbg !167
  store ptr %4, ptr %10, align 8
  call void @llvm.dbg.declare(metadata ptr %10, metadata !168, metadata !DIExpression()), !dbg !169
  call void @llvm.dbg.declare(metadata ptr %11, metadata !170, metadata !DIExpression()), !dbg !171
  call void @llvm.dbg.declare(metadata ptr %12, metadata !172, metadata !DIExpression()), !dbg !173
  call void @llvm.dbg.declare(metadata ptr %13, metadata !174, metadata !DIExpression()), !dbg !175
  call void @llvm.dbg.declare(metadata ptr %14, metadata !176, metadata !DIExpression()), !dbg !177
  store i32 0, ptr %11, align 4, !dbg !178
  br label %15, !dbg !180

15:                                               ; preds = %68, %5
  %16 = load i32, ptr %11, align 4, !dbg !181
  %17 = load i32, ptr %6, align 4, !dbg !183
  %18 = icmp slt i32 %16, %17, !dbg !184
  br i1 %18, label %19, label %71, !dbg !185

19:                                               ; preds = %15
  store i32 0, ptr %12, align 4, !dbg !186
  br label %20, !dbg !189

20:                                               ; preds = %64, %19
  %21 = load i32, ptr %12, align 4, !dbg !190
  %22 = load i32, ptr %7, align 4, !dbg !192
  %23 = icmp slt i32 %21, %22, !dbg !193
  br i1 %23, label %24, label %67, !dbg !194

24:                                               ; preds = %20
  store i32 0, ptr %14, align 4, !dbg !195
  store i32 0, ptr %13, align 4, !dbg !197
  br label %25, !dbg !199

25:                                               ; preds = %51, %24
  %26 = load i32, ptr %13, align 4, !dbg !200
  %27 = load i32, ptr %7, align 4, !dbg !202
  %28 = icmp slt i32 %26, %27, !dbg !203
  br i1 %28, label %29, label %54, !dbg !204

29:                                               ; preds = %25
  %30 = load ptr, ptr %8, align 8, !dbg !205
  %31 = load i32, ptr %11, align 4, !dbg !207
  %32 = sext i32 %31 to i64, !dbg !205
  %33 = getelementptr inbounds ptr, ptr %30, i64 %32, !dbg !205
  %34 = load ptr, ptr %33, align 8, !dbg !205
  %35 = load i32, ptr %13, align 4, !dbg !208
  %36 = sext i32 %35 to i64, !dbg !205
  %37 = getelementptr inbounds i32, ptr %34, i64 %36, !dbg !205
  %38 = load i32, ptr %37, align 4, !dbg !205
  %39 = load ptr, ptr %9, align 8, !dbg !209
  %40 = load i32, ptr %13, align 4, !dbg !210
  %41 = sext i32 %40 to i64, !dbg !209
  %42 = getelementptr inbounds ptr, ptr %39, i64 %41, !dbg !209
  %43 = load ptr, ptr %42, align 8, !dbg !209
  %44 = load i32, ptr %12, align 4, !dbg !211
  %45 = sext i32 %44 to i64, !dbg !209
  %46 = getelementptr inbounds i32, ptr %43, i64 %45, !dbg !209
  %47 = load i32, ptr %46, align 4, !dbg !209
  %48 = mul nsw i32 %38, %47, !dbg !212
  %49 = load i32, ptr %14, align 4, !dbg !213
  %50 = add nsw i32 %49, %48, !dbg !213
  store i32 %50, ptr %14, align 4, !dbg !213
  br label %51, !dbg !214

51:                                               ; preds = %29
  %52 = load i32, ptr %13, align 4, !dbg !215
  %53 = add nsw i32 %52, 1, !dbg !215
  store i32 %53, ptr %13, align 4, !dbg !215
  br label %25, !dbg !216, !llvm.loop !217

54:                                               ; preds = %25
  %55 = load i32, ptr %14, align 4, !dbg !219
  %56 = load ptr, ptr %10, align 8, !dbg !220
  %57 = load i32, ptr %11, align 4, !dbg !221
  %58 = sext i32 %57 to i64, !dbg !220
  %59 = getelementptr inbounds ptr, ptr %56, i64 %58, !dbg !220
  %60 = load ptr, ptr %59, align 8, !dbg !220
  %61 = load i32, ptr %12, align 4, !dbg !222
  %62 = sext i32 %61 to i64, !dbg !220
  %63 = getelementptr inbounds i32, ptr %60, i64 %62, !dbg !220
  store i32 %55, ptr %63, align 4, !dbg !223
  br label %64, !dbg !224

64:                                               ; preds = %54
  %65 = load i32, ptr %12, align 4, !dbg !225
  %66 = add nsw i32 %65, 1, !dbg !225
  store i32 %66, ptr %12, align 4, !dbg !225
  br label %20, !dbg !226, !llvm.loop !227

67:                                               ; preds = %20
  br label %68, !dbg !229

68:                                               ; preds = %67
  %69 = load i32, ptr %11, align 4, !dbg !230
  %70 = add nsw i32 %69, 1, !dbg !230
  store i32 %70, ptr %11, align 4, !dbg !230
  br label %15, !dbg !231, !llvm.loop !232

71:                                               ; preds = %15
  %72 = load ptr, ptr %10, align 8, !dbg !234
  ret ptr %72, !dbg !235
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @d_ma(ptr noundef %0, ptr noundef %1) #0 !dbg !236 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca ptr, align 8
  %7 = alloca ptr, align 8
  %8 = alloca ptr, align 8
  store ptr %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !239, metadata !DIExpression()), !dbg !240
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !241, metadata !DIExpression()), !dbg !242
  call void @llvm.dbg.declare(metadata ptr %5, metadata !243, metadata !DIExpression()), !dbg !244
  call void @llvm.dbg.declare(metadata ptr %6, metadata !245, metadata !DIExpression()), !dbg !246
  %9 = call ptr @mkmatrix(i32 noundef 10, i32 noundef 10), !dbg !247
  store ptr %9, ptr %6, align 8, !dbg !246
  call void @llvm.dbg.declare(metadata ptr %7, metadata !248, metadata !DIExpression()), !dbg !249
  %10 = call ptr @mkmatrix(i32 noundef 10, i32 noundef 10), !dbg !250
  store ptr %10, ptr %7, align 8, !dbg !249
  call void @llvm.dbg.declare(metadata ptr %8, metadata !251, metadata !DIExpression()), !dbg !252
  %11 = call ptr @mkmatrix(i32 noundef 10, i32 noundef 10), !dbg !253
  store ptr %11, ptr %8, align 8, !dbg !252
  store i32 0, ptr %5, align 4, !dbg !254
  br label %12, !dbg !256

12:                                               ; preds = %22, %2
  %13 = load i32, ptr %5, align 4, !dbg !257
  %14 = load ptr, ptr %4, align 8, !dbg !259
  %15 = load i32, ptr %14, align 4, !dbg !260
  %16 = icmp slt i32 %13, %15, !dbg !261
  br i1 %16, label %17, label %25, !dbg !262

17:                                               ; preds = %12
  %18 = load ptr, ptr %6, align 8, !dbg !263
  %19 = load ptr, ptr %7, align 8, !dbg !265
  %20 = load ptr, ptr %8, align 8, !dbg !266
  %21 = call ptr @mmult(i32 noundef 10, i32 noundef 10, ptr noundef %18, ptr noundef %19, ptr noundef %20), !dbg !267
  store ptr %21, ptr %8, align 8, !dbg !268
  br label %22, !dbg !269

22:                                               ; preds = %17
  %23 = load i32, ptr %5, align 4, !dbg !270
  %24 = add nsw i32 %23, 1, !dbg !270
  store i32 %24, ptr %5, align 4, !dbg !270
  br label %12, !dbg !271, !llvm.loop !272

25:                                               ; preds = %12
  %26 = load ptr, ptr %8, align 8, !dbg !274
  %27 = getelementptr inbounds ptr, ptr %26, i64 0, !dbg !274
  %28 = load ptr, ptr %27, align 8, !dbg !274
  %29 = getelementptr inbounds i32, ptr %28, i64 0, !dbg !274
  %30 = load i32, ptr %29, align 4, !dbg !274
  %31 = load ptr, ptr %3, align 8, !dbg !275
  store i32 %30, ptr %31, align 4, !dbg !276
  %32 = load ptr, ptr %8, align 8, !dbg !277
  %33 = getelementptr inbounds ptr, ptr %32, i64 2, !dbg !277
  %34 = load ptr, ptr %33, align 8, !dbg !277
  %35 = getelementptr inbounds i32, ptr %34, i64 3, !dbg !277
  %36 = load i32, ptr %35, align 4, !dbg !277
  %37 = load ptr, ptr %3, align 8, !dbg !278
  %38 = getelementptr inbounds i32, ptr %37, i64 1, !dbg !279
  store i32 %36, ptr %38, align 4, !dbg !280
  %39 = load ptr, ptr %8, align 8, !dbg !281
  %40 = getelementptr inbounds ptr, ptr %39, i64 3, !dbg !281
  %41 = load ptr, ptr %40, align 8, !dbg !281
  %42 = getelementptr inbounds i32, ptr %41, i64 2, !dbg !281
  %43 = load i32, ptr %42, align 4, !dbg !281
  %44 = load ptr, ptr %3, align 8, !dbg !282
  %45 = getelementptr inbounds i32, ptr %44, i64 2, !dbg !283
  store i32 %43, ptr %45, align 4, !dbg !284
  %46 = load ptr, ptr %8, align 8, !dbg !285
  %47 = getelementptr inbounds ptr, ptr %46, i64 4, !dbg !285
  %48 = load ptr, ptr %47, align 8, !dbg !285
  %49 = getelementptr inbounds i32, ptr %48, i64 4, !dbg !285
  %50 = load i32, ptr %49, align 4, !dbg !285
  %51 = load ptr, ptr %3, align 8, !dbg !286
  %52 = getelementptr inbounds i32, ptr %51, i64 3, !dbg !287
  store i32 %50, ptr %52, align 4, !dbg !288
  %53 = load ptr, ptr %6, align 8, !dbg !289
  call void @freematrix(i32 noundef 10, ptr noundef %53), !dbg !290
  %54 = load ptr, ptr %7, align 8, !dbg !291
  call void @freematrix(i32 noundef 10, ptr noundef %54), !dbg !292
  %55 = load ptr, ptr %8, align 8, !dbg !293
  call void @freematrix(i32 noundef 10, ptr noundef %55), !dbg !294
  ret void, !dbg !295
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main(i32 noundef %0, ptr noundef %1) #0 !dbg !296 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca i64, align 8
  %7 = alloca i32, align 4
  %8 = alloca [4 x i32], align 16
  %9 = alloca i64, align 8
  %10 = alloca double, align 8
  store i32 0, ptr %3, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !301, metadata !DIExpression()), !dbg !302
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !303, metadata !DIExpression()), !dbg !304
  call void @llvm.dbg.declare(metadata ptr %6, metadata !305, metadata !DIExpression()), !dbg !308
  %11 = call i64 @clock() #7, !dbg !309
  store i64 %11, ptr %6, align 8, !dbg !308
  call void @llvm.dbg.declare(metadata ptr %7, metadata !310, metadata !DIExpression()), !dbg !311
  %12 = load i32, ptr %4, align 4, !dbg !312
  %13 = icmp eq i32 %12, 2, !dbg !313
  br i1 %13, label %14, label %19, !dbg !314

14:                                               ; preds = %2
  %15 = load ptr, ptr %5, align 8, !dbg !315
  %16 = getelementptr inbounds ptr, ptr %15, i64 1, !dbg !315
  %17 = load ptr, ptr %16, align 8, !dbg !315
  %18 = call i32 @atoi(ptr noundef %17) #8, !dbg !316
  br label %20, !dbg !314

19:                                               ; preds = %2
  br label %20, !dbg !314

20:                                               ; preds = %19, %14
  %21 = phi i32 [ %18, %14 ], [ 300000, %19 ], !dbg !314
  store i32 %21, ptr %7, align 4, !dbg !311
  call void @llvm.dbg.declare(metadata ptr %8, metadata !317, metadata !DIExpression()), !dbg !321
  %22 = getelementptr inbounds [4 x i32], ptr %8, i64 0, i64 0, !dbg !322
  call void @d_ma(ptr noundef %22, ptr noundef %7), !dbg !323
  %23 = getelementptr inbounds [4 x i32], ptr %8, i64 0, i64 0, !dbg !324
  %24 = load i32, ptr %23, align 16, !dbg !324
  %25 = getelementptr inbounds [4 x i32], ptr %8, i64 0, i64 1, !dbg !325
  %26 = load i32, ptr %25, align 4, !dbg !325
  %27 = getelementptr inbounds [4 x i32], ptr %8, i64 0, i64 2, !dbg !326
  %28 = load i32, ptr %27, align 8, !dbg !326
  %29 = getelementptr inbounds [4 x i32], ptr %8, i64 0, i64 3, !dbg !327
  %30 = load i32, ptr %29, align 4, !dbg !327
  %31 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, i32 noundef %24, i32 noundef %26, i32 noundef %28, i32 noundef %30), !dbg !328
  call void @llvm.dbg.declare(metadata ptr %9, metadata !329, metadata !DIExpression()), !dbg !330
  %32 = call i64 @clock() #7, !dbg !331
  store i64 %32, ptr %9, align 8, !dbg !330
  call void @llvm.dbg.declare(metadata ptr %10, metadata !332, metadata !DIExpression()), !dbg !333
  %33 = load i64, ptr %9, align 8, !dbg !334
  %34 = load i64, ptr %6, align 8, !dbg !335
  %35 = sub nsw i64 %33, %34, !dbg !336
  %36 = sitofp i64 %35 to double, !dbg !337
  %37 = fdiv double %36, 1.000000e+06, !dbg !338
  %38 = fmul double %37, 1.000000e+03, !dbg !339
  store double %38, ptr %10, align 8, !dbg !333
  %39 = load double, ptr %10, align 8, !dbg !340
  %40 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, double noundef %39), !dbg !341
  %41 = call i32 (ptr, ...) @printf(ptr noundef @.str.6), !dbg !342
  ret i32 0, !dbg !343
}

; Function Attrs: nounwind
declare i64 @clock() #3

; Function Attrs: nounwind willreturn memory(read)
declare i32 @atoi(ptr noundef) #4

declare i32 @printf(ptr noundef, ...) #5

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nounwind allocsize(0) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { nounwind willreturn memory(read) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #6 = { nounwind allocsize(0) }
attributes #7 = { nounwind }
attributes #8 = { nounwind willreturn memory(read) }

!llvm.dbg.cu = !{!17}
!llvm.module.flags = !{!27, !28, !29, !30, !31, !32, !33}
!llvm.ident = !{!34}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(scope: null, file: !2, line: 88, type: !3, isLocal: true, isDefinition: true)
!2 = !DIFile(filename: "matrix.c", directory: "/home/yxk/test-sgx/SGX-test/matrix", checksumkind: CSK_MD5, checksum: "db451e8bc0fb48fe9d65ffd2246e1b33")
!3 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 104, elements: !5)
!4 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!5 = !{!6}
!6 = !DISubrange(count: 13)
!7 = !DIGlobalVariableExpression(var: !8, expr: !DIExpression())
!8 = distinct !DIGlobalVariable(scope: null, file: !2, line: 92, type: !9, isLocal: true, isDefinition: true)
!9 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 152, elements: !10)
!10 = !{!11}
!11 = !DISubrange(count: 19)
!12 = !DIGlobalVariableExpression(var: !13, expr: !DIExpression())
!13 = distinct !DIGlobalVariable(scope: null, file: !2, line: 93, type: !14, isLocal: true, isDefinition: true)
!14 = !DICompositeType(tag: DW_TAG_array_type, baseType: !4, size: 384, elements: !15)
!15 = !{!16}
!16 = !DISubrange(count: 48)
!17 = distinct !DICompileUnit(language: DW_LANG_C11, file: !2, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !18, globals: !26, splitDebugInlining: false, nameTableKind: None)
!18 = !{!19, !20, !22, !23}
!19 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !20, size: 64)
!20 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !21, size: 64)
!21 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
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
!35 = distinct !DISubprogram(name: "mkmatrix", scope: !2, file: !2, line: 14, type: !36, scopeLine: 14, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !38)
!36 = !DISubroutineType(types: !37)
!37 = !{!19, !21, !21}
!38 = !{}
!39 = !DILocalVariable(name: "rows", arg: 1, scope: !35, file: !2, line: 14, type: !21)
!40 = !DILocation(line: 14, column: 20, scope: !35)
!41 = !DILocalVariable(name: "cols", arg: 2, scope: !35, file: !2, line: 14, type: !21)
!42 = !DILocation(line: 14, column: 30, scope: !35)
!43 = !DILocalVariable(name: "i", scope: !35, file: !2, line: 15, type: !21)
!44 = !DILocation(line: 15, column: 9, scope: !35)
!45 = !DILocalVariable(name: "j", scope: !35, file: !2, line: 15, type: !21)
!46 = !DILocation(line: 15, column: 12, scope: !35)
!47 = !DILocalVariable(name: "count", scope: !35, file: !2, line: 15, type: !21)
!48 = !DILocation(line: 15, column: 15, scope: !35)
!49 = !DILocalVariable(name: "m", scope: !35, file: !2, line: 16, type: !19)
!50 = !DILocation(line: 16, column: 11, scope: !35)
!51 = !DILocation(line: 16, column: 31, scope: !35)
!52 = !DILocation(line: 16, column: 36, scope: !35)
!53 = !DILocation(line: 16, column: 24, scope: !35)
!54 = !DILocation(line: 17, column: 11, scope: !55)
!55 = distinct !DILexicalBlock(scope: !35, file: !2, line: 17, column: 5)
!56 = !DILocation(line: 17, column: 10, scope: !55)
!57 = !DILocation(line: 17, column: 15, scope: !58)
!58 = distinct !DILexicalBlock(scope: !55, file: !2, line: 17, column: 5)
!59 = !DILocation(line: 17, column: 17, scope: !58)
!60 = !DILocation(line: 17, column: 16, scope: !58)
!61 = !DILocation(line: 17, column: 5, scope: !55)
!62 = !DILocation(line: 18, column: 24, scope: !63)
!63 = distinct !DILexicalBlock(scope: !58, file: !2, line: 17, column: 28)
!64 = !DILocation(line: 18, column: 29, scope: !63)
!65 = !DILocation(line: 18, column: 17, scope: !63)
!66 = !DILocation(line: 18, column: 2, scope: !63)
!67 = !DILocation(line: 18, column: 4, scope: !63)
!68 = !DILocation(line: 18, column: 7, scope: !63)
!69 = !DILocation(line: 19, column: 8, scope: !70)
!70 = distinct !DILexicalBlock(scope: !63, file: !2, line: 19, column: 2)
!71 = !DILocation(line: 19, column: 7, scope: !70)
!72 = !DILocation(line: 19, column: 12, scope: !73)
!73 = distinct !DILexicalBlock(scope: !70, file: !2, line: 19, column: 2)
!74 = !DILocation(line: 19, column: 14, scope: !73)
!75 = !DILocation(line: 19, column: 13, scope: !73)
!76 = !DILocation(line: 19, column: 2, scope: !70)
!77 = !DILocation(line: 20, column: 21, scope: !78)
!78 = distinct !DILexicalBlock(scope: !73, file: !2, line: 19, column: 25)
!79 = !DILocation(line: 20, column: 6, scope: !78)
!80 = !DILocation(line: 20, column: 8, scope: !78)
!81 = !DILocation(line: 20, column: 11, scope: !78)
!82 = !DILocation(line: 20, column: 14, scope: !78)
!83 = !DILocation(line: 21, column: 2, scope: !78)
!84 = !DILocation(line: 19, column: 21, scope: !73)
!85 = !DILocation(line: 19, column: 2, scope: !73)
!86 = distinct !{!86, !76, !87, !88}
!87 = !DILocation(line: 21, column: 2, scope: !70)
!88 = !{!"llvm.loop.mustprogress"}
!89 = !DILocation(line: 22, column: 5, scope: !63)
!90 = !DILocation(line: 17, column: 24, scope: !58)
!91 = !DILocation(line: 17, column: 5, scope: !58)
!92 = distinct !{!92, !61, !93, !88}
!93 = !DILocation(line: 22, column: 5, scope: !55)
!94 = !DILocation(line: 23, column: 12, scope: !35)
!95 = !DILocation(line: 23, column: 5, scope: !35)
!96 = distinct !DISubprogram(name: "zeromatrix", scope: !2, file: !2, line: 27, type: !97, scopeLine: 27, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !38)
!97 = !DISubroutineType(types: !98)
!98 = !{null, !21, !21, !19}
!99 = !DILocalVariable(name: "rows", arg: 1, scope: !96, file: !2, line: 27, type: !21)
!100 = !DILocation(line: 27, column: 21, scope: !96)
!101 = !DILocalVariable(name: "cols", arg: 2, scope: !96, file: !2, line: 27, type: !21)
!102 = !DILocation(line: 27, column: 31, scope: !96)
!103 = !DILocalVariable(name: "m", arg: 3, scope: !96, file: !2, line: 27, type: !19)
!104 = !DILocation(line: 27, column: 43, scope: !96)
!105 = !DILocalVariable(name: "i", scope: !96, file: !2, line: 28, type: !21)
!106 = !DILocation(line: 28, column: 9, scope: !96)
!107 = !DILocalVariable(name: "j", scope: !96, file: !2, line: 28, type: !21)
!108 = !DILocation(line: 28, column: 12, scope: !96)
!109 = !DILocation(line: 29, column: 11, scope: !110)
!110 = distinct !DILexicalBlock(scope: !96, file: !2, line: 29, column: 5)
!111 = !DILocation(line: 29, column: 10, scope: !110)
!112 = !DILocation(line: 29, column: 15, scope: !113)
!113 = distinct !DILexicalBlock(scope: !110, file: !2, line: 29, column: 5)
!114 = !DILocation(line: 29, column: 17, scope: !113)
!115 = !DILocation(line: 29, column: 16, scope: !113)
!116 = !DILocation(line: 29, column: 5, scope: !110)
!117 = !DILocation(line: 30, column: 8, scope: !118)
!118 = distinct !DILexicalBlock(scope: !113, file: !2, line: 30, column: 2)
!119 = !DILocation(line: 30, column: 7, scope: !118)
!120 = !DILocation(line: 30, column: 12, scope: !121)
!121 = distinct !DILexicalBlock(scope: !118, file: !2, line: 30, column: 2)
!122 = !DILocation(line: 30, column: 14, scope: !121)
!123 = !DILocation(line: 30, column: 13, scope: !121)
!124 = !DILocation(line: 30, column: 2, scope: !118)
!125 = !DILocation(line: 31, column: 6, scope: !121)
!126 = !DILocation(line: 31, column: 8, scope: !121)
!127 = !DILocation(line: 31, column: 11, scope: !121)
!128 = !DILocation(line: 31, column: 14, scope: !121)
!129 = !DILocation(line: 30, column: 21, scope: !121)
!130 = !DILocation(line: 30, column: 2, scope: !121)
!131 = distinct !{!131, !124, !132, !88}
!132 = !DILocation(line: 31, column: 16, scope: !118)
!133 = !DILocation(line: 29, column: 24, scope: !113)
!134 = !DILocation(line: 29, column: 5, scope: !113)
!135 = distinct !{!135, !116, !136, !88}
!136 = !DILocation(line: 31, column: 16, scope: !110)
!137 = !DILocation(line: 32, column: 1, scope: !96)
!138 = distinct !DISubprogram(name: "freematrix", scope: !2, file: !2, line: 35, type: !139, scopeLine: 35, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !38)
!139 = !DISubroutineType(types: !140)
!140 = !{null, !21, !19}
!141 = !DILocalVariable(name: "rows", arg: 1, scope: !138, file: !2, line: 35, type: !21)
!142 = !DILocation(line: 35, column: 21, scope: !138)
!143 = !DILocalVariable(name: "m", arg: 2, scope: !138, file: !2, line: 35, type: !19)
!144 = !DILocation(line: 35, column: 33, scope: !138)
!145 = !DILocation(line: 36, column: 5, scope: !138)
!146 = !DILocation(line: 36, column: 12, scope: !138)
!147 = !DILocation(line: 36, column: 19, scope: !138)
!148 = !DILocation(line: 36, column: 32, scope: !149)
!149 = distinct !DILexicalBlock(scope: !138, file: !2, line: 36, column: 25)
!150 = !DILocation(line: 36, column: 34, scope: !149)
!151 = !DILocation(line: 36, column: 27, scope: !149)
!152 = distinct !{!152, !145, !153, !88}
!153 = !DILocation(line: 36, column: 42, scope: !138)
!154 = !DILocation(line: 37, column: 10, scope: !138)
!155 = !DILocation(line: 37, column: 5, scope: !138)
!156 = !DILocation(line: 38, column: 1, scope: !138)
!157 = distinct !DISubprogram(name: "mmult", scope: !2, file: !2, line: 41, type: !158, scopeLine: 41, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !38)
!158 = !DISubroutineType(types: !159)
!159 = !{!19, !21, !21, !19, !19, !19}
!160 = !DILocalVariable(name: "rows", arg: 1, scope: !157, file: !2, line: 41, type: !21)
!161 = !DILocation(line: 41, column: 17, scope: !157)
!162 = !DILocalVariable(name: "cols", arg: 2, scope: !157, file: !2, line: 41, type: !21)
!163 = !DILocation(line: 41, column: 27, scope: !157)
!164 = !DILocalVariable(name: "m1", arg: 3, scope: !157, file: !2, line: 41, type: !19)
!165 = !DILocation(line: 41, column: 39, scope: !157)
!166 = !DILocalVariable(name: "m2", arg: 4, scope: !157, file: !2, line: 41, type: !19)
!167 = !DILocation(line: 41, column: 49, scope: !157)
!168 = !DILocalVariable(name: "m3", arg: 5, scope: !157, file: !2, line: 41, type: !19)
!169 = !DILocation(line: 41, column: 59, scope: !157)
!170 = !DILocalVariable(name: "i", scope: !157, file: !2, line: 42, type: !21)
!171 = !DILocation(line: 42, column: 9, scope: !157)
!172 = !DILocalVariable(name: "j", scope: !157, file: !2, line: 42, type: !21)
!173 = !DILocation(line: 42, column: 12, scope: !157)
!174 = !DILocalVariable(name: "k", scope: !157, file: !2, line: 42, type: !21)
!175 = !DILocation(line: 42, column: 15, scope: !157)
!176 = !DILocalVariable(name: "val", scope: !157, file: !2, line: 42, type: !21)
!177 = !DILocation(line: 42, column: 18, scope: !157)
!178 = !DILocation(line: 43, column: 11, scope: !179)
!179 = distinct !DILexicalBlock(scope: !157, file: !2, line: 43, column: 5)
!180 = !DILocation(line: 43, column: 10, scope: !179)
!181 = !DILocation(line: 43, column: 15, scope: !182)
!182 = distinct !DILexicalBlock(scope: !179, file: !2, line: 43, column: 5)
!183 = !DILocation(line: 43, column: 17, scope: !182)
!184 = !DILocation(line: 43, column: 16, scope: !182)
!185 = !DILocation(line: 43, column: 5, scope: !179)
!186 = !DILocation(line: 44, column: 8, scope: !187)
!187 = distinct !DILexicalBlock(scope: !188, file: !2, line: 44, column: 2)
!188 = distinct !DILexicalBlock(scope: !182, file: !2, line: 43, column: 28)
!189 = !DILocation(line: 44, column: 7, scope: !187)
!190 = !DILocation(line: 44, column: 12, scope: !191)
!191 = distinct !DILexicalBlock(scope: !187, file: !2, line: 44, column: 2)
!192 = !DILocation(line: 44, column: 14, scope: !191)
!193 = !DILocation(line: 44, column: 13, scope: !191)
!194 = !DILocation(line: 44, column: 2, scope: !187)
!195 = !DILocation(line: 45, column: 10, scope: !196)
!196 = distinct !DILexicalBlock(scope: !191, file: !2, line: 44, column: 25)
!197 = !DILocation(line: 46, column: 12, scope: !198)
!198 = distinct !DILexicalBlock(scope: !196, file: !2, line: 46, column: 6)
!199 = !DILocation(line: 46, column: 11, scope: !198)
!200 = !DILocation(line: 46, column: 16, scope: !201)
!201 = distinct !DILexicalBlock(scope: !198, file: !2, line: 46, column: 6)
!202 = !DILocation(line: 46, column: 18, scope: !201)
!203 = !DILocation(line: 46, column: 17, scope: !201)
!204 = !DILocation(line: 46, column: 6, scope: !198)
!205 = !DILocation(line: 47, column: 10, scope: !206)
!206 = distinct !DILexicalBlock(scope: !201, file: !2, line: 46, column: 29)
!207 = !DILocation(line: 47, column: 13, scope: !206)
!208 = !DILocation(line: 47, column: 16, scope: !206)
!209 = !DILocation(line: 47, column: 21, scope: !206)
!210 = !DILocation(line: 47, column: 24, scope: !206)
!211 = !DILocation(line: 47, column: 27, scope: !206)
!212 = !DILocation(line: 47, column: 19, scope: !206)
!213 = !DILocation(line: 47, column: 7, scope: !206)
!214 = !DILocation(line: 48, column: 6, scope: !206)
!215 = !DILocation(line: 46, column: 25, scope: !201)
!216 = !DILocation(line: 46, column: 6, scope: !201)
!217 = distinct !{!217, !204, !218, !88}
!218 = !DILocation(line: 48, column: 6, scope: !198)
!219 = !DILocation(line: 49, column: 17, scope: !196)
!220 = !DILocation(line: 49, column: 6, scope: !196)
!221 = !DILocation(line: 49, column: 9, scope: !196)
!222 = !DILocation(line: 49, column: 12, scope: !196)
!223 = !DILocation(line: 49, column: 15, scope: !196)
!224 = !DILocation(line: 50, column: 2, scope: !196)
!225 = !DILocation(line: 44, column: 21, scope: !191)
!226 = !DILocation(line: 44, column: 2, scope: !191)
!227 = distinct !{!227, !194, !228, !88}
!228 = !DILocation(line: 50, column: 2, scope: !187)
!229 = !DILocation(line: 51, column: 5, scope: !188)
!230 = !DILocation(line: 43, column: 24, scope: !182)
!231 = !DILocation(line: 43, column: 5, scope: !182)
!232 = distinct !{!232, !185, !233, !88}
!233 = !DILocation(line: 51, column: 5, scope: !179)
!234 = !DILocation(line: 52, column: 12, scope: !157)
!235 = !DILocation(line: 52, column: 5, scope: !157)
!236 = distinct !DISubprogram(name: "d_ma", scope: !2, file: !2, line: 56, type: !237, scopeLine: 56, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !38)
!237 = !DISubroutineType(types: !238)
!238 = !{null, !20, !20}
!239 = !DILocalVariable(name: "mv", arg: 1, scope: !236, file: !2, line: 56, type: !20)
!240 = !DILocation(line: 56, column: 16, scope: !236)
!241 = !DILocalVariable(name: "n", arg: 2, scope: !236, file: !2, line: 56, type: !20)
!242 = !DILocation(line: 56, column: 25, scope: !236)
!243 = !DILocalVariable(name: "i", scope: !236, file: !2, line: 59, type: !21)
!244 = !DILocation(line: 59, column: 9, scope: !236)
!245 = !DILocalVariable(name: "m1", scope: !236, file: !2, line: 61, type: !19)
!246 = !DILocation(line: 61, column: 11, scope: !236)
!247 = !DILocation(line: 61, column: 16, scope: !236)
!248 = !DILocalVariable(name: "m2", scope: !236, file: !2, line: 62, type: !19)
!249 = !DILocation(line: 62, column: 11, scope: !236)
!250 = !DILocation(line: 62, column: 16, scope: !236)
!251 = !DILocalVariable(name: "mm", scope: !236, file: !2, line: 63, type: !19)
!252 = !DILocation(line: 63, column: 11, scope: !236)
!253 = !DILocation(line: 63, column: 16, scope: !236)
!254 = !DILocation(line: 65, column: 11, scope: !255)
!255 = distinct !DILexicalBlock(scope: !236, file: !2, line: 65, column: 5)
!256 = !DILocation(line: 65, column: 10, scope: !255)
!257 = !DILocation(line: 65, column: 15, scope: !258)
!258 = distinct !DILexicalBlock(scope: !255, file: !2, line: 65, column: 5)
!259 = !DILocation(line: 65, column: 18, scope: !258)
!260 = !DILocation(line: 65, column: 17, scope: !258)
!261 = !DILocation(line: 65, column: 16, scope: !258)
!262 = !DILocation(line: 65, column: 5, scope: !255)
!263 = !DILocation(line: 66, column: 25, scope: !264)
!264 = distinct !DILexicalBlock(scope: !258, file: !2, line: 65, column: 26)
!265 = !DILocation(line: 66, column: 29, scope: !264)
!266 = !DILocation(line: 66, column: 33, scope: !264)
!267 = !DILocation(line: 66, column: 7, scope: !264)
!268 = !DILocation(line: 66, column: 5, scope: !264)
!269 = !DILocation(line: 67, column: 5, scope: !264)
!270 = !DILocation(line: 65, column: 22, scope: !258)
!271 = !DILocation(line: 65, column: 5, scope: !258)
!272 = distinct !{!272, !262, !273, !88}
!273 = !DILocation(line: 67, column: 5, scope: !255)
!274 = !DILocation(line: 69, column: 13, scope: !236)
!275 = !DILocation(line: 69, column: 7, scope: !236)
!276 = !DILocation(line: 69, column: 11, scope: !236)
!277 = !DILocation(line: 70, column: 15, scope: !236)
!278 = !DILocation(line: 70, column: 7, scope: !236)
!279 = !DILocation(line: 70, column: 9, scope: !236)
!280 = !DILocation(line: 70, column: 13, scope: !236)
!281 = !DILocation(line: 71, column: 15, scope: !236)
!282 = !DILocation(line: 71, column: 7, scope: !236)
!283 = !DILocation(line: 71, column: 9, scope: !236)
!284 = !DILocation(line: 71, column: 13, scope: !236)
!285 = !DILocation(line: 72, column: 15, scope: !236)
!286 = !DILocation(line: 72, column: 7, scope: !236)
!287 = !DILocation(line: 72, column: 9, scope: !236)
!288 = !DILocation(line: 72, column: 13, scope: !236)
!289 = !DILocation(line: 74, column: 22, scope: !236)
!290 = !DILocation(line: 74, column: 5, scope: !236)
!291 = !DILocation(line: 75, column: 22, scope: !236)
!292 = !DILocation(line: 75, column: 5, scope: !236)
!293 = !DILocation(line: 76, column: 22, scope: !236)
!294 = !DILocation(line: 76, column: 5, scope: !236)
!295 = !DILocation(line: 79, column: 5, scope: !236)
!296 = distinct !DISubprogram(name: "main", scope: !2, file: !2, line: 82, type: !297, scopeLine: 82, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !17, retainedNodes: !38)
!297 = !DISubroutineType(types: !298)
!298 = !{!21, !21, !299}
!299 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !300, size: 64)
!300 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !4, size: 64)
!301 = !DILocalVariable(name: "argc", arg: 1, scope: !296, file: !2, line: 82, type: !21)
!302 = !DILocation(line: 82, column: 14, scope: !296)
!303 = !DILocalVariable(name: "argv", arg: 2, scope: !296, file: !2, line: 82, type: !299)
!304 = !DILocation(line: 82, column: 26, scope: !296)
!305 = !DILocalVariable(name: "start_time", scope: !296, file: !2, line: 83, type: !306)
!306 = !DIDerivedType(tag: DW_TAG_typedef, name: "clock_t", file: !307, line: 7, baseType: !23)
!307 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h", directory: "", checksumkind: CSK_MD5, checksum: "1aade99fd778d1551600c7ca1410b9f1")
!308 = !DILocation(line: 83, column: 13, scope: !296)
!309 = !DILocation(line: 83, column: 26, scope: !296)
!310 = !DILocalVariable(name: "n", scope: !296, file: !2, line: 85, type: !21)
!311 = !DILocation(line: 85, column: 9, scope: !296)
!312 = !DILocation(line: 85, column: 15, scope: !296)
!313 = !DILocation(line: 85, column: 20, scope: !296)
!314 = !DILocation(line: 85, column: 14, scope: !296)
!315 = !DILocation(line: 85, column: 33, scope: !296)
!316 = !DILocation(line: 85, column: 28, scope: !296)
!317 = !DILocalVariable(name: "mv", scope: !296, file: !2, line: 86, type: !318)
!318 = !DICompositeType(tag: DW_TAG_array_type, baseType: !21, size: 128, elements: !319)
!319 = !{!320}
!320 = !DISubrange(count: 4)
!321 = !DILocation(line: 86, column: 9, scope: !296)
!322 = !DILocation(line: 87, column: 10, scope: !296)
!323 = !DILocation(line: 87, column: 5, scope: !296)
!324 = !DILocation(line: 88, column: 29, scope: !296)
!325 = !DILocation(line: 88, column: 36, scope: !296)
!326 = !DILocation(line: 88, column: 43, scope: !296)
!327 = !DILocation(line: 88, column: 50, scope: !296)
!328 = !DILocation(line: 88, column: 5, scope: !296)
!329 = !DILocalVariable(name: "end_time", scope: !296, file: !2, line: 90, type: !306)
!330 = !DILocation(line: 90, column: 13, scope: !296)
!331 = !DILocation(line: 90, column: 24, scope: !296)
!332 = !DILocalVariable(name: "time_taken_ms", scope: !296, file: !2, line: 91, type: !22)
!333 = !DILocation(line: 91, column: 12, scope: !296)
!334 = !DILocation(line: 91, column: 38, scope: !296)
!335 = !DILocation(line: 91, column: 49, scope: !296)
!336 = !DILocation(line: 91, column: 47, scope: !296)
!337 = !DILocation(line: 91, column: 29, scope: !296)
!338 = !DILocation(line: 91, column: 62, scope: !296)
!339 = !DILocation(line: 91, column: 79, scope: !296)
!340 = !DILocation(line: 92, column: 35, scope: !296)
!341 = !DILocation(line: 92, column: 5, scope: !296)
!342 = !DILocation(line: 93, column: 5, scope: !296)
!343 = !DILocation(line: 94, column: 5, scope: !296)
