; ModuleID = 'rc4.c'
source_filename = "rc4.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%struct.rc4_state = type { i32, i32, [256 x i32] }

@.str = private unnamed_addr constant [4 x i8] c"SGX\00", section "llvm.metadata"
@.str.1 = private unnamed_addr constant [6 x i8] c"rc4.c\00", section "llvm.metadata"
@data_len = internal global [7 x i8] c"\08\08\08\14\1C\0A\00", align 1, !dbg !0
@.str.2 = private unnamed_addr constant [17 x i8] c"memsize(4, 4, 4)\00", section "llvm.metadata"
@.str.3 = private unnamed_addr constant [6 x i8] c"TAFUN\00", section "llvm.metadata"
@.str.4 = private unnamed_addr constant [26 x i8] c"\0A RC4 Validation Tests:\0A\0A\00", align 1, !dbg !11
@.str.5 = private unnamed_addr constant [10 x i8] c" Test %d \00", align 1, !dbg !17
@.str.6 = private unnamed_addr constant [9 x i8] c"failed!\0A\00", align 1, !dbg !22
@.str.7 = private unnamed_addr constant [9 x i8] c"passed.\0A\00", align 1, !dbg !27
@.str.8 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1, !dbg !29
@.str.9 = private unnamed_addr constant [19 x i8] c"use time: %.3f ms\0A\00", align 1, !dbg !34
@.str.10 = private unnamed_addr constant [48 x i8] c"**********************************************\0A\00", align 1, !dbg !39
@data = internal global <{ <{ [9 x i8], [21 x i8] }>, <{ [9 x i8], [21 x i8] }>, <{ [9 x i8], [21 x i8] }>, <{ [21 x i8], [9 x i8] }>, [30 x i8], <{ [11 x i8], [19 x i8] }>, [30 x i8] }> <{ <{ [9 x i8], [21 x i8] }> <{ [9 x i8] c"\01#Eg\89\AB\CD\EF\FF", [21 x i8] zeroinitializer }>, <{ [9 x i8], [21 x i8] }> <{ [9 x i8] c"\00\00\00\00\00\00\00\00\FF", [21 x i8] zeroinitializer }>, <{ [9 x i8], [21 x i8] }> <{ [9 x i8] c"\00\00\00\00\00\00\00\00\FF", [21 x i8] zeroinitializer }>, <{ [21 x i8], [9 x i8] }> <{ [21 x i8] c"\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\FF", [9 x i8] zeroinitializer }>, [30 x i8] c"\124Vx\9A\BC\DE\F0\124Vx\9A\BC\DE\F0\124Vx\9A\BC\DE\F0\124Vx\FF\00", <{ [11 x i8], [19 x i8] }> <{ [11 x i8] c"\00\00\00\00\00\00\00\00\00\00\FF", [19 x i8] zeroinitializer }>, [30 x i8] zeroinitializer }>, align 16, !dbg !44
@keys = internal global <{ <{ [9 x i8], [21 x i8] }>, <{ [9 x i8], [21 x i8] }>, <{ i8, [29 x i8] }>, <{ i8, i8, i8, i8, i8, [25 x i8] }>, <{ [9 x i8], [21 x i8] }>, <{ i8, i8, i8, i8, i8, [25 x i8] }>, [30 x i8] }> <{ <{ [9 x i8], [21 x i8] }> <{ [9 x i8] c"\08\01#Eg\89\AB\CD\EF", [21 x i8] zeroinitializer }>, <{ [9 x i8], [21 x i8] }> <{ [9 x i8] c"\08\01#Eg\89\AB\CD\EF", [21 x i8] zeroinitializer }>, <{ i8, [29 x i8] }> <{ i8 8, [29 x i8] zeroinitializer }>, <{ i8, i8, i8, i8, i8, [25 x i8] }> <{ i8 4, i8 -17, i8 1, i8 35, i8 69, [25 x i8] zeroinitializer }>, <{ [9 x i8], [21 x i8] }> <{ [9 x i8] c"\08\01#Eg\89\AB\CD\EF", [21 x i8] zeroinitializer }>, <{ i8, i8, i8, i8, i8, [25 x i8] }> <{ i8 4, i8 -17, i8 1, i8 35, i8 69, [25 x i8] zeroinitializer }>, [30 x i8] zeroinitializer }>, align 16, !dbg !50
@output = internal global <{ <{ [8 x i8], [22 x i8] }>, <{ [8 x i8], [22 x i8] }>, <{ [8 x i8], [22 x i8] }>, <{ [20 x i8], [10 x i8] }>, [30 x i8], <{ [10 x i8], [20 x i8] }>, [30 x i8] }> <{ <{ [8 x i8], [22 x i8] }> <{ [8 x i8] c"u\B7\87\80\99\E0\C5\96", [22 x i8] zeroinitializer }>, <{ [8 x i8], [22 x i8] }> <{ [8 x i8] c"t\94\C2\E7\10K\08y", [22 x i8] zeroinitializer }>, <{ [8 x i8], [22 x i8] }> <{ [8 x i8] c"\DE\18\89A\A37]:", [22 x i8] zeroinitializer }>, <{ [20 x i8], [10 x i8] }> <{ [20 x i8] c"\D6\A1A\A7\EC<8\DF\BDaZ\11b\E1\C7\BA6\B6xX", [10 x i8] zeroinitializer }>, [30 x i8] c"f\A0\94\9F\8A\F7\D6\89\1F\7F\83+\A83\C0\0C\89.\BE0\14<\E2\87@\01\1E\CF\00\00", <{ [10 x i8], [20 x i8] }> <{ [10 x i8] c"\D6\A1A\A7\EC<8\DF\BDa", [20 x i8] zeroinitializer }>, [30 x i8] zeroinitializer }>, align 16, !dbg !52
@llvm.global.annotations = appending global [5 x { ptr, ptr, ptr, i32, ptr }] [{ ptr, ptr, ptr, i32, ptr } { ptr @rc4_setup, ptr @.str, ptr @.str.1, i32 72, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @rc4_crypt, ptr @.str, ptr @.str.1, i32 97, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_rc4, ptr @.str, ptr @.str.1, i32 121, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_rc4, ptr @.str.2, ptr @.str.1, i32 121, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_rc4, ptr @.str.3, ptr @.str.1, i32 121, ptr null }], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @rc4_setup(ptr noundef %0, ptr noundef %1, i32 noundef %2) #0 !dbg !64 {
  %4 = alloca ptr, align 8
  %5 = alloca ptr, align 8
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca ptr, align 8
  %11 = alloca i32, align 4
  store ptr %0, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !80, metadata !DIExpression()), !dbg !81
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !82, metadata !DIExpression()), !dbg !83
  store i32 %2, ptr %6, align 4
  call void @llvm.dbg.declare(metadata ptr %6, metadata !84, metadata !DIExpression()), !dbg !85
  call void @llvm.dbg.declare(metadata ptr %7, metadata !86, metadata !DIExpression()), !dbg !87
  call void @llvm.dbg.declare(metadata ptr %8, metadata !88, metadata !DIExpression()), !dbg !89
  call void @llvm.dbg.declare(metadata ptr %9, metadata !90, metadata !DIExpression()), !dbg !91
  call void @llvm.dbg.declare(metadata ptr %10, metadata !92, metadata !DIExpression()), !dbg !94
  call void @llvm.dbg.declare(metadata ptr %11, metadata !95, metadata !DIExpression()), !dbg !96
  %12 = load ptr, ptr %4, align 8, !dbg !97
  %13 = getelementptr inbounds %struct.rc4_state, ptr %12, i32 0, i32 0, !dbg !98
  store i32 0, ptr %13, align 4, !dbg !99
  %14 = load ptr, ptr %4, align 8, !dbg !100
  %15 = getelementptr inbounds %struct.rc4_state, ptr %14, i32 0, i32 1, !dbg !101
  store i32 0, ptr %15, align 4, !dbg !102
  %16 = load ptr, ptr %4, align 8, !dbg !103
  %17 = getelementptr inbounds %struct.rc4_state, ptr %16, i32 0, i32 2, !dbg !104
  %18 = getelementptr inbounds [256 x i32], ptr %17, i64 0, i64 0, !dbg !103
  store ptr %18, ptr %10, align 8, !dbg !105
  store i32 0, ptr %7, align 4, !dbg !106
  br label %19, !dbg !108

19:                                               ; preds = %28, %3
  %20 = load i32, ptr %7, align 4, !dbg !109
  %21 = icmp slt i32 %20, 256, !dbg !111
  br i1 %21, label %22, label %31, !dbg !112

22:                                               ; preds = %19
  %23 = load i32, ptr %7, align 4, !dbg !113
  %24 = load ptr, ptr %10, align 8, !dbg !115
  %25 = load i32, ptr %7, align 4, !dbg !116
  %26 = sext i32 %25 to i64, !dbg !115
  %27 = getelementptr inbounds i32, ptr %24, i64 %26, !dbg !115
  store i32 %23, ptr %27, align 4, !dbg !117
  br label %28, !dbg !118

28:                                               ; preds = %22
  %29 = load i32, ptr %7, align 4, !dbg !119
  %30 = add nsw i32 %29, 1, !dbg !119
  store i32 %30, ptr %7, align 4, !dbg !119
  br label %19, !dbg !120, !llvm.loop !121

31:                                               ; preds = %19
  store i32 0, ptr %9, align 4, !dbg !124
  store i32 0, ptr %8, align 4, !dbg !125
  store i32 0, ptr %7, align 4, !dbg !126
  br label %32, !dbg !128

32:                                               ; preds = %73, %31
  %33 = load i32, ptr %7, align 4, !dbg !129
  %34 = icmp slt i32 %33, 256, !dbg !131
  br i1 %34, label %35, label %76, !dbg !132

35:                                               ; preds = %32
  %36 = load ptr, ptr %10, align 8, !dbg !133
  %37 = load i32, ptr %7, align 4, !dbg !135
  %38 = sext i32 %37 to i64, !dbg !133
  %39 = getelementptr inbounds i32, ptr %36, i64 %38, !dbg !133
  %40 = load i32, ptr %39, align 4, !dbg !133
  store i32 %40, ptr %11, align 4, !dbg !136
  %41 = load i32, ptr %8, align 4, !dbg !137
  %42 = load i32, ptr %11, align 4, !dbg !138
  %43 = add nsw i32 %41, %42, !dbg !139
  %44 = load ptr, ptr %5, align 8, !dbg !140
  %45 = load i32, ptr %9, align 4, !dbg !141
  %46 = sext i32 %45 to i64, !dbg !140
  %47 = getelementptr inbounds i8, ptr %44, i64 %46, !dbg !140
  %48 = load i8, ptr %47, align 1, !dbg !140
  %49 = zext i8 %48 to i32, !dbg !140
  %50 = add nsw i32 %43, %49, !dbg !142
  %51 = trunc i32 %50 to i8, !dbg !143
  %52 = zext i8 %51 to i32, !dbg !143
  store i32 %52, ptr %8, align 4, !dbg !144
  %53 = load ptr, ptr %10, align 8, !dbg !145
  %54 = load i32, ptr %8, align 4, !dbg !146
  %55 = sext i32 %54 to i64, !dbg !145
  %56 = getelementptr inbounds i32, ptr %53, i64 %55, !dbg !145
  %57 = load i32, ptr %56, align 4, !dbg !145
  %58 = load ptr, ptr %10, align 8, !dbg !147
  %59 = load i32, ptr %7, align 4, !dbg !148
  %60 = sext i32 %59 to i64, !dbg !147
  %61 = getelementptr inbounds i32, ptr %58, i64 %60, !dbg !147
  store i32 %57, ptr %61, align 4, !dbg !149
  %62 = load i32, ptr %11, align 4, !dbg !150
  %63 = load ptr, ptr %10, align 8, !dbg !151
  %64 = load i32, ptr %8, align 4, !dbg !152
  %65 = sext i32 %64 to i64, !dbg !151
  %66 = getelementptr inbounds i32, ptr %63, i64 %65, !dbg !151
  store i32 %62, ptr %66, align 4, !dbg !153
  %67 = load i32, ptr %9, align 4, !dbg !154
  %68 = add nsw i32 %67, 1, !dbg !154
  store i32 %68, ptr %9, align 4, !dbg !154
  %69 = load i32, ptr %6, align 4, !dbg !156
  %70 = icmp sge i32 %68, %69, !dbg !157
  br i1 %70, label %71, label %72, !dbg !158

71:                                               ; preds = %35
  store i32 0, ptr %9, align 4, !dbg !159
  br label %72, !dbg !160

72:                                               ; preds = %71, %35
  br label %73, !dbg !161

73:                                               ; preds = %72
  %74 = load i32, ptr %7, align 4, !dbg !162
  %75 = add nsw i32 %74, 1, !dbg !162
  store i32 %75, ptr %7, align 4, !dbg !162
  br label %32, !dbg !163, !llvm.loop !164

76:                                               ; preds = %32
  ret void, !dbg !166
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @rc4_crypt(ptr noundef %0, ptr noundef %1, i32 noundef %2) #0 !dbg !167 {
  %4 = alloca ptr, align 8
  %5 = alloca ptr, align 8
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca ptr, align 8
  %11 = alloca i32, align 4
  %12 = alloca i32, align 4
  store ptr %0, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !168, metadata !DIExpression()), !dbg !169
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !170, metadata !DIExpression()), !dbg !171
  store i32 %2, ptr %6, align 4
  call void @llvm.dbg.declare(metadata ptr %6, metadata !172, metadata !DIExpression()), !dbg !173
  call void @llvm.dbg.declare(metadata ptr %7, metadata !174, metadata !DIExpression()), !dbg !175
  call void @llvm.dbg.declare(metadata ptr %8, metadata !176, metadata !DIExpression()), !dbg !177
  call void @llvm.dbg.declare(metadata ptr %9, metadata !178, metadata !DIExpression()), !dbg !179
  call void @llvm.dbg.declare(metadata ptr %10, metadata !180, metadata !DIExpression()), !dbg !181
  call void @llvm.dbg.declare(metadata ptr %11, metadata !182, metadata !DIExpression()), !dbg !183
  call void @llvm.dbg.declare(metadata ptr %12, metadata !184, metadata !DIExpression()), !dbg !185
  %13 = load ptr, ptr %4, align 8, !dbg !186
  %14 = getelementptr inbounds %struct.rc4_state, ptr %13, i32 0, i32 0, !dbg !187
  %15 = load i32, ptr %14, align 4, !dbg !187
  store i32 %15, ptr %8, align 4, !dbg !188
  %16 = load ptr, ptr %4, align 8, !dbg !189
  %17 = getelementptr inbounds %struct.rc4_state, ptr %16, i32 0, i32 1, !dbg !190
  %18 = load i32, ptr %17, align 4, !dbg !190
  store i32 %18, ptr %9, align 4, !dbg !191
  %19 = load ptr, ptr %4, align 8, !dbg !192
  %20 = getelementptr inbounds %struct.rc4_state, ptr %19, i32 0, i32 2, !dbg !193
  %21 = getelementptr inbounds [256 x i32], ptr %20, i64 0, i64 0, !dbg !192
  store ptr %21, ptr %10, align 8, !dbg !194
  store i32 0, ptr %7, align 4, !dbg !195
  br label %22, !dbg !197

22:                                               ; preds = %71, %3
  %23 = load i32, ptr %7, align 4, !dbg !198
  %24 = load i32, ptr %6, align 4, !dbg !200
  %25 = icmp slt i32 %23, %24, !dbg !201
  br i1 %25, label %26, label %74, !dbg !202

26:                                               ; preds = %22
  %27 = load i32, ptr %8, align 4, !dbg !203
  %28 = add nsw i32 %27, 1, !dbg !205
  %29 = trunc i32 %28 to i8, !dbg !206
  %30 = zext i8 %29 to i32, !dbg !206
  store i32 %30, ptr %8, align 4, !dbg !207
  %31 = load ptr, ptr %10, align 8, !dbg !208
  %32 = load i32, ptr %8, align 4, !dbg !209
  %33 = sext i32 %32 to i64, !dbg !208
  %34 = getelementptr inbounds i32, ptr %31, i64 %33, !dbg !208
  %35 = load i32, ptr %34, align 4, !dbg !208
  store i32 %35, ptr %11, align 4, !dbg !210
  %36 = load i32, ptr %9, align 4, !dbg !211
  %37 = load i32, ptr %11, align 4, !dbg !212
  %38 = add nsw i32 %36, %37, !dbg !213
  %39 = trunc i32 %38 to i8, !dbg !214
  %40 = zext i8 %39 to i32, !dbg !214
  store i32 %40, ptr %9, align 4, !dbg !215
  %41 = load ptr, ptr %10, align 8, !dbg !216
  %42 = load i32, ptr %9, align 4, !dbg !217
  %43 = sext i32 %42 to i64, !dbg !216
  %44 = getelementptr inbounds i32, ptr %41, i64 %43, !dbg !216
  %45 = load i32, ptr %44, align 4, !dbg !216
  store i32 %45, ptr %12, align 4, !dbg !218
  %46 = load ptr, ptr %10, align 8, !dbg !219
  %47 = load i32, ptr %8, align 4, !dbg !220
  %48 = sext i32 %47 to i64, !dbg !219
  %49 = getelementptr inbounds i32, ptr %46, i64 %48, !dbg !219
  store i32 %45, ptr %49, align 4, !dbg !221
  %50 = load i32, ptr %11, align 4, !dbg !222
  %51 = load ptr, ptr %10, align 8, !dbg !223
  %52 = load i32, ptr %9, align 4, !dbg !224
  %53 = sext i32 %52 to i64, !dbg !223
  %54 = getelementptr inbounds i32, ptr %51, i64 %53, !dbg !223
  store i32 %50, ptr %54, align 4, !dbg !225
  %55 = load ptr, ptr %10, align 8, !dbg !226
  %56 = load i32, ptr %11, align 4, !dbg !227
  %57 = load i32, ptr %12, align 4, !dbg !228
  %58 = add nsw i32 %56, %57, !dbg !229
  %59 = trunc i32 %58 to i8, !dbg !230
  %60 = zext i8 %59 to i64, !dbg !226
  %61 = getelementptr inbounds i32, ptr %55, i64 %60, !dbg !226
  %62 = load i32, ptr %61, align 4, !dbg !226
  %63 = load ptr, ptr %5, align 8, !dbg !231
  %64 = load i32, ptr %7, align 4, !dbg !232
  %65 = sext i32 %64 to i64, !dbg !231
  %66 = getelementptr inbounds i8, ptr %63, i64 %65, !dbg !231
  %67 = load i8, ptr %66, align 1, !dbg !233
  %68 = zext i8 %67 to i32, !dbg !233
  %69 = xor i32 %68, %62, !dbg !233
  %70 = trunc i32 %69 to i8, !dbg !233
  store i8 %70, ptr %66, align 1, !dbg !233
  br label %71, !dbg !234

71:                                               ; preds = %26
  %72 = load i32, ptr %7, align 4, !dbg !235
  %73 = add nsw i32 %72, 1, !dbg !235
  store i32 %73, ptr %7, align 4, !dbg !235
  br label %22, !dbg !236, !llvm.loop !237

74:                                               ; preds = %22
  %75 = load i32, ptr %8, align 4, !dbg !239
  %76 = load ptr, ptr %4, align 8, !dbg !240
  %77 = getelementptr inbounds %struct.rc4_state, ptr %76, i32 0, i32 0, !dbg !241
  store i32 %75, ptr %77, align 4, !dbg !242
  %78 = load i32, ptr %9, align 4, !dbg !243
  %79 = load ptr, ptr %4, align 8, !dbg !244
  %80 = getelementptr inbounds %struct.rc4_state, ptr %79, i32 0, i32 1, !dbg !245
  store i32 %78, ptr %80, align 4, !dbg !246
  ret void, !dbg !247
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @d_rc4(ptr noundef %0, ptr noundef %1, ptr noundef %2) #0 !dbg !248 {
  %4 = alloca ptr, align 8
  %5 = alloca ptr, align 8
  %6 = alloca ptr, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca %struct.rc4_state, align 4
  %10 = alloca [30 x i8], align 16
  %11 = alloca i32, align 4
  store ptr %0, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !251, metadata !DIExpression()), !dbg !252
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !253, metadata !DIExpression()), !dbg !254
  store ptr %2, ptr %6, align 8
  call void @llvm.dbg.declare(metadata ptr %6, metadata !255, metadata !DIExpression()), !dbg !256
  call void @llvm.dbg.declare(metadata ptr %7, metadata !257, metadata !DIExpression()), !dbg !258
  call void @llvm.dbg.declare(metadata ptr %8, metadata !259, metadata !DIExpression()), !dbg !260
  %12 = load ptr, ptr %6, align 8, !dbg !261
  %13 = load i32, ptr %12, align 4, !dbg !262
  store i32 %13, ptr %8, align 4, !dbg !260
  call void @llvm.dbg.declare(metadata ptr %9, metadata !263, metadata !DIExpression()), !dbg !264
  call void @llvm.dbg.declare(metadata ptr %10, metadata !265, metadata !DIExpression()), !dbg !268
  call void @llvm.dbg.declare(metadata ptr %11, metadata !269, metadata !DIExpression()), !dbg !270
  %14 = load ptr, ptr %4, align 8, !dbg !271
  %15 = load i32, ptr %14, align 4, !dbg !272
  store i32 %15, ptr %11, align 4, !dbg !270
  store i32 0, ptr %7, align 4, !dbg !273
  br label %16, !dbg !275

16:                                               ; preds = %47, %3
  %17 = load i32, ptr %7, align 4, !dbg !276
  %18 = load i32, ptr %11, align 4, !dbg !278
  %19 = icmp slt i32 %17, %18, !dbg !279
  br i1 %19, label %20, label %50, !dbg !280

20:                                               ; preds = %16
  %21 = getelementptr inbounds [30 x i8], ptr %10, i64 0, i64 0, !dbg !281
  %22 = load i32, ptr %8, align 4, !dbg !283
  %23 = sext i32 %22 to i64, !dbg !284
  %24 = getelementptr inbounds [7 x [30 x i8]], ptr @data, i64 0, i64 %23, !dbg !284
  %25 = getelementptr inbounds [30 x i8], ptr %24, i64 0, i64 0, !dbg !281
  %26 = load i32, ptr %8, align 4, !dbg !285
  %27 = sext i32 %26 to i64, !dbg !286
  %28 = getelementptr inbounds [7 x i8], ptr @data_len, i64 0, i64 %27, !dbg !286
  %29 = load i8, ptr %28, align 1, !dbg !286
  %30 = zext i8 %29 to i64, !dbg !286
  call void @llvm.memcpy.p0.p0.i64(ptr align 16 %21, ptr align 2 %25, i64 %30, i1 false), !dbg !281
  %31 = load i32, ptr %8, align 4, !dbg !287
  %32 = sext i32 %31 to i64, !dbg !288
  %33 = getelementptr inbounds [7 x [30 x i8]], ptr @keys, i64 0, i64 %32, !dbg !288
  %34 = getelementptr inbounds [30 x i8], ptr %33, i64 0, i64 1, !dbg !288
  %35 = load i32, ptr %8, align 4, !dbg !289
  %36 = sext i32 %35 to i64, !dbg !290
  %37 = getelementptr inbounds [7 x [30 x i8]], ptr @keys, i64 0, i64 %36, !dbg !290
  %38 = getelementptr inbounds [30 x i8], ptr %37, i64 0, i64 0, !dbg !290
  %39 = load i8, ptr %38, align 2, !dbg !290
  %40 = zext i8 %39 to i32, !dbg !290
  call void @rc4_setup(ptr noundef %9, ptr noundef %34, i32 noundef %40), !dbg !291
  %41 = getelementptr inbounds [30 x i8], ptr %10, i64 0, i64 0, !dbg !292
  %42 = load i32, ptr %8, align 4, !dbg !293
  %43 = sext i32 %42 to i64, !dbg !294
  %44 = getelementptr inbounds [7 x i8], ptr @data_len, i64 0, i64 %43, !dbg !294
  %45 = load i8, ptr %44, align 1, !dbg !294
  %46 = zext i8 %45 to i32, !dbg !294
  call void @rc4_crypt(ptr noundef %9, ptr noundef %41, i32 noundef %46), !dbg !295
  br label %47, !dbg !296

47:                                               ; preds = %20
  %48 = load i32, ptr %7, align 4, !dbg !297
  %49 = add nsw i32 %48, 1, !dbg !297
  store i32 %49, ptr %7, align 4, !dbg !297
  br label %16, !dbg !298, !llvm.loop !299

50:                                               ; preds = %16
  %51 = getelementptr inbounds [30 x i8], ptr %10, i64 0, i64 0, !dbg !301
  %52 = load i32, ptr %8, align 4, !dbg !303
  %53 = sext i32 %52 to i64, !dbg !304
  %54 = getelementptr inbounds [7 x [30 x i8]], ptr @output, i64 0, i64 %53, !dbg !304
  %55 = getelementptr inbounds [30 x i8], ptr %54, i64 0, i64 0, !dbg !304
  %56 = load i32, ptr %8, align 4, !dbg !305
  %57 = sext i32 %56 to i64, !dbg !306
  %58 = getelementptr inbounds [7 x i8], ptr @data_len, i64 0, i64 %57, !dbg !306
  %59 = load i8, ptr %58, align 1, !dbg !306
  %60 = zext i8 %59 to i64, !dbg !306
  %61 = call i32 @memcmp(ptr noundef %51, ptr noundef %55, i64 noundef %60) #6, !dbg !307
  %62 = icmp ne i32 %61, 0, !dbg !307
  br i1 %62, label %63, label %65, !dbg !308

63:                                               ; preds = %50
  %64 = load ptr, ptr %5, align 8, !dbg !309
  store i32 0, ptr %64, align 4, !dbg !311
  br label %67, !dbg !312

65:                                               ; preds = %50
  %66 = load ptr, ptr %5, align 8, !dbg !313
  store i32 1, ptr %66, align 4, !dbg !314
  br label %67, !dbg !315

67:                                               ; preds = %65, %63
  ret void, !dbg !316
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

; Function Attrs: nounwind willreturn memory(read)
declare i32 @memcmp(ptr noundef, ptr noundef, i64 noundef) #3

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main(i32 noundef %0, ptr noundef %1) #0 !dbg !317 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca i32, align 4
  %7 = alloca i64, align 8
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca i64, align 8
  %11 = alloca double, align 8
  store i32 0, ptr %3, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !323, metadata !DIExpression()), !dbg !324
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !325, metadata !DIExpression()), !dbg !326
  call void @llvm.dbg.declare(metadata ptr %6, metadata !327, metadata !DIExpression()), !dbg !328
  store i32 0, ptr %6, align 4, !dbg !328
  call void @llvm.dbg.declare(metadata ptr %7, metadata !329, metadata !DIExpression()), !dbg !332
  %12 = call i64 @clock() #7, !dbg !333
  store i64 %12, ptr %7, align 8, !dbg !332
  call void @llvm.dbg.declare(metadata ptr %8, metadata !334, metadata !DIExpression()), !dbg !335
  store i32 200000, ptr %8, align 4, !dbg !335
  %13 = load i32, ptr %4, align 4, !dbg !336
  %14 = icmp eq i32 %13, 2, !dbg !338
  br i1 %14, label %15, label %20, !dbg !339

15:                                               ; preds = %2
  %16 = load ptr, ptr %5, align 8, !dbg !340
  %17 = getelementptr inbounds ptr, ptr %16, i64 1, !dbg !340
  %18 = load ptr, ptr %17, align 8, !dbg !340
  %19 = call i32 @atoi(ptr noundef %18) #6, !dbg !341
  store i32 %19, ptr %8, align 4, !dbg !342
  br label %20, !dbg !343

20:                                               ; preds = %15, %2
  %21 = call i32 (ptr, ...) @printf(ptr noundef @.str.4), !dbg !344
  call void @llvm.dbg.declare(metadata ptr %9, metadata !345, metadata !DIExpression()), !dbg !347
  store i32 0, ptr %9, align 4, !dbg !347
  br label %22, !dbg !348

22:                                               ; preds = %36, %20
  %23 = load i32, ptr %9, align 4, !dbg !349
  %24 = icmp slt i32 %23, 6, !dbg !351
  br i1 %24, label %25, label %39, !dbg !352

25:                                               ; preds = %22
  %26 = load i32, ptr %9, align 4, !dbg !353
  %27 = add nsw i32 %26, 1, !dbg !355
  %28 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, i32 noundef %27), !dbg !356
  call void @d_rc4(ptr noundef %8, ptr noundef %6, ptr noundef %9), !dbg !357
  %29 = load i32, ptr %6, align 4, !dbg !358
  %30 = icmp eq i32 %29, 0, !dbg !360
  br i1 %30, label %31, label %33, !dbg !361

31:                                               ; preds = %25
  %32 = call i32 (ptr, ...) @printf(ptr noundef @.str.6), !dbg !362
  br label %35, !dbg !364

33:                                               ; preds = %25
  %34 = call i32 (ptr, ...) @printf(ptr noundef @.str.7), !dbg !365
  br label %35

35:                                               ; preds = %33, %31
  br label %36, !dbg !367

36:                                               ; preds = %35
  %37 = load i32, ptr %9, align 4, !dbg !368
  %38 = add nsw i32 %37, 1, !dbg !368
  store i32 %38, ptr %9, align 4, !dbg !368
  br label %22, !dbg !369, !llvm.loop !370

39:                                               ; preds = %22
  %40 = call i32 (ptr, ...) @printf(ptr noundef @.str.8), !dbg !372
  call void @llvm.dbg.declare(metadata ptr %10, metadata !373, metadata !DIExpression()), !dbg !374
  %41 = call i64 @clock() #7, !dbg !375
  store i64 %41, ptr %10, align 8, !dbg !374
  call void @llvm.dbg.declare(metadata ptr %11, metadata !376, metadata !DIExpression()), !dbg !377
  %42 = load i64, ptr %10, align 8, !dbg !378
  %43 = load i64, ptr %7, align 8, !dbg !379
  %44 = sub nsw i64 %42, %43, !dbg !380
  %45 = sitofp i64 %44 to double, !dbg !381
  %46 = fdiv double %45, 1.000000e+06, !dbg !382
  %47 = fmul double %46, 1.000000e+03, !dbg !383
  store double %47, ptr %11, align 8, !dbg !377
  %48 = load double, ptr %11, align 8, !dbg !384
  %49 = call i32 (ptr, ...) @printf(ptr noundef @.str.9, double noundef %48), !dbg !385
  %50 = call i32 (ptr, ...) @printf(ptr noundef @.str.10), !dbg !386
  ret i32 0, !dbg !387
}

; Function Attrs: nounwind
declare i64 @clock() #4

; Function Attrs: nounwind willreturn memory(read)
declare i32 @atoi(ptr noundef) #3

declare i32 @printf(ptr noundef, ...) #5

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }
attributes #3 = { nounwind willreturn memory(read) "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #5 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #6 = { nounwind willreturn memory(read) }
attributes #7 = { nounwind }

!llvm.dbg.cu = !{!2}
!llvm.module.flags = !{!56, !57, !58, !59, !60, !61, !62}
!llvm.ident = !{!63}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(name: "data_len", scope: !2, file: !3, line: 40, type: !54, isLocal: true, isDefinition: true)
!2 = distinct !DICompileUnit(language: DW_LANG_C11, file: !3, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !4, globals: !10, splitDebugInlining: false, nameTableKind: None)
!3 = !DIFile(filename: "rc4.c", directory: "/home/yxk/test-sgx/SGX-test/rc4", checksumkind: CSK_MD5, checksum: "a5be8fac0f7cc4feb03c611e94837b1d")
!4 = !{!5, !6, !7}
!5 = !DIBasicType(name: "unsigned char", size: 8, encoding: DW_ATE_unsigned_char)
!6 = !DIBasicType(name: "double", size: 64, encoding: DW_ATE_float)
!7 = !DIDerivedType(tag: DW_TAG_typedef, name: "__clock_t", file: !8, line: 156, baseType: !9)
!8 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!9 = !DIBasicType(name: "long", size: 64, encoding: DW_ATE_signed)
!10 = !{!11, !17, !22, !27, !29, !34, !39, !44, !0, !50, !52}
!11 = !DIGlobalVariableExpression(var: !12, expr: !DIExpression())
!12 = distinct !DIGlobalVariable(scope: null, file: !3, line: 166, type: !13, isLocal: true, isDefinition: true)
!13 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 208, elements: !15)
!14 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!15 = !{!16}
!16 = !DISubrange(count: 26)
!17 = !DIGlobalVariableExpression(var: !18, expr: !DIExpression())
!18 = distinct !DIGlobalVariable(scope: null, file: !3, line: 168, type: !19, isLocal: true, isDefinition: true)
!19 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 80, elements: !20)
!20 = !{!21}
!21 = !DISubrange(count: 10)
!22 = !DIGlobalVariableExpression(var: !23, expr: !DIExpression())
!23 = distinct !DIGlobalVariable(scope: null, file: !3, line: 171, type: !24, isLocal: true, isDefinition: true)
!24 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 72, elements: !25)
!25 = !{!26}
!26 = !DISubrange(count: 9)
!27 = !DIGlobalVariableExpression(var: !28, expr: !DIExpression())
!28 = distinct !DIGlobalVariable(scope: null, file: !3, line: 173, type: !24, isLocal: true, isDefinition: true)
!29 = !DIGlobalVariableExpression(var: !30, expr: !DIExpression())
!30 = distinct !DIGlobalVariable(scope: null, file: !3, line: 176, type: !31, isLocal: true, isDefinition: true)
!31 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 16, elements: !32)
!32 = !{!33}
!33 = !DISubrange(count: 2)
!34 = !DIGlobalVariableExpression(var: !35, expr: !DIExpression())
!35 = distinct !DIGlobalVariable(scope: null, file: !3, line: 179, type: !36, isLocal: true, isDefinition: true)
!36 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 152, elements: !37)
!37 = !{!38}
!38 = !DISubrange(count: 19)
!39 = !DIGlobalVariableExpression(var: !40, expr: !DIExpression())
!40 = distinct !DIGlobalVariable(scope: null, file: !3, line: 180, type: !41, isLocal: true, isDefinition: true)
!41 = !DICompositeType(tag: DW_TAG_array_type, baseType: !14, size: 384, elements: !42)
!42 = !{!43}
!43 = !DISubrange(count: 48)
!44 = !DIGlobalVariableExpression(var: !45, expr: !DIExpression())
!45 = distinct !DIGlobalVariable(name: "data", scope: !2, file: !3, line: 41, type: !46, isLocal: true, isDefinition: true)
!46 = !DICompositeType(tag: DW_TAG_array_type, baseType: !5, size: 1680, elements: !47)
!47 = !{!48, !49}
!48 = !DISubrange(count: 7)
!49 = !DISubrange(count: 30)
!50 = !DIGlobalVariableExpression(var: !51, expr: !DIExpression())
!51 = distinct !DIGlobalVariable(name: "keys", scope: !2, file: !3, line: 31, type: !46, isLocal: true, isDefinition: true)
!52 = !DIGlobalVariableExpression(var: !53, expr: !DIExpression())
!53 = distinct !DIGlobalVariable(name: "output", scope: !2, file: !3, line: 56, type: !46, isLocal: true, isDefinition: true)
!54 = !DICompositeType(tag: DW_TAG_array_type, baseType: !5, size: 56, elements: !55)
!55 = !{!48}
!56 = !{i32 7, !"Dwarf Version", i32 5}
!57 = !{i32 2, !"Debug Info Version", i32 3}
!58 = !{i32 1, !"wchar_size", i32 4}
!59 = !{i32 8, !"PIC Level", i32 2}
!60 = !{i32 7, !"PIE Level", i32 2}
!61 = !{i32 7, !"uwtable", i32 2}
!62 = !{i32 7, !"frame-pointer", i32 2}
!63 = !{!"Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)"}
!64 = distinct !DISubprogram(name: "rc4_setup", scope: !3, file: !3, line: 72, type: !65, scopeLine: 73, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !79)
!65 = !DISubroutineType(types: !66)
!66 = !{null, !67, !78, !72}
!67 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !68, size: 64)
!68 = distinct !DICompositeType(tag: DW_TAG_structure_type, name: "rc4_state", file: !69, line: 4, size: 8256, elements: !70)
!69 = !DIFile(filename: "./rc4.h", directory: "/home/yxk/test-sgx/SGX-test/rc4", checksumkind: CSK_MD5, checksum: "ae462678b5230ac1dff486ef01231b0a")
!70 = !{!71, !73, !74}
!71 = !DIDerivedType(tag: DW_TAG_member, name: "x", scope: !68, file: !69, line: 6, baseType: !72, size: 32)
!72 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!73 = !DIDerivedType(tag: DW_TAG_member, name: "y", scope: !68, file: !69, line: 6, baseType: !72, size: 32, offset: 32)
!74 = !DIDerivedType(tag: DW_TAG_member, name: "m", scope: !68, file: !69, line: 6, baseType: !75, size: 8192, offset: 64)
!75 = !DICompositeType(tag: DW_TAG_array_type, baseType: !72, size: 8192, elements: !76)
!76 = !{!77}
!77 = !DISubrange(count: 256)
!78 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !5, size: 64)
!79 = !{}
!80 = !DILocalVariable(name: "s", arg: 1, scope: !64, file: !3, line: 72, type: !67)
!81 = !DILocation(line: 72, column: 35, scope: !64)
!82 = !DILocalVariable(name: "key", arg: 2, scope: !64, file: !3, line: 72, type: !78)
!83 = !DILocation(line: 72, column: 53, scope: !64)
!84 = !DILocalVariable(name: "length", arg: 3, scope: !64, file: !3, line: 72, type: !72)
!85 = !DILocation(line: 72, column: 63, scope: !64)
!86 = !DILocalVariable(name: "i", scope: !64, file: !3, line: 74, type: !72)
!87 = !DILocation(line: 74, column: 9, scope: !64)
!88 = !DILocalVariable(name: "j", scope: !64, file: !3, line: 74, type: !72)
!89 = !DILocation(line: 74, column: 12, scope: !64)
!90 = !DILocalVariable(name: "k", scope: !64, file: !3, line: 74, type: !72)
!91 = !DILocation(line: 74, column: 15, scope: !64)
!92 = !DILocalVariable(name: "m", scope: !64, file: !3, line: 74, type: !93)
!93 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !72, size: 64)
!94 = !DILocation(line: 74, column: 19, scope: !64)
!95 = !DILocalVariable(name: "a", scope: !64, file: !3, line: 74, type: !72)
!96 = !DILocation(line: 74, column: 22, scope: !64)
!97 = !DILocation(line: 76, column: 5, scope: !64)
!98 = !DILocation(line: 76, column: 8, scope: !64)
!99 = !DILocation(line: 76, column: 10, scope: !64)
!100 = !DILocation(line: 77, column: 5, scope: !64)
!101 = !DILocation(line: 77, column: 8, scope: !64)
!102 = !DILocation(line: 77, column: 10, scope: !64)
!103 = !DILocation(line: 78, column: 9, scope: !64)
!104 = !DILocation(line: 78, column: 12, scope: !64)
!105 = !DILocation(line: 78, column: 7, scope: !64)
!106 = !DILocation(line: 80, column: 12, scope: !107)
!107 = distinct !DILexicalBlock(scope: !64, file: !3, line: 80, column: 5)
!108 = !DILocation(line: 80, column: 10, scope: !107)
!109 = !DILocation(line: 80, column: 17, scope: !110)
!110 = distinct !DILexicalBlock(scope: !107, file: !3, line: 80, column: 5)
!111 = !DILocation(line: 80, column: 19, scope: !110)
!112 = !DILocation(line: 80, column: 5, scope: !107)
!113 = !DILocation(line: 82, column: 16, scope: !114)
!114 = distinct !DILexicalBlock(scope: !110, file: !3, line: 81, column: 5)
!115 = !DILocation(line: 82, column: 9, scope: !114)
!116 = !DILocation(line: 82, column: 11, scope: !114)
!117 = !DILocation(line: 82, column: 14, scope: !114)
!118 = !DILocation(line: 83, column: 5, scope: !114)
!119 = !DILocation(line: 80, column: 27, scope: !110)
!120 = !DILocation(line: 80, column: 5, scope: !110)
!121 = distinct !{!121, !112, !122, !123}
!122 = !DILocation(line: 83, column: 5, scope: !107)
!123 = !{!"llvm.loop.mustprogress"}
!124 = !DILocation(line: 85, column: 11, scope: !64)
!125 = !DILocation(line: 85, column: 7, scope: !64)
!126 = !DILocation(line: 87, column: 12, scope: !127)
!127 = distinct !DILexicalBlock(scope: !64, file: !3, line: 87, column: 5)
!128 = !DILocation(line: 87, column: 10, scope: !127)
!129 = !DILocation(line: 87, column: 17, scope: !130)
!130 = distinct !DILexicalBlock(scope: !127, file: !3, line: 87, column: 5)
!131 = !DILocation(line: 87, column: 19, scope: !130)
!132 = !DILocation(line: 87, column: 5, scope: !127)
!133 = !DILocation(line: 89, column: 13, scope: !134)
!134 = distinct !DILexicalBlock(scope: !130, file: !3, line: 88, column: 5)
!135 = !DILocation(line: 89, column: 15, scope: !134)
!136 = !DILocation(line: 89, column: 11, scope: !134)
!137 = !DILocation(line: 90, column: 31, scope: !134)
!138 = !DILocation(line: 90, column: 35, scope: !134)
!139 = !DILocation(line: 90, column: 33, scope: !134)
!140 = !DILocation(line: 90, column: 39, scope: !134)
!141 = !DILocation(line: 90, column: 43, scope: !134)
!142 = !DILocation(line: 90, column: 37, scope: !134)
!143 = !DILocation(line: 90, column: 13, scope: !134)
!144 = !DILocation(line: 90, column: 11, scope: !134)
!145 = !DILocation(line: 91, column: 16, scope: !134)
!146 = !DILocation(line: 91, column: 18, scope: !134)
!147 = !DILocation(line: 91, column: 9, scope: !134)
!148 = !DILocation(line: 91, column: 11, scope: !134)
!149 = !DILocation(line: 91, column: 14, scope: !134)
!150 = !DILocation(line: 91, column: 29, scope: !134)
!151 = !DILocation(line: 91, column: 22, scope: !134)
!152 = !DILocation(line: 91, column: 24, scope: !134)
!153 = !DILocation(line: 91, column: 27, scope: !134)
!154 = !DILocation(line: 92, column: 13, scope: !155)
!155 = distinct !DILexicalBlock(scope: !134, file: !3, line: 92, column: 13)
!156 = !DILocation(line: 92, column: 20, scope: !155)
!157 = !DILocation(line: 92, column: 17, scope: !155)
!158 = !DILocation(line: 92, column: 13, scope: !134)
!159 = !DILocation(line: 92, column: 31, scope: !155)
!160 = !DILocation(line: 92, column: 29, scope: !155)
!161 = !DILocation(line: 93, column: 5, scope: !134)
!162 = !DILocation(line: 87, column: 27, scope: !130)
!163 = !DILocation(line: 87, column: 5, scope: !130)
!164 = distinct !{!164, !132, !165, !123}
!165 = !DILocation(line: 93, column: 5, scope: !127)
!166 = !DILocation(line: 94, column: 1, scope: !64)
!167 = distinct !DISubprogram(name: "rc4_crypt", scope: !3, file: !3, line: 97, type: !65, scopeLine: 98, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !79)
!168 = !DILocalVariable(name: "s", arg: 1, scope: !167, file: !3, line: 97, type: !67)
!169 = !DILocation(line: 97, column: 35, scope: !167)
!170 = !DILocalVariable(name: "data", arg: 2, scope: !167, file: !3, line: 97, type: !78)
!171 = !DILocation(line: 97, column: 53, scope: !167)
!172 = !DILocalVariable(name: "length", arg: 3, scope: !167, file: !3, line: 97, type: !72)
!173 = !DILocation(line: 97, column: 63, scope: !167)
!174 = !DILocalVariable(name: "i", scope: !167, file: !3, line: 99, type: !72)
!175 = !DILocation(line: 99, column: 9, scope: !167)
!176 = !DILocalVariable(name: "x", scope: !167, file: !3, line: 99, type: !72)
!177 = !DILocation(line: 99, column: 12, scope: !167)
!178 = !DILocalVariable(name: "y", scope: !167, file: !3, line: 99, type: !72)
!179 = !DILocation(line: 99, column: 15, scope: !167)
!180 = !DILocalVariable(name: "m", scope: !167, file: !3, line: 99, type: !93)
!181 = !DILocation(line: 99, column: 19, scope: !167)
!182 = !DILocalVariable(name: "a", scope: !167, file: !3, line: 99, type: !72)
!183 = !DILocation(line: 99, column: 22, scope: !167)
!184 = !DILocalVariable(name: "b", scope: !167, file: !3, line: 99, type: !72)
!185 = !DILocation(line: 99, column: 25, scope: !167)
!186 = !DILocation(line: 101, column: 9, scope: !167)
!187 = !DILocation(line: 101, column: 12, scope: !167)
!188 = !DILocation(line: 101, column: 7, scope: !167)
!189 = !DILocation(line: 102, column: 9, scope: !167)
!190 = !DILocation(line: 102, column: 12, scope: !167)
!191 = !DILocation(line: 102, column: 7, scope: !167)
!192 = !DILocation(line: 103, column: 9, scope: !167)
!193 = !DILocation(line: 103, column: 12, scope: !167)
!194 = !DILocation(line: 103, column: 7, scope: !167)
!195 = !DILocation(line: 105, column: 12, scope: !196)
!196 = distinct !DILexicalBlock(scope: !167, file: !3, line: 105, column: 5)
!197 = !DILocation(line: 105, column: 10, scope: !196)
!198 = !DILocation(line: 105, column: 17, scope: !199)
!199 = distinct !DILexicalBlock(scope: !196, file: !3, line: 105, column: 5)
!200 = !DILocation(line: 105, column: 21, scope: !199)
!201 = !DILocation(line: 105, column: 19, scope: !199)
!202 = !DILocation(line: 105, column: 5, scope: !196)
!203 = !DILocation(line: 107, column: 31, scope: !204)
!204 = distinct !DILexicalBlock(scope: !199, file: !3, line: 106, column: 5)
!205 = !DILocation(line: 107, column: 33, scope: !204)
!206 = !DILocation(line: 107, column: 13, scope: !204)
!207 = !DILocation(line: 107, column: 11, scope: !204)
!208 = !DILocation(line: 107, column: 44, scope: !204)
!209 = !DILocation(line: 107, column: 46, scope: !204)
!210 = !DILocation(line: 107, column: 42, scope: !204)
!211 = !DILocation(line: 108, column: 31, scope: !204)
!212 = !DILocation(line: 108, column: 35, scope: !204)
!213 = !DILocation(line: 108, column: 33, scope: !204)
!214 = !DILocation(line: 108, column: 13, scope: !204)
!215 = !DILocation(line: 108, column: 11, scope: !204)
!216 = !DILocation(line: 109, column: 20, scope: !204)
!217 = !DILocation(line: 109, column: 22, scope: !204)
!218 = !DILocation(line: 109, column: 18, scope: !204)
!219 = !DILocation(line: 109, column: 9, scope: !204)
!220 = !DILocation(line: 109, column: 11, scope: !204)
!221 = !DILocation(line: 109, column: 14, scope: !204)
!222 = !DILocation(line: 110, column: 16, scope: !204)
!223 = !DILocation(line: 110, column: 9, scope: !204)
!224 = !DILocation(line: 110, column: 11, scope: !204)
!225 = !DILocation(line: 110, column: 14, scope: !204)
!226 = !DILocation(line: 111, column: 20, scope: !204)
!227 = !DILocation(line: 111, column: 40, scope: !204)
!228 = !DILocation(line: 111, column: 44, scope: !204)
!229 = !DILocation(line: 111, column: 42, scope: !204)
!230 = !DILocation(line: 111, column: 22, scope: !204)
!231 = !DILocation(line: 111, column: 9, scope: !204)
!232 = !DILocation(line: 111, column: 14, scope: !204)
!233 = !DILocation(line: 111, column: 17, scope: !204)
!234 = !DILocation(line: 112, column: 5, scope: !204)
!235 = !DILocation(line: 105, column: 30, scope: !199)
!236 = !DILocation(line: 105, column: 5, scope: !199)
!237 = distinct !{!237, !202, !238, !123}
!238 = !DILocation(line: 112, column: 5, scope: !196)
!239 = !DILocation(line: 114, column: 12, scope: !167)
!240 = !DILocation(line: 114, column: 5, scope: !167)
!241 = !DILocation(line: 114, column: 8, scope: !167)
!242 = !DILocation(line: 114, column: 10, scope: !167)
!243 = !DILocation(line: 115, column: 12, scope: !167)
!244 = !DILocation(line: 115, column: 5, scope: !167)
!245 = !DILocation(line: 115, column: 8, scope: !167)
!246 = !DILocation(line: 115, column: 10, scope: !167)
!247 = !DILocation(line: 116, column: 1, scope: !167)
!248 = distinct !DISubprogram(name: "d_rc4", scope: !3, file: !3, line: 121, type: !249, scopeLine: 122, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !79)
!249 = !DISubroutineType(types: !250)
!250 = !{null, !93, !93, !93}
!251 = !DILocalVariable(name: "countp", arg: 1, scope: !248, file: !3, line: 121, type: !93)
!252 = !DILocation(line: 121, column: 18, scope: !248)
!253 = !DILocalVariable(name: "index", arg: 2, scope: !248, file: !3, line: 121, type: !93)
!254 = !DILocation(line: 121, column: 31, scope: !248)
!255 = !DILocalVariable(name: "ip", arg: 3, scope: !248, file: !3, line: 121, type: !93)
!256 = !DILocation(line: 121, column: 43, scope: !248)
!257 = !DILocalVariable(name: "j", scope: !248, file: !3, line: 123, type: !72)
!258 = !DILocation(line: 123, column: 9, scope: !248)
!259 = !DILocalVariable(name: "i", scope: !248, file: !3, line: 123, type: !72)
!260 = !DILocation(line: 123, column: 12, scope: !248)
!261 = !DILocation(line: 123, column: 17, scope: !248)
!262 = !DILocation(line: 123, column: 16, scope: !248)
!263 = !DILocalVariable(name: "s", scope: !248, file: !3, line: 124, type: !68)
!264 = !DILocation(line: 124, column: 22, scope: !248)
!265 = !DILocalVariable(name: "buffer", scope: !248, file: !3, line: 125, type: !266)
!266 = !DICompositeType(tag: DW_TAG_array_type, baseType: !5, size: 240, elements: !267)
!267 = !{!49}
!268 = !DILocation(line: 125, column: 19, scope: !248)
!269 = !DILocalVariable(name: "count", scope: !248, file: !3, line: 127, type: !72)
!270 = !DILocation(line: 127, column: 9, scope: !248)
!271 = !DILocation(line: 127, column: 18, scope: !248)
!272 = !DILocation(line: 127, column: 17, scope: !248)
!273 = !DILocation(line: 134, column: 16, scope: !274)
!274 = distinct !DILexicalBlock(scope: !248, file: !3, line: 134, column: 9)
!275 = !DILocation(line: 134, column: 14, scope: !274)
!276 = !DILocation(line: 134, column: 21, scope: !277)
!277 = distinct !DILexicalBlock(scope: !274, file: !3, line: 134, column: 9)
!278 = !DILocation(line: 134, column: 25, scope: !277)
!279 = !DILocation(line: 134, column: 23, scope: !277)
!280 = !DILocation(line: 134, column: 9, scope: !274)
!281 = !DILocation(line: 137, column: 9, scope: !282)
!282 = distinct !DILexicalBlock(scope: !277, file: !3, line: 135, column: 9)
!283 = !DILocation(line: 137, column: 30, scope: !282)
!284 = !DILocation(line: 137, column: 25, scope: !282)
!285 = !DILocation(line: 137, column: 43, scope: !282)
!286 = !DILocation(line: 137, column: 34, scope: !282)
!287 = !DILocation(line: 139, column: 30, scope: !282)
!288 = !DILocation(line: 139, column: 25, scope: !282)
!289 = !DILocation(line: 139, column: 42, scope: !282)
!290 = !DILocation(line: 139, column: 37, scope: !282)
!291 = !DILocation(line: 139, column: 9, scope: !282)
!292 = !DILocation(line: 140, column: 24, scope: !282)
!293 = !DILocation(line: 140, column: 41, scope: !282)
!294 = !DILocation(line: 140, column: 32, scope: !282)
!295 = !DILocation(line: 140, column: 9, scope: !282)
!296 = !DILocation(line: 142, column: 9, scope: !282)
!297 = !DILocation(line: 134, column: 33, scope: !277)
!298 = !DILocation(line: 134, column: 9, scope: !277)
!299 = distinct !{!299, !280, !300, !123}
!300 = !DILocation(line: 142, column: 9, scope: !274)
!301 = !DILocation(line: 144, column: 21, scope: !302)
!302 = distinct !DILexicalBlock(scope: !248, file: !3, line: 144, column: 13)
!303 = !DILocation(line: 144, column: 36, scope: !302)
!304 = !DILocation(line: 144, column: 29, scope: !302)
!305 = !DILocation(line: 144, column: 49, scope: !302)
!306 = !DILocation(line: 144, column: 40, scope: !302)
!307 = !DILocation(line: 144, column: 13, scope: !302)
!308 = !DILocation(line: 144, column: 13, scope: !248)
!309 = !DILocation(line: 146, column: 10, scope: !310)
!310 = distinct !DILexicalBlock(scope: !302, file: !3, line: 145, column: 9)
!311 = !DILocation(line: 146, column: 16, scope: !310)
!312 = !DILocation(line: 147, column: 9, scope: !310)
!313 = !DILocation(line: 150, column: 10, scope: !248)
!314 = !DILocation(line: 150, column: 16, scope: !248)
!315 = !DILocation(line: 157, column: 5, scope: !248)
!316 = !DILocation(line: 158, column: 1, scope: !248)
!317 = distinct !DISubprogram(name: "main", scope: !3, file: !3, line: 160, type: !318, scopeLine: 161, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !79)
!318 = !DISubroutineType(types: !319)
!319 = !{!72, !72, !320}
!320 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !321, size: 64)
!321 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !322, size: 64)
!322 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !14)
!323 = !DILocalVariable(name: "argc", arg: 1, scope: !317, file: !3, line: 160, type: !72)
!324 = !DILocation(line: 160, column: 15, scope: !317)
!325 = !DILocalVariable(name: "argv", arg: 2, scope: !317, file: !3, line: 160, type: !320)
!326 = !DILocation(line: 160, column: 34, scope: !317)
!327 = !DILocalVariable(name: "index", scope: !317, file: !3, line: 162, type: !72)
!328 = !DILocation(line: 162, column: 9, scope: !317)
!329 = !DILocalVariable(name: "start_time", scope: !317, file: !3, line: 163, type: !330)
!330 = !DIDerivedType(tag: DW_TAG_typedef, name: "clock_t", file: !331, line: 7, baseType: !7)
!331 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h", directory: "", checksumkind: CSK_MD5, checksum: "1aade99fd778d1551600c7ca1410b9f1")
!332 = !DILocation(line: 163, column: 13, scope: !317)
!333 = !DILocation(line: 163, column: 26, scope: !317)
!334 = !DILocalVariable(name: "count", scope: !317, file: !3, line: 164, type: !72)
!335 = !DILocation(line: 164, column: 9, scope: !317)
!336 = !DILocation(line: 165, column: 9, scope: !337)
!337 = distinct !DILexicalBlock(scope: !317, file: !3, line: 165, column: 9)
!338 = !DILocation(line: 165, column: 14, scope: !337)
!339 = !DILocation(line: 165, column: 9, scope: !317)
!340 = !DILocation(line: 165, column: 33, scope: !337)
!341 = !DILocation(line: 165, column: 28, scope: !337)
!342 = !DILocation(line: 165, column: 26, scope: !337)
!343 = !DILocation(line: 165, column: 20, scope: !337)
!344 = !DILocation(line: 166, column: 5, scope: !317)
!345 = !DILocalVariable(name: "i", scope: !346, file: !3, line: 167, type: !72)
!346 = distinct !DILexicalBlock(scope: !317, file: !3, line: 167, column: 5)
!347 = !DILocation(line: 167, column: 13, scope: !346)
!348 = !DILocation(line: 167, column: 9, scope: !346)
!349 = !DILocation(line: 167, column: 20, scope: !350)
!350 = distinct !DILexicalBlock(scope: !346, file: !3, line: 167, column: 5)
!351 = !DILocation(line: 167, column: 22, scope: !350)
!352 = !DILocation(line: 167, column: 5, scope: !346)
!353 = !DILocation(line: 168, column: 30, scope: !354)
!354 = distinct !DILexicalBlock(scope: !350, file: !3, line: 167, column: 32)
!355 = !DILocation(line: 168, column: 32, scope: !354)
!356 = !DILocation(line: 168, column: 9, scope: !354)
!357 = !DILocation(line: 169, column: 9, scope: !354)
!358 = !DILocation(line: 170, column: 12, scope: !359)
!359 = distinct !DILexicalBlock(scope: !354, file: !3, line: 170, column: 12)
!360 = !DILocation(line: 170, column: 18, scope: !359)
!361 = !DILocation(line: 170, column: 12, scope: !354)
!362 = !DILocation(line: 171, column: 13, scope: !363)
!363 = distinct !DILexicalBlock(scope: !359, file: !3, line: 170, column: 24)
!364 = !DILocation(line: 172, column: 9, scope: !363)
!365 = !DILocation(line: 173, column: 13, scope: !366)
!366 = distinct !DILexicalBlock(scope: !359, file: !3, line: 172, column: 16)
!367 = !DILocation(line: 175, column: 5, scope: !354)
!368 = !DILocation(line: 167, column: 28, scope: !350)
!369 = !DILocation(line: 167, column: 5, scope: !350)
!370 = distinct !{!370, !352, !371, !123}
!371 = !DILocation(line: 175, column: 5, scope: !346)
!372 = !DILocation(line: 176, column: 5, scope: !317)
!373 = !DILocalVariable(name: "end_time", scope: !317, file: !3, line: 177, type: !330)
!374 = !DILocation(line: 177, column: 13, scope: !317)
!375 = !DILocation(line: 177, column: 24, scope: !317)
!376 = !DILocalVariable(name: "time_taken_ms", scope: !317, file: !3, line: 178, type: !6)
!377 = !DILocation(line: 178, column: 12, scope: !317)
!378 = !DILocation(line: 178, column: 38, scope: !317)
!379 = !DILocation(line: 178, column: 49, scope: !317)
!380 = !DILocation(line: 178, column: 47, scope: !317)
!381 = !DILocation(line: 178, column: 29, scope: !317)
!382 = !DILocation(line: 178, column: 62, scope: !317)
!383 = !DILocation(line: 178, column: 79, scope: !317)
!384 = !DILocation(line: 179, column: 35, scope: !317)
!385 = !DILocation(line: 179, column: 5, scope: !317)
!386 = !DILocation(line: 180, column: 5, scope: !317)
!387 = !DILocation(line: 181, column: 5, scope: !317)
