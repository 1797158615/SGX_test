; ModuleID = 'pc1cod.c'
source_filename = "pc1cod.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@x1a2 = dso_local global i16 0, align 2, !dbg !0
@i = dso_local global i16 0, align 2, !dbg !51
@dx = dso_local global i16 0, align 2, !dbg !38
@x1a0 = dso_local global [16 x i16] zeroinitializer, align 16, !dbg !44
@ax = dso_local global i16 0, align 2, !dbg !31
@cx = dso_local global i16 0, align 2, !dbg !36
@bx = dso_local global i16 0, align 2, !dbg !34
@tmp = dso_local global i16 0, align 2, !dbg !42
@si = dso_local global i16 0, align 2, !dbg !40
@res = dso_local global i16 0, align 2, !dbg !49
@.str = private unnamed_addr constant [4 x i8] c"SGX\00", section "llvm.metadata"
@.str.1 = private unnamed_addr constant [9 x i8] c"pc1cod.c\00", section "llvm.metadata"
@cle = dso_local global [32 x i8] zeroinitializer, align 16, !dbg !61
@inter = dso_local global i16 0, align 2, !dbg !53
@.str.2 = private unnamed_addr constant [33 x i8] c"abcdefghijklmnopqrstuvwxyz012345\00", align 1, !dbg !10
@buff = dso_local global [32 x i8] zeroinitializer, align 16, !dbg !67
@count = dso_local global i32 0, align 4, !dbg !75
@c1 = dso_local global i32 0, align 4, !dbg !72
@c = dso_local global i16 0, align 2, !dbg !69
@cfc = dso_local global i16 0, align 2, !dbg !55
@cfd = dso_local global i16 0, align 2, !dbg !57
@compte = dso_local global i16 0, align 2, !dbg !59
@d = dso_local global i16 0, align 2, !dbg !77
@e = dso_local global i16 0, align 2, !dbg !79
@.str.3 = private unnamed_addr constant [11 x i8] c"memsize(4)\00", section "llvm.metadata"
@.str.4 = private unnamed_addr constant [6 x i8] c"TAFUN\00", section "llvm.metadata"
@.str.5 = private unnamed_addr constant [53 x i8] c"PC1 Cipher 256 bits \0AENCRYPT file IN.BIN to OUT.BIN\0A\00", align 1, !dbg !16
@.str.6 = private unnamed_addr constant [19 x i8] c"use time: %.3f ms\0A\00", align 1, !dbg !21
@.str.7 = private unnamed_addr constant [48 x i8] c"**********************************************\0A\00", align 1, !dbg !26
@llvm.global.annotations = appending global [6 x { ptr, ptr, ptr, i32, ptr }] [{ ptr, ptr, ptr, i32, ptr } { ptr @code, ptr @.str, ptr @.str.1, i32 36, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @assemble, ptr @.str, ptr @.str.1, i32 115, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @my_rand_r, ptr @.str, ptr @.str.1, i32 239, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_pc1, ptr @.str, ptr @.str.1, i32 248, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_pc1, ptr @.str.3, ptr @.str.1, i32 248, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_pc1, ptr @.str.4, ptr @.str.1, i32 248, ptr null }], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @code() #0 !dbg !89 {
  %1 = load i16, ptr @x1a2, align 2, !dbg !92
  %2 = zext i16 %1 to i32, !dbg !92
  %3 = load i16, ptr @i, align 2, !dbg !93
  %4 = zext i16 %3 to i32, !dbg !93
  %5 = add nsw i32 %2, %4, !dbg !94
  %6 = trunc i32 %5 to i16, !dbg !92
  store i16 %6, ptr @dx, align 2, !dbg !95
  %7 = load i16, ptr @i, align 2, !dbg !96
  %8 = zext i16 %7 to i64, !dbg !97
  %9 = getelementptr inbounds [16 x i16], ptr @x1a0, i64 0, i64 %8, !dbg !97
  %10 = load i16, ptr %9, align 2, !dbg !97
  store i16 %10, ptr @ax, align 2, !dbg !98
  store i16 346, ptr @cx, align 2, !dbg !99
  store i16 20021, ptr @bx, align 2, !dbg !100
  %11 = load i16, ptr @ax, align 2, !dbg !101
  store i16 %11, ptr @tmp, align 2, !dbg !102
  %12 = load i16, ptr @si, align 2, !dbg !103
  store i16 %12, ptr @ax, align 2, !dbg !104
  %13 = load i16, ptr @tmp, align 2, !dbg !105
  store i16 %13, ptr @si, align 2, !dbg !106
  %14 = load i16, ptr @ax, align 2, !dbg !107
  store i16 %14, ptr @tmp, align 2, !dbg !108
  %15 = load i16, ptr @dx, align 2, !dbg !109
  store i16 %15, ptr @ax, align 2, !dbg !110
  %16 = load i16, ptr @tmp, align 2, !dbg !111
  store i16 %16, ptr @dx, align 2, !dbg !112
  %17 = load i16, ptr @ax, align 2, !dbg !113
  %18 = zext i16 %17 to i32, !dbg !113
  %19 = icmp ne i32 %18, 0, !dbg !115
  br i1 %19, label %20, label %27, !dbg !116

20:                                               ; preds = %0
  %21 = load i16, ptr @ax, align 2, !dbg !117
  %22 = zext i16 %21 to i32, !dbg !117
  %23 = load i16, ptr @bx, align 2, !dbg !119
  %24 = zext i16 %23 to i32, !dbg !119
  %25 = mul nsw i32 %22, %24, !dbg !120
  %26 = trunc i32 %25 to i16, !dbg !117
  store i16 %26, ptr @ax, align 2, !dbg !121
  br label %27, !dbg !122

27:                                               ; preds = %20, %0
  %28 = load i16, ptr @ax, align 2, !dbg !123
  store i16 %28, ptr @tmp, align 2, !dbg !124
  %29 = load i16, ptr @cx, align 2, !dbg !125
  store i16 %29, ptr @ax, align 2, !dbg !126
  %30 = load i16, ptr @tmp, align 2, !dbg !127
  store i16 %30, ptr @cx, align 2, !dbg !128
  %31 = load i16, ptr @ax, align 2, !dbg !129
  %32 = zext i16 %31 to i32, !dbg !129
  %33 = icmp ne i32 %32, 0, !dbg !131
  br i1 %33, label %34, label %47, !dbg !132

34:                                               ; preds = %27
  %35 = load i16, ptr @ax, align 2, !dbg !133
  %36 = zext i16 %35 to i32, !dbg !133
  %37 = load i16, ptr @si, align 2, !dbg !135
  %38 = zext i16 %37 to i32, !dbg !135
  %39 = mul nsw i32 %36, %38, !dbg !136
  %40 = trunc i32 %39 to i16, !dbg !133
  store i16 %40, ptr @ax, align 2, !dbg !137
  %41 = load i16, ptr @ax, align 2, !dbg !138
  %42 = zext i16 %41 to i32, !dbg !138
  %43 = load i16, ptr @cx, align 2, !dbg !139
  %44 = zext i16 %43 to i32, !dbg !139
  %45 = add nsw i32 %42, %44, !dbg !140
  %46 = trunc i32 %45 to i16, !dbg !138
  store i16 %46, ptr @cx, align 2, !dbg !141
  br label %47, !dbg !142

47:                                               ; preds = %34, %27
  %48 = load i16, ptr @ax, align 2, !dbg !143
  store i16 %48, ptr @tmp, align 2, !dbg !144
  %49 = load i16, ptr @si, align 2, !dbg !145
  store i16 %49, ptr @ax, align 2, !dbg !146
  %50 = load i16, ptr @tmp, align 2, !dbg !147
  store i16 %50, ptr @si, align 2, !dbg !148
  %51 = load i16, ptr @ax, align 2, !dbg !149
  %52 = zext i16 %51 to i32, !dbg !149
  %53 = load i16, ptr @bx, align 2, !dbg !150
  %54 = zext i16 %53 to i32, !dbg !150
  %55 = mul nsw i32 %52, %54, !dbg !151
  %56 = trunc i32 %55 to i16, !dbg !149
  store i16 %56, ptr @ax, align 2, !dbg !152
  %57 = load i16, ptr @cx, align 2, !dbg !153
  %58 = zext i16 %57 to i32, !dbg !153
  %59 = load i16, ptr @dx, align 2, !dbg !154
  %60 = zext i16 %59 to i32, !dbg !154
  %61 = add nsw i32 %58, %60, !dbg !155
  %62 = trunc i32 %61 to i16, !dbg !153
  store i16 %62, ptr @dx, align 2, !dbg !156
  %63 = load i16, ptr @ax, align 2, !dbg !157
  %64 = zext i16 %63 to i32, !dbg !157
  %65 = add nsw i32 %64, 1, !dbg !158
  %66 = trunc i32 %65 to i16, !dbg !157
  store i16 %66, ptr @ax, align 2, !dbg !159
  %67 = load i16, ptr @dx, align 2, !dbg !160
  store i16 %67, ptr @x1a2, align 2, !dbg !161
  %68 = load i16, ptr @ax, align 2, !dbg !162
  %69 = load i16, ptr @i, align 2, !dbg !163
  %70 = zext i16 %69 to i64, !dbg !164
  %71 = getelementptr inbounds [16 x i16], ptr @x1a0, i64 0, i64 %70, !dbg !164
  store i16 %68, ptr %71, align 2, !dbg !165
  %72 = load i16, ptr @ax, align 2, !dbg !166
  %73 = zext i16 %72 to i32, !dbg !166
  %74 = load i16, ptr @dx, align 2, !dbg !167
  %75 = zext i16 %74 to i32, !dbg !167
  %76 = xor i32 %73, %75, !dbg !168
  %77 = trunc i32 %76 to i16, !dbg !166
  store i16 %77, ptr @res, align 2, !dbg !169
  %78 = load i16, ptr @i, align 2, !dbg !170
  %79 = zext i16 %78 to i32, !dbg !170
  %80 = add nsw i32 %79, 1, !dbg !171
  %81 = trunc i32 %80 to i16, !dbg !170
  store i16 %81, ptr @i, align 2, !dbg !172
  ret i32 0, !dbg !173
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @assemble() #0 !dbg !174 {
  %1 = load i8, ptr @cle, align 16, !dbg !175
  %2 = zext i8 %1 to i32, !dbg !175
  %3 = mul nsw i32 %2, 256, !dbg !176
  %4 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 1), align 1, !dbg !177
  %5 = zext i8 %4 to i32, !dbg !177
  %6 = add nsw i32 %3, %5, !dbg !178
  %7 = trunc i32 %6 to i16, !dbg !179
  store i16 %7, ptr @x1a0, align 16, !dbg !180
  %8 = call i32 @code(), !dbg !181
  %9 = load i16, ptr @res, align 2, !dbg !182
  store i16 %9, ptr @inter, align 2, !dbg !183
  %10 = load i16, ptr @x1a0, align 16, !dbg !184
  %11 = zext i16 %10 to i32, !dbg !184
  %12 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 2), align 2, !dbg !185
  %13 = zext i8 %12 to i32, !dbg !185
  %14 = mul nsw i32 %13, 256, !dbg !186
  %15 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 3), align 1, !dbg !187
  %16 = zext i8 %15 to i32, !dbg !187
  %17 = add nsw i32 %14, %16, !dbg !188
  %18 = xor i32 %11, %17, !dbg !189
  %19 = trunc i32 %18 to i16, !dbg !184
  store i16 %19, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 1), align 2, !dbg !190
  %20 = call i32 @code(), !dbg !191
  %21 = load i16, ptr @inter, align 2, !dbg !192
  %22 = zext i16 %21 to i32, !dbg !192
  %23 = load i16, ptr @res, align 2, !dbg !193
  %24 = zext i16 %23 to i32, !dbg !193
  %25 = xor i32 %22, %24, !dbg !194
  %26 = trunc i32 %25 to i16, !dbg !192
  store i16 %26, ptr @inter, align 2, !dbg !195
  %27 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 1), align 2, !dbg !196
  %28 = zext i16 %27 to i32, !dbg !196
  %29 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 4), align 4, !dbg !197
  %30 = zext i8 %29 to i32, !dbg !197
  %31 = mul nsw i32 %30, 256, !dbg !198
  %32 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 5), align 1, !dbg !199
  %33 = zext i8 %32 to i32, !dbg !199
  %34 = add nsw i32 %31, %33, !dbg !200
  %35 = xor i32 %28, %34, !dbg !201
  %36 = trunc i32 %35 to i16, !dbg !196
  store i16 %36, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 2), align 4, !dbg !202
  %37 = call i32 @code(), !dbg !203
  %38 = load i16, ptr @inter, align 2, !dbg !204
  %39 = zext i16 %38 to i32, !dbg !204
  %40 = load i16, ptr @res, align 2, !dbg !205
  %41 = zext i16 %40 to i32, !dbg !205
  %42 = xor i32 %39, %41, !dbg !206
  %43 = trunc i32 %42 to i16, !dbg !204
  store i16 %43, ptr @inter, align 2, !dbg !207
  %44 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 2), align 4, !dbg !208
  %45 = zext i16 %44 to i32, !dbg !208
  %46 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 6), align 2, !dbg !209
  %47 = zext i8 %46 to i32, !dbg !209
  %48 = mul nsw i32 %47, 256, !dbg !210
  %49 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 7), align 1, !dbg !211
  %50 = zext i8 %49 to i32, !dbg !211
  %51 = add nsw i32 %48, %50, !dbg !212
  %52 = xor i32 %45, %51, !dbg !213
  %53 = trunc i32 %52 to i16, !dbg !208
  store i16 %53, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 3), align 2, !dbg !214
  %54 = call i32 @code(), !dbg !215
  %55 = load i16, ptr @inter, align 2, !dbg !216
  %56 = zext i16 %55 to i32, !dbg !216
  %57 = load i16, ptr @res, align 2, !dbg !217
  %58 = zext i16 %57 to i32, !dbg !217
  %59 = xor i32 %56, %58, !dbg !218
  %60 = trunc i32 %59 to i16, !dbg !216
  store i16 %60, ptr @inter, align 2, !dbg !219
  %61 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 3), align 2, !dbg !220
  %62 = zext i16 %61 to i32, !dbg !220
  %63 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 8), align 8, !dbg !221
  %64 = zext i8 %63 to i32, !dbg !221
  %65 = mul nsw i32 %64, 256, !dbg !222
  %66 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 9), align 1, !dbg !223
  %67 = zext i8 %66 to i32, !dbg !223
  %68 = add nsw i32 %65, %67, !dbg !224
  %69 = xor i32 %62, %68, !dbg !225
  %70 = trunc i32 %69 to i16, !dbg !220
  store i16 %70, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 4), align 8, !dbg !226
  %71 = call i32 @code(), !dbg !227
  %72 = load i16, ptr @inter, align 2, !dbg !228
  %73 = zext i16 %72 to i32, !dbg !228
  %74 = load i16, ptr @res, align 2, !dbg !229
  %75 = zext i16 %74 to i32, !dbg !229
  %76 = xor i32 %73, %75, !dbg !230
  %77 = trunc i32 %76 to i16, !dbg !228
  store i16 %77, ptr @inter, align 2, !dbg !231
  %78 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 4), align 8, !dbg !232
  %79 = zext i16 %78 to i32, !dbg !232
  %80 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 10), align 2, !dbg !233
  %81 = zext i8 %80 to i32, !dbg !233
  %82 = mul nsw i32 %81, 256, !dbg !234
  %83 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 11), align 1, !dbg !235
  %84 = zext i8 %83 to i32, !dbg !235
  %85 = add nsw i32 %82, %84, !dbg !236
  %86 = xor i32 %79, %85, !dbg !237
  %87 = trunc i32 %86 to i16, !dbg !232
  store i16 %87, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 5), align 2, !dbg !238
  %88 = call i32 @code(), !dbg !239
  %89 = load i16, ptr @inter, align 2, !dbg !240
  %90 = zext i16 %89 to i32, !dbg !240
  %91 = load i16, ptr @res, align 2, !dbg !241
  %92 = zext i16 %91 to i32, !dbg !241
  %93 = xor i32 %90, %92, !dbg !242
  %94 = trunc i32 %93 to i16, !dbg !240
  store i16 %94, ptr @inter, align 2, !dbg !243
  %95 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 5), align 2, !dbg !244
  %96 = zext i16 %95 to i32, !dbg !244
  %97 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 12), align 4, !dbg !245
  %98 = zext i8 %97 to i32, !dbg !245
  %99 = mul nsw i32 %98, 256, !dbg !246
  %100 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 13), align 1, !dbg !247
  %101 = zext i8 %100 to i32, !dbg !247
  %102 = add nsw i32 %99, %101, !dbg !248
  %103 = xor i32 %96, %102, !dbg !249
  %104 = trunc i32 %103 to i16, !dbg !244
  store i16 %104, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 6), align 4, !dbg !250
  %105 = call i32 @code(), !dbg !251
  %106 = load i16, ptr @inter, align 2, !dbg !252
  %107 = zext i16 %106 to i32, !dbg !252
  %108 = load i16, ptr @res, align 2, !dbg !253
  %109 = zext i16 %108 to i32, !dbg !253
  %110 = xor i32 %107, %109, !dbg !254
  %111 = trunc i32 %110 to i16, !dbg !252
  store i16 %111, ptr @inter, align 2, !dbg !255
  %112 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 6), align 4, !dbg !256
  %113 = zext i16 %112 to i32, !dbg !256
  %114 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 14), align 2, !dbg !257
  %115 = zext i8 %114 to i32, !dbg !257
  %116 = mul nsw i32 %115, 256, !dbg !258
  %117 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 15), align 1, !dbg !259
  %118 = zext i8 %117 to i32, !dbg !259
  %119 = add nsw i32 %116, %118, !dbg !260
  %120 = xor i32 %113, %119, !dbg !261
  %121 = trunc i32 %120 to i16, !dbg !256
  store i16 %121, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 7), align 2, !dbg !262
  %122 = call i32 @code(), !dbg !263
  %123 = load i16, ptr @inter, align 2, !dbg !264
  %124 = zext i16 %123 to i32, !dbg !264
  %125 = load i16, ptr @res, align 2, !dbg !265
  %126 = zext i16 %125 to i32, !dbg !265
  %127 = xor i32 %124, %126, !dbg !266
  %128 = trunc i32 %127 to i16, !dbg !264
  store i16 %128, ptr @inter, align 2, !dbg !267
  %129 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 7), align 2, !dbg !268
  %130 = zext i16 %129 to i32, !dbg !268
  %131 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 16), align 16, !dbg !269
  %132 = zext i8 %131 to i32, !dbg !269
  %133 = mul nsw i32 %132, 256, !dbg !270
  %134 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 17), align 1, !dbg !271
  %135 = zext i8 %134 to i32, !dbg !271
  %136 = add nsw i32 %133, %135, !dbg !272
  %137 = xor i32 %130, %136, !dbg !273
  %138 = trunc i32 %137 to i16, !dbg !268
  store i16 %138, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 8), align 16, !dbg !274
  %139 = call i32 @code(), !dbg !275
  %140 = load i16, ptr @inter, align 2, !dbg !276
  %141 = zext i16 %140 to i32, !dbg !276
  %142 = load i16, ptr @res, align 2, !dbg !277
  %143 = zext i16 %142 to i32, !dbg !277
  %144 = xor i32 %141, %143, !dbg !278
  %145 = trunc i32 %144 to i16, !dbg !276
  store i16 %145, ptr @inter, align 2, !dbg !279
  %146 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 8), align 16, !dbg !280
  %147 = zext i16 %146 to i32, !dbg !280
  %148 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 18), align 2, !dbg !281
  %149 = zext i8 %148 to i32, !dbg !281
  %150 = mul nsw i32 %149, 256, !dbg !282
  %151 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 19), align 1, !dbg !283
  %152 = zext i8 %151 to i32, !dbg !283
  %153 = add nsw i32 %150, %152, !dbg !284
  %154 = xor i32 %147, %153, !dbg !285
  %155 = trunc i32 %154 to i16, !dbg !280
  store i16 %155, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 9), align 2, !dbg !286
  %156 = call i32 @code(), !dbg !287
  %157 = load i16, ptr @inter, align 2, !dbg !288
  %158 = zext i16 %157 to i32, !dbg !288
  %159 = load i16, ptr @res, align 2, !dbg !289
  %160 = zext i16 %159 to i32, !dbg !289
  %161 = xor i32 %158, %160, !dbg !290
  %162 = trunc i32 %161 to i16, !dbg !288
  store i16 %162, ptr @inter, align 2, !dbg !291
  %163 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 9), align 2, !dbg !292
  %164 = zext i16 %163 to i32, !dbg !292
  %165 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 20), align 4, !dbg !293
  %166 = zext i8 %165 to i32, !dbg !293
  %167 = mul nsw i32 %166, 256, !dbg !294
  %168 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 21), align 1, !dbg !295
  %169 = zext i8 %168 to i32, !dbg !295
  %170 = add nsw i32 %167, %169, !dbg !296
  %171 = xor i32 %164, %170, !dbg !297
  %172 = trunc i32 %171 to i16, !dbg !292
  store i16 %172, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 10), align 4, !dbg !298
  %173 = call i32 @code(), !dbg !299
  %174 = load i16, ptr @inter, align 2, !dbg !300
  %175 = zext i16 %174 to i32, !dbg !300
  %176 = load i16, ptr @res, align 2, !dbg !301
  %177 = zext i16 %176 to i32, !dbg !301
  %178 = xor i32 %175, %177, !dbg !302
  %179 = trunc i32 %178 to i16, !dbg !300
  store i16 %179, ptr @inter, align 2, !dbg !303
  %180 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 10), align 4, !dbg !304
  %181 = zext i16 %180 to i32, !dbg !304
  %182 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 22), align 2, !dbg !305
  %183 = zext i8 %182 to i32, !dbg !305
  %184 = mul nsw i32 %183, 256, !dbg !306
  %185 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 23), align 1, !dbg !307
  %186 = zext i8 %185 to i32, !dbg !307
  %187 = add nsw i32 %184, %186, !dbg !308
  %188 = xor i32 %181, %187, !dbg !309
  %189 = trunc i32 %188 to i16, !dbg !304
  store i16 %189, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 11), align 2, !dbg !310
  %190 = call i32 @code(), !dbg !311
  %191 = load i16, ptr @inter, align 2, !dbg !312
  %192 = zext i16 %191 to i32, !dbg !312
  %193 = load i16, ptr @res, align 2, !dbg !313
  %194 = zext i16 %193 to i32, !dbg !313
  %195 = xor i32 %192, %194, !dbg !314
  %196 = trunc i32 %195 to i16, !dbg !312
  store i16 %196, ptr @inter, align 2, !dbg !315
  %197 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 11), align 2, !dbg !316
  %198 = zext i16 %197 to i32, !dbg !316
  %199 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 24), align 8, !dbg !317
  %200 = zext i8 %199 to i32, !dbg !317
  %201 = mul nsw i32 %200, 256, !dbg !318
  %202 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 25), align 1, !dbg !319
  %203 = zext i8 %202 to i32, !dbg !319
  %204 = add nsw i32 %201, %203, !dbg !320
  %205 = xor i32 %198, %204, !dbg !321
  %206 = trunc i32 %205 to i16, !dbg !316
  store i16 %206, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 12), align 8, !dbg !322
  %207 = call i32 @code(), !dbg !323
  %208 = load i16, ptr @inter, align 2, !dbg !324
  %209 = zext i16 %208 to i32, !dbg !324
  %210 = load i16, ptr @res, align 2, !dbg !325
  %211 = zext i16 %210 to i32, !dbg !325
  %212 = xor i32 %209, %211, !dbg !326
  %213 = trunc i32 %212 to i16, !dbg !324
  store i16 %213, ptr @inter, align 2, !dbg !327
  %214 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 12), align 8, !dbg !328
  %215 = zext i16 %214 to i32, !dbg !328
  %216 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 26), align 2, !dbg !329
  %217 = zext i8 %216 to i32, !dbg !329
  %218 = mul nsw i32 %217, 256, !dbg !330
  %219 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 27), align 1, !dbg !331
  %220 = zext i8 %219 to i32, !dbg !331
  %221 = add nsw i32 %218, %220, !dbg !332
  %222 = xor i32 %215, %221, !dbg !333
  %223 = trunc i32 %222 to i16, !dbg !328
  store i16 %223, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 13), align 2, !dbg !334
  %224 = call i32 @code(), !dbg !335
  %225 = load i16, ptr @inter, align 2, !dbg !336
  %226 = zext i16 %225 to i32, !dbg !336
  %227 = load i16, ptr @res, align 2, !dbg !337
  %228 = zext i16 %227 to i32, !dbg !337
  %229 = xor i32 %226, %228, !dbg !338
  %230 = trunc i32 %229 to i16, !dbg !336
  store i16 %230, ptr @inter, align 2, !dbg !339
  %231 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 13), align 2, !dbg !340
  %232 = zext i16 %231 to i32, !dbg !340
  %233 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 28), align 4, !dbg !341
  %234 = zext i8 %233 to i32, !dbg !341
  %235 = mul nsw i32 %234, 256, !dbg !342
  %236 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 29), align 1, !dbg !343
  %237 = zext i8 %236 to i32, !dbg !343
  %238 = add nsw i32 %235, %237, !dbg !344
  %239 = xor i32 %232, %238, !dbg !345
  %240 = trunc i32 %239 to i16, !dbg !340
  store i16 %240, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 14), align 4, !dbg !346
  %241 = call i32 @code(), !dbg !347
  %242 = load i16, ptr @inter, align 2, !dbg !348
  %243 = zext i16 %242 to i32, !dbg !348
  %244 = load i16, ptr @res, align 2, !dbg !349
  %245 = zext i16 %244 to i32, !dbg !349
  %246 = xor i32 %243, %245, !dbg !350
  %247 = trunc i32 %246 to i16, !dbg !348
  store i16 %247, ptr @inter, align 2, !dbg !351
  %248 = load i16, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 14), align 4, !dbg !352
  %249 = zext i16 %248 to i32, !dbg !352
  %250 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 30), align 2, !dbg !353
  %251 = zext i8 %250 to i32, !dbg !353
  %252 = mul nsw i32 %251, 256, !dbg !354
  %253 = load i8, ptr getelementptr inbounds ([32 x i8], ptr @cle, i64 0, i64 31), align 1, !dbg !355
  %254 = zext i8 %253 to i32, !dbg !355
  %255 = add nsw i32 %252, %254, !dbg !356
  %256 = xor i32 %249, %255, !dbg !357
  %257 = trunc i32 %256 to i16, !dbg !352
  store i16 %257, ptr getelementptr inbounds ([16 x i16], ptr @x1a0, i64 0, i64 15), align 2, !dbg !358
  %258 = call i32 @code(), !dbg !359
  %259 = load i16, ptr @inter, align 2, !dbg !360
  %260 = zext i16 %259 to i32, !dbg !360
  %261 = load i16, ptr @res, align 2, !dbg !361
  %262 = zext i16 %261 to i32, !dbg !361
  %263 = xor i32 %260, %262, !dbg !362
  %264 = trunc i32 %263 to i16, !dbg !360
  store i16 %264, ptr @inter, align 2, !dbg !363
  store i16 0, ptr @i, align 2, !dbg !364
  ret i32 0, !dbg !365
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @my_rand_r(ptr noundef %0) #0 !dbg !366 {
  %2 = alloca ptr, align 8
  %3 = alloca i32, align 4
  store ptr %0, ptr %2, align 8
  call void @llvm.dbg.declare(metadata ptr %2, metadata !372, metadata !DIExpression()), !dbg !373
  call void @llvm.dbg.declare(metadata ptr %3, metadata !374, metadata !DIExpression()), !dbg !375
  %4 = load ptr, ptr %2, align 8, !dbg !376
  %5 = load i32, ptr %4, align 4, !dbg !377
  %6 = mul i32 %5, 1664525, !dbg !378
  %7 = add i32 %6, 1013904223, !dbg !379
  store i32 %7, ptr %3, align 4, !dbg !375
  %8 = load i32, ptr %3, align 4, !dbg !380
  %9 = load ptr, ptr %2, align 8, !dbg !381
  store i32 %8, ptr %9, align 4, !dbg !382
  %10 = load i32, ptr %3, align 4, !dbg !383
  %11 = lshr i32 %10, 16, !dbg !384
  %12 = and i32 %11, 32767, !dbg !385
  ret i32 %12, !dbg !386
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @d_pc1(ptr noundef %0) #0 !dbg !387 {
  %2 = alloca ptr, align 8
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca i32, align 4
  store ptr %0, ptr %2, align 8
  call void @llvm.dbg.declare(metadata ptr %2, metadata !391, metadata !DIExpression()), !dbg !392
  call void @llvm.dbg.declare(metadata ptr %3, metadata !393, metadata !DIExpression()), !dbg !394
  %6 = load ptr, ptr %2, align 8, !dbg !395
  %7 = load i32, ptr %6, align 4, !dbg !396
  store i32 %7, ptr %3, align 4, !dbg !394
  call void @llvm.dbg.declare(metadata ptr %4, metadata !397, metadata !DIExpression()), !dbg !398
  call void @llvm.dbg.declare(metadata ptr %5, metadata !399, metadata !DIExpression()), !dbg !400
  store i32 1, ptr %5, align 4, !dbg !400
  store i16 0, ptr @si, align 2, !dbg !401
  store i16 0, ptr @x1a2, align 2, !dbg !402
  store i16 0, ptr @i, align 2, !dbg !403
  call void @llvm.memcpy.p0.p0.i64(ptr align 16 @cle, ptr align 1 @.str.2, i64 32, i1 false), !dbg !404
  store i8 0, ptr getelementptr inbounds ([32 x i8], ptr @buff, i64 0, i64 1), align 1, !dbg !405
  %8 = call i64 @strlen(ptr noundef @buff) #6, !dbg !406
  %9 = icmp ugt i64 %8, 32, !dbg !408
  br i1 %9, label %10, label %11, !dbg !409

10:                                               ; preds = %1
  store i32 32, ptr @count, align 4, !dbg !410
  br label %14, !dbg !412

11:                                               ; preds = %1
  %12 = call i64 @strlen(ptr noundef @buff) #6, !dbg !413
  %13 = trunc i64 %12 to i32, !dbg !413
  store i32 %13, ptr @count, align 4, !dbg !415
  br label %14

14:                                               ; preds = %11, %10
  store i32 0, ptr @c1, align 4, !dbg !416
  br label %15, !dbg !418

15:                                               ; preds = %27, %14
  %16 = load i32, ptr @c1, align 4, !dbg !419
  %17 = load i32, ptr @count, align 4, !dbg !421
  %18 = icmp slt i32 %16, %17, !dbg !422
  br i1 %18, label %19, label %30, !dbg !423

19:                                               ; preds = %15
  %20 = load i32, ptr @c1, align 4, !dbg !424
  %21 = sext i32 %20 to i64, !dbg !426
  %22 = getelementptr inbounds [32 x i8], ptr @buff, i64 0, i64 %21, !dbg !426
  %23 = load i8, ptr %22, align 1, !dbg !426
  %24 = load i32, ptr @c1, align 4, !dbg !427
  %25 = sext i32 %24 to i64, !dbg !428
  %26 = getelementptr inbounds [32 x i8], ptr @cle, i64 0, i64 %25, !dbg !428
  store i8 %23, ptr %26, align 1, !dbg !429
  br label %27, !dbg !430

27:                                               ; preds = %19
  %28 = load i32, ptr @c1, align 4, !dbg !431
  %29 = add nsw i32 %28, 1, !dbg !431
  store i32 %29, ptr @c1, align 4, !dbg !431
  br label %15, !dbg !432, !llvm.loop !433

30:                                               ; preds = %15
  store i32 0, ptr %4, align 4, !dbg !436
  br label %31, !dbg !437

31:                                               ; preds = %67, %30
  %32 = load i32, ptr %3, align 4, !dbg !438
  %33 = add nsw i32 %32, -1, !dbg !438
  store i32 %33, ptr %3, align 4, !dbg !438
  %34 = icmp ne i32 %33, 0, !dbg !437
  br i1 %34, label %35, label %85, !dbg !437

35:                                               ; preds = %31
  %36 = call i32 @my_rand_r(ptr noundef %5), !dbg !439
  %37 = trunc i32 %36 to i16, !dbg !439
  store i16 %37, ptr @c, align 2, !dbg !441
  %38 = call i32 @assemble(), !dbg !442
  %39 = load i16, ptr @inter, align 2, !dbg !443
  %40 = zext i16 %39 to i32, !dbg !443
  %41 = ashr i32 %40, 8, !dbg !444
  %42 = trunc i32 %41 to i16, !dbg !443
  store i16 %42, ptr @cfc, align 2, !dbg !445
  %43 = load i16, ptr @inter, align 2, !dbg !446
  %44 = zext i16 %43 to i32, !dbg !446
  %45 = and i32 %44, 255, !dbg !447
  %46 = trunc i32 %45 to i16, !dbg !446
  store i16 %46, ptr @cfd, align 2, !dbg !448
  store i16 0, ptr @compte, align 2, !dbg !449
  br label %47, !dbg !451

47:                                               ; preds = %64, %35
  %48 = load i16, ptr @compte, align 2, !dbg !452
  %49 = zext i16 %48 to i32, !dbg !452
  %50 = icmp sle i32 %49, 31, !dbg !454
  br i1 %50, label %51, label %67, !dbg !455

51:                                               ; preds = %47
  %52 = load i16, ptr @compte, align 2, !dbg !456
  %53 = zext i16 %52 to i64, !dbg !458
  %54 = getelementptr inbounds [32 x i8], ptr @cle, i64 0, i64 %53, !dbg !458
  %55 = load i8, ptr %54, align 1, !dbg !458
  %56 = zext i8 %55 to i32, !dbg !458
  %57 = load i16, ptr @c, align 2, !dbg !459
  %58 = sext i16 %57 to i32, !dbg !459
  %59 = xor i32 %56, %58, !dbg !460
  %60 = trunc i32 %59 to i8, !dbg !458
  %61 = load i16, ptr @compte, align 2, !dbg !461
  %62 = zext i16 %61 to i64, !dbg !462
  %63 = getelementptr inbounds [32 x i8], ptr @cle, i64 0, i64 %62, !dbg !462
  store i8 %60, ptr %63, align 1, !dbg !463
  br label %64, !dbg !464

64:                                               ; preds = %51
  %65 = load i16, ptr @compte, align 2, !dbg !465
  %66 = add i16 %65, 1, !dbg !465
  store i16 %66, ptr @compte, align 2, !dbg !465
  br label %47, !dbg !466, !llvm.loop !467

67:                                               ; preds = %47
  %68 = load i16, ptr @c, align 2, !dbg !469
  %69 = sext i16 %68 to i32, !dbg !469
  %70 = load i16, ptr @cfc, align 2, !dbg !470
  %71 = zext i16 %70 to i32, !dbg !470
  %72 = load i16, ptr @cfd, align 2, !dbg !471
  %73 = zext i16 %72 to i32, !dbg !471
  %74 = xor i32 %71, %73, !dbg !472
  %75 = xor i32 %69, %74, !dbg !473
  %76 = trunc i32 %75 to i16, !dbg !469
  store i16 %76, ptr @c, align 2, !dbg !474
  %77 = load i16, ptr @c, align 2, !dbg !475
  %78 = sext i16 %77 to i32, !dbg !475
  %79 = ashr i32 %78, 4, !dbg !476
  %80 = trunc i32 %79 to i16, !dbg !477
  store i16 %80, ptr @d, align 2, !dbg !478
  %81 = load i16, ptr @c, align 2, !dbg !479
  %82 = sext i16 %81 to i32, !dbg !479
  %83 = and i32 %82, 15, !dbg !480
  %84 = trunc i32 %83 to i16, !dbg !481
  store i16 %84, ptr @e, align 2, !dbg !482
  br label %31, !dbg !437, !llvm.loop !483

85:                                               ; preds = %31
  ret void, !dbg !485
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

; Function Attrs: nounwind willreturn memory(read)
declare i64 @strlen(ptr noundef) #3

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main(i32 noundef %0, ptr noundef %1) #0 !dbg !486 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca i64, align 8
  %7 = alloca i32, align 4
  %8 = alloca i64, align 8
  %9 = alloca double, align 8
  store i32 0, ptr %3, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !492, metadata !DIExpression()), !dbg !493
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !494, metadata !DIExpression()), !dbg !495
  call void @llvm.dbg.declare(metadata ptr %6, metadata !496, metadata !DIExpression()), !dbg !499
  %10 = call i64 @clock() #7, !dbg !500
  store i64 %10, ptr %6, align 8, !dbg !499
  call void @llvm.dbg.declare(metadata ptr %7, metadata !501, metadata !DIExpression()), !dbg !502
  store i32 20000, ptr %7, align 4, !dbg !502
  %11 = load i32, ptr %4, align 4, !dbg !503
  %12 = icmp eq i32 %11, 2, !dbg !505
  br i1 %12, label %13, label %18, !dbg !506

13:                                               ; preds = %2
  %14 = load ptr, ptr %5, align 8, !dbg !507
  %15 = getelementptr inbounds ptr, ptr %14, i64 1, !dbg !507
  %16 = load ptr, ptr %15, align 8, !dbg !507
  %17 = call i32 @atoi(ptr noundef %16) #6, !dbg !508
  store i32 %17, ptr %7, align 4, !dbg !509
  br label %18, !dbg !510

18:                                               ; preds = %13, %2
  %19 = call i32 (ptr, ...) @printf(ptr noundef @.str.5), !dbg !511
  call void @d_pc1(ptr noundef %7), !dbg !512
  call void @llvm.dbg.declare(metadata ptr %8, metadata !513, metadata !DIExpression()), !dbg !514
  %20 = call i64 @clock() #7, !dbg !515
  store i64 %20, ptr %8, align 8, !dbg !514
  call void @llvm.dbg.declare(metadata ptr %9, metadata !516, metadata !DIExpression()), !dbg !517
  %21 = load i64, ptr %8, align 8, !dbg !518
  %22 = load i64, ptr %6, align 8, !dbg !519
  %23 = sub nsw i64 %21, %22, !dbg !520
  %24 = sitofp i64 %23 to double, !dbg !521
  %25 = fdiv double %24, 1.000000e+06, !dbg !522
  %26 = fmul double %25, 1.000000e+03, !dbg !523
  store double %26, ptr %9, align 8, !dbg !517
  %27 = load double, ptr %9, align 8, !dbg !524
  %28 = call i32 (ptr, ...) @printf(ptr noundef @.str.6, double noundef %27), !dbg !525
  %29 = call i32 (ptr, ...) @printf(ptr noundef @.str.7), !dbg !526
  ret i32 0, !dbg !527
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
!llvm.module.flags = !{!81, !82, !83, !84, !85, !86, !87}
!llvm.ident = !{!88}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(name: "x1a2", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!2 = distinct !DICompileUnit(language: DW_LANG_C11, file: !3, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !4, globals: !9, splitDebugInlining: false, nameTableKind: None)
!3 = !DIFile(filename: "pc1cod.c", directory: "/home/yxk/test-sgx/SGX-test/pc1", checksumkind: CSK_MD5, checksum: "d2cbb6c87de76c03a3ee9ebbf0fc57de")
!4 = !{!5, !6}
!5 = !DIBasicType(name: "double", size: 64, encoding: DW_ATE_float)
!6 = !DIDerivedType(tag: DW_TAG_typedef, name: "__clock_t", file: !7, line: 156, baseType: !8)
!7 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!8 = !DIBasicType(name: "long", size: 64, encoding: DW_ATE_signed)
!9 = !{!10, !16, !21, !26, !31, !34, !36, !38, !40, !42, !0, !44, !49, !51, !53, !55, !57, !59, !61, !67, !69, !72, !75, !77, !79}
!10 = !DIGlobalVariableExpression(var: !11, expr: !DIExpression())
!11 = distinct !DIGlobalVariable(scope: null, file: !3, line: 267, type: !12, isLocal: true, isDefinition: true)
!12 = !DICompositeType(tag: DW_TAG_array_type, baseType: !13, size: 264, elements: !14)
!13 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!14 = !{!15}
!15 = !DISubrange(count: 33)
!16 = !DIGlobalVariableExpression(var: !17, expr: !DIExpression())
!17 = distinct !DIGlobalVariable(scope: null, file: !3, line: 340, type: !18, isLocal: true, isDefinition: true)
!18 = !DICompositeType(tag: DW_TAG_array_type, baseType: !13, size: 424, elements: !19)
!19 = !{!20}
!20 = !DISubrange(count: 53)
!21 = !DIGlobalVariableExpression(var: !22, expr: !DIExpression())
!22 = distinct !DIGlobalVariable(scope: null, file: !3, line: 344, type: !23, isLocal: true, isDefinition: true)
!23 = !DICompositeType(tag: DW_TAG_array_type, baseType: !13, size: 152, elements: !24)
!24 = !{!25}
!25 = !DISubrange(count: 19)
!26 = !DIGlobalVariableExpression(var: !27, expr: !DIExpression())
!27 = distinct !DIGlobalVariable(scope: null, file: !3, line: 345, type: !28, isLocal: true, isDefinition: true)
!28 = !DICompositeType(tag: DW_TAG_array_type, baseType: !13, size: 384, elements: !29)
!29 = !{!30}
!30 = !DISubrange(count: 48)
!31 = !DIGlobalVariableExpression(var: !32, expr: !DIExpression())
!32 = distinct !DIGlobalVariable(name: "ax", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!33 = !DIBasicType(name: "unsigned short", size: 16, encoding: DW_ATE_unsigned)
!34 = !DIGlobalVariableExpression(var: !35, expr: !DIExpression())
!35 = distinct !DIGlobalVariable(name: "bx", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!36 = !DIGlobalVariableExpression(var: !37, expr: !DIExpression())
!37 = distinct !DIGlobalVariable(name: "cx", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!38 = !DIGlobalVariableExpression(var: !39, expr: !DIExpression())
!39 = distinct !DIGlobalVariable(name: "dx", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!40 = !DIGlobalVariableExpression(var: !41, expr: !DIExpression())
!41 = distinct !DIGlobalVariable(name: "si", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!42 = !DIGlobalVariableExpression(var: !43, expr: !DIExpression())
!43 = distinct !DIGlobalVariable(name: "tmp", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!44 = !DIGlobalVariableExpression(var: !45, expr: !DIExpression())
!45 = distinct !DIGlobalVariable(name: "x1a0", scope: !2, file: !3, line: 19, type: !46, isLocal: false, isDefinition: true)
!46 = !DICompositeType(tag: DW_TAG_array_type, baseType: !33, size: 256, elements: !47)
!47 = !{!48}
!48 = !DISubrange(count: 16)
!49 = !DIGlobalVariableExpression(var: !50, expr: !DIExpression())
!50 = distinct !DIGlobalVariable(name: "res", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!51 = !DIGlobalVariableExpression(var: !52, expr: !DIExpression())
!52 = distinct !DIGlobalVariable(name: "i", scope: !2, file: !3, line: 19, type: !33, isLocal: false, isDefinition: true)
!53 = !DIGlobalVariableExpression(var: !54, expr: !DIExpression())
!54 = distinct !DIGlobalVariable(name: "inter", scope: !2, file: !3, line: 20, type: !33, isLocal: false, isDefinition: true)
!55 = !DIGlobalVariableExpression(var: !56, expr: !DIExpression())
!56 = distinct !DIGlobalVariable(name: "cfc", scope: !2, file: !3, line: 20, type: !33, isLocal: false, isDefinition: true)
!57 = !DIGlobalVariableExpression(var: !58, expr: !DIExpression())
!58 = distinct !DIGlobalVariable(name: "cfd", scope: !2, file: !3, line: 20, type: !33, isLocal: false, isDefinition: true)
!59 = !DIGlobalVariableExpression(var: !60, expr: !DIExpression())
!60 = distinct !DIGlobalVariable(name: "compte", scope: !2, file: !3, line: 20, type: !33, isLocal: false, isDefinition: true)
!61 = !DIGlobalVariableExpression(var: !62, expr: !DIExpression())
!62 = distinct !DIGlobalVariable(name: "cle", scope: !2, file: !3, line: 22, type: !63, isLocal: false, isDefinition: true)
!63 = !DICompositeType(tag: DW_TAG_array_type, baseType: !64, size: 256, elements: !65)
!64 = !DIBasicType(name: "unsigned char", size: 8, encoding: DW_ATE_unsigned_char)
!65 = !{!66}
!66 = !DISubrange(count: 32)
!67 = !DIGlobalVariableExpression(var: !68, expr: !DIExpression())
!68 = distinct !DIGlobalVariable(name: "buff", scope: !2, file: !3, line: 25, type: !63, isLocal: false, isDefinition: true)
!69 = !DIGlobalVariableExpression(var: !70, expr: !DIExpression())
!70 = distinct !DIGlobalVariable(name: "c", scope: !2, file: !3, line: 27, type: !71, isLocal: false, isDefinition: true)
!71 = !DIBasicType(name: "short", size: 16, encoding: DW_ATE_signed)
!72 = !DIGlobalVariableExpression(var: !73, expr: !DIExpression())
!73 = distinct !DIGlobalVariable(name: "c1", scope: !2, file: !3, line: 29, type: !74, isLocal: false, isDefinition: true)
!74 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!75 = !DIGlobalVariableExpression(var: !76, expr: !DIExpression())
!76 = distinct !DIGlobalVariable(name: "count", scope: !2, file: !3, line: 29, type: !74, isLocal: false, isDefinition: true)
!77 = !DIGlobalVariableExpression(var: !78, expr: !DIExpression())
!78 = distinct !DIGlobalVariable(name: "d", scope: !2, file: !3, line: 31, type: !71, isLocal: false, isDefinition: true)
!79 = !DIGlobalVariableExpression(var: !80, expr: !DIExpression())
!80 = distinct !DIGlobalVariable(name: "e", scope: !2, file: !3, line: 31, type: !71, isLocal: false, isDefinition: true)
!81 = !{i32 7, !"Dwarf Version", i32 5}
!82 = !{i32 2, !"Debug Info Version", i32 3}
!83 = !{i32 1, !"wchar_size", i32 4}
!84 = !{i32 8, !"PIC Level", i32 2}
!85 = !{i32 7, !"PIE Level", i32 2}
!86 = !{i32 7, !"uwtable", i32 2}
!87 = !{i32 7, !"frame-pointer", i32 2}
!88 = !{!"Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)"}
!89 = distinct !DISubprogram(name: "code", scope: !3, file: !3, line: 36, type: !90, scopeLine: 37, spFlags: DISPFlagDefinition, unit: !2)
!90 = !DISubroutineType(types: !91)
!91 = !{!74}
!92 = !DILocation(line: 39, column: 8, scope: !89)
!93 = !DILocation(line: 39, column: 15, scope: !89)
!94 = !DILocation(line: 39, column: 13, scope: !89)
!95 = !DILocation(line: 39, column: 6, scope: !89)
!96 = !DILocation(line: 41, column: 13, scope: !89)
!97 = !DILocation(line: 41, column: 8, scope: !89)
!98 = !DILocation(line: 41, column: 6, scope: !89)
!99 = !DILocation(line: 43, column: 6, scope: !89)
!100 = !DILocation(line: 45, column: 6, scope: !89)
!101 = !DILocation(line: 48, column: 9, scope: !89)
!102 = !DILocation(line: 48, column: 7, scope: !89)
!103 = !DILocation(line: 50, column: 8, scope: !89)
!104 = !DILocation(line: 50, column: 6, scope: !89)
!105 = !DILocation(line: 52, column: 8, scope: !89)
!106 = !DILocation(line: 52, column: 6, scope: !89)
!107 = !DILocation(line: 55, column: 9, scope: !89)
!108 = !DILocation(line: 55, column: 7, scope: !89)
!109 = !DILocation(line: 57, column: 8, scope: !89)
!110 = !DILocation(line: 57, column: 6, scope: !89)
!111 = !DILocation(line: 59, column: 8, scope: !89)
!112 = !DILocation(line: 59, column: 6, scope: !89)
!113 = !DILocation(line: 62, column: 7, scope: !114)
!114 = distinct !DILexicalBlock(scope: !89, file: !3, line: 62, column: 7)
!115 = !DILocation(line: 62, column: 10, scope: !114)
!116 = !DILocation(line: 62, column: 7, scope: !89)
!117 = !DILocation(line: 66, column: 10, scope: !118)
!118 = distinct !DILexicalBlock(scope: !114, file: !3, line: 64, column: 3)
!119 = !DILocation(line: 66, column: 15, scope: !118)
!120 = !DILocation(line: 66, column: 13, scope: !118)
!121 = !DILocation(line: 66, column: 8, scope: !118)
!122 = !DILocation(line: 68, column: 3, scope: !118)
!123 = !DILocation(line: 70, column: 9, scope: !89)
!124 = !DILocation(line: 70, column: 7, scope: !89)
!125 = !DILocation(line: 72, column: 8, scope: !89)
!126 = !DILocation(line: 72, column: 6, scope: !89)
!127 = !DILocation(line: 74, column: 8, scope: !89)
!128 = !DILocation(line: 74, column: 6, scope: !89)
!129 = !DILocation(line: 77, column: 7, scope: !130)
!130 = distinct !DILexicalBlock(scope: !89, file: !3, line: 77, column: 7)
!131 = !DILocation(line: 77, column: 10, scope: !130)
!132 = !DILocation(line: 77, column: 7, scope: !89)
!133 = !DILocation(line: 81, column: 10, scope: !134)
!134 = distinct !DILexicalBlock(scope: !130, file: !3, line: 79, column: 3)
!135 = !DILocation(line: 81, column: 15, scope: !134)
!136 = !DILocation(line: 81, column: 13, scope: !134)
!137 = !DILocation(line: 81, column: 8, scope: !134)
!138 = !DILocation(line: 83, column: 10, scope: !134)
!139 = !DILocation(line: 83, column: 15, scope: !134)
!140 = !DILocation(line: 83, column: 13, scope: !134)
!141 = !DILocation(line: 83, column: 8, scope: !134)
!142 = !DILocation(line: 85, column: 3, scope: !134)
!143 = !DILocation(line: 87, column: 9, scope: !89)
!144 = !DILocation(line: 87, column: 7, scope: !89)
!145 = !DILocation(line: 89, column: 8, scope: !89)
!146 = !DILocation(line: 89, column: 6, scope: !89)
!147 = !DILocation(line: 91, column: 8, scope: !89)
!148 = !DILocation(line: 91, column: 6, scope: !89)
!149 = !DILocation(line: 93, column: 8, scope: !89)
!150 = !DILocation(line: 93, column: 13, scope: !89)
!151 = !DILocation(line: 93, column: 11, scope: !89)
!152 = !DILocation(line: 93, column: 6, scope: !89)
!153 = !DILocation(line: 95, column: 8, scope: !89)
!154 = !DILocation(line: 95, column: 13, scope: !89)
!155 = !DILocation(line: 95, column: 11, scope: !89)
!156 = !DILocation(line: 95, column: 6, scope: !89)
!157 = !DILocation(line: 98, column: 8, scope: !89)
!158 = !DILocation(line: 98, column: 11, scope: !89)
!159 = !DILocation(line: 98, column: 6, scope: !89)
!160 = !DILocation(line: 101, column: 10, scope: !89)
!161 = !DILocation(line: 101, column: 8, scope: !89)
!162 = !DILocation(line: 103, column: 13, scope: !89)
!163 = !DILocation(line: 103, column: 8, scope: !89)
!164 = !DILocation(line: 103, column: 3, scope: !89)
!165 = !DILocation(line: 103, column: 11, scope: !89)
!166 = !DILocation(line: 106, column: 9, scope: !89)
!167 = !DILocation(line: 106, column: 14, scope: !89)
!168 = !DILocation(line: 106, column: 12, scope: !89)
!169 = !DILocation(line: 106, column: 7, scope: !89)
!170 = !DILocation(line: 108, column: 7, scope: !89)
!171 = !DILocation(line: 108, column: 9, scope: !89)
!172 = !DILocation(line: 108, column: 5, scope: !89)
!173 = !DILocation(line: 110, column: 3, scope: !89)
!174 = distinct !DISubprogram(name: "assemble", scope: !3, file: !3, line: 115, type: !90, scopeLine: 116, spFlags: DISPFlagDefinition, unit: !2)
!175 = !DILocation(line: 119, column: 14, scope: !174)
!176 = !DILocation(line: 119, column: 21, scope: !174)
!177 = !DILocation(line: 119, column: 30, scope: !174)
!178 = !DILocation(line: 119, column: 28, scope: !174)
!179 = !DILocation(line: 119, column: 13, scope: !174)
!180 = !DILocation(line: 119, column: 11, scope: !174)
!181 = !DILocation(line: 121, column: 3, scope: !174)
!182 = !DILocation(line: 123, column: 11, scope: !174)
!183 = !DILocation(line: 123, column: 9, scope: !174)
!184 = !DILocation(line: 126, column: 13, scope: !174)
!185 = !DILocation(line: 126, column: 25, scope: !174)
!186 = !DILocation(line: 126, column: 32, scope: !174)
!187 = !DILocation(line: 126, column: 41, scope: !174)
!188 = !DILocation(line: 126, column: 39, scope: !174)
!189 = !DILocation(line: 126, column: 21, scope: !174)
!190 = !DILocation(line: 126, column: 11, scope: !174)
!191 = !DILocation(line: 128, column: 3, scope: !174)
!192 = !DILocation(line: 130, column: 11, scope: !174)
!193 = !DILocation(line: 130, column: 19, scope: !174)
!194 = !DILocation(line: 130, column: 17, scope: !174)
!195 = !DILocation(line: 130, column: 9, scope: !174)
!196 = !DILocation(line: 133, column: 13, scope: !174)
!197 = !DILocation(line: 133, column: 25, scope: !174)
!198 = !DILocation(line: 133, column: 32, scope: !174)
!199 = !DILocation(line: 133, column: 41, scope: !174)
!200 = !DILocation(line: 133, column: 39, scope: !174)
!201 = !DILocation(line: 133, column: 21, scope: !174)
!202 = !DILocation(line: 133, column: 11, scope: !174)
!203 = !DILocation(line: 135, column: 3, scope: !174)
!204 = !DILocation(line: 137, column: 11, scope: !174)
!205 = !DILocation(line: 137, column: 19, scope: !174)
!206 = !DILocation(line: 137, column: 17, scope: !174)
!207 = !DILocation(line: 137, column: 9, scope: !174)
!208 = !DILocation(line: 140, column: 13, scope: !174)
!209 = !DILocation(line: 140, column: 25, scope: !174)
!210 = !DILocation(line: 140, column: 32, scope: !174)
!211 = !DILocation(line: 140, column: 41, scope: !174)
!212 = !DILocation(line: 140, column: 39, scope: !174)
!213 = !DILocation(line: 140, column: 21, scope: !174)
!214 = !DILocation(line: 140, column: 11, scope: !174)
!215 = !DILocation(line: 142, column: 3, scope: !174)
!216 = !DILocation(line: 144, column: 11, scope: !174)
!217 = !DILocation(line: 144, column: 19, scope: !174)
!218 = !DILocation(line: 144, column: 17, scope: !174)
!219 = !DILocation(line: 144, column: 9, scope: !174)
!220 = !DILocation(line: 147, column: 13, scope: !174)
!221 = !DILocation(line: 147, column: 25, scope: !174)
!222 = !DILocation(line: 147, column: 32, scope: !174)
!223 = !DILocation(line: 147, column: 41, scope: !174)
!224 = !DILocation(line: 147, column: 39, scope: !174)
!225 = !DILocation(line: 147, column: 21, scope: !174)
!226 = !DILocation(line: 147, column: 11, scope: !174)
!227 = !DILocation(line: 149, column: 3, scope: !174)
!228 = !DILocation(line: 151, column: 11, scope: !174)
!229 = !DILocation(line: 151, column: 19, scope: !174)
!230 = !DILocation(line: 151, column: 17, scope: !174)
!231 = !DILocation(line: 151, column: 9, scope: !174)
!232 = !DILocation(line: 154, column: 13, scope: !174)
!233 = !DILocation(line: 154, column: 25, scope: !174)
!234 = !DILocation(line: 154, column: 33, scope: !174)
!235 = !DILocation(line: 154, column: 42, scope: !174)
!236 = !DILocation(line: 154, column: 40, scope: !174)
!237 = !DILocation(line: 154, column: 21, scope: !174)
!238 = !DILocation(line: 154, column: 11, scope: !174)
!239 = !DILocation(line: 156, column: 3, scope: !174)
!240 = !DILocation(line: 158, column: 11, scope: !174)
!241 = !DILocation(line: 158, column: 19, scope: !174)
!242 = !DILocation(line: 158, column: 17, scope: !174)
!243 = !DILocation(line: 158, column: 9, scope: !174)
!244 = !DILocation(line: 161, column: 13, scope: !174)
!245 = !DILocation(line: 161, column: 25, scope: !174)
!246 = !DILocation(line: 161, column: 33, scope: !174)
!247 = !DILocation(line: 161, column: 42, scope: !174)
!248 = !DILocation(line: 161, column: 40, scope: !174)
!249 = !DILocation(line: 161, column: 21, scope: !174)
!250 = !DILocation(line: 161, column: 11, scope: !174)
!251 = !DILocation(line: 163, column: 3, scope: !174)
!252 = !DILocation(line: 165, column: 11, scope: !174)
!253 = !DILocation(line: 165, column: 19, scope: !174)
!254 = !DILocation(line: 165, column: 17, scope: !174)
!255 = !DILocation(line: 165, column: 9, scope: !174)
!256 = !DILocation(line: 168, column: 13, scope: !174)
!257 = !DILocation(line: 168, column: 25, scope: !174)
!258 = !DILocation(line: 168, column: 33, scope: !174)
!259 = !DILocation(line: 168, column: 42, scope: !174)
!260 = !DILocation(line: 168, column: 40, scope: !174)
!261 = !DILocation(line: 168, column: 21, scope: !174)
!262 = !DILocation(line: 168, column: 11, scope: !174)
!263 = !DILocation(line: 170, column: 3, scope: !174)
!264 = !DILocation(line: 172, column: 11, scope: !174)
!265 = !DILocation(line: 172, column: 19, scope: !174)
!266 = !DILocation(line: 172, column: 17, scope: !174)
!267 = !DILocation(line: 172, column: 9, scope: !174)
!268 = !DILocation(line: 175, column: 13, scope: !174)
!269 = !DILocation(line: 175, column: 25, scope: !174)
!270 = !DILocation(line: 175, column: 33, scope: !174)
!271 = !DILocation(line: 175, column: 42, scope: !174)
!272 = !DILocation(line: 175, column: 40, scope: !174)
!273 = !DILocation(line: 175, column: 21, scope: !174)
!274 = !DILocation(line: 175, column: 11, scope: !174)
!275 = !DILocation(line: 177, column: 3, scope: !174)
!276 = !DILocation(line: 179, column: 11, scope: !174)
!277 = !DILocation(line: 179, column: 19, scope: !174)
!278 = !DILocation(line: 179, column: 17, scope: !174)
!279 = !DILocation(line: 179, column: 9, scope: !174)
!280 = !DILocation(line: 182, column: 13, scope: !174)
!281 = !DILocation(line: 182, column: 25, scope: !174)
!282 = !DILocation(line: 182, column: 33, scope: !174)
!283 = !DILocation(line: 182, column: 42, scope: !174)
!284 = !DILocation(line: 182, column: 40, scope: !174)
!285 = !DILocation(line: 182, column: 21, scope: !174)
!286 = !DILocation(line: 182, column: 11, scope: !174)
!287 = !DILocation(line: 184, column: 3, scope: !174)
!288 = !DILocation(line: 186, column: 11, scope: !174)
!289 = !DILocation(line: 186, column: 19, scope: !174)
!290 = !DILocation(line: 186, column: 17, scope: !174)
!291 = !DILocation(line: 186, column: 9, scope: !174)
!292 = !DILocation(line: 189, column: 14, scope: !174)
!293 = !DILocation(line: 189, column: 26, scope: !174)
!294 = !DILocation(line: 189, column: 34, scope: !174)
!295 = !DILocation(line: 189, column: 43, scope: !174)
!296 = !DILocation(line: 189, column: 41, scope: !174)
!297 = !DILocation(line: 189, column: 22, scope: !174)
!298 = !DILocation(line: 189, column: 12, scope: !174)
!299 = !DILocation(line: 191, column: 3, scope: !174)
!300 = !DILocation(line: 193, column: 11, scope: !174)
!301 = !DILocation(line: 193, column: 19, scope: !174)
!302 = !DILocation(line: 193, column: 17, scope: !174)
!303 = !DILocation(line: 193, column: 9, scope: !174)
!304 = !DILocation(line: 196, column: 14, scope: !174)
!305 = !DILocation(line: 196, column: 27, scope: !174)
!306 = !DILocation(line: 196, column: 35, scope: !174)
!307 = !DILocation(line: 196, column: 44, scope: !174)
!308 = !DILocation(line: 196, column: 42, scope: !174)
!309 = !DILocation(line: 196, column: 23, scope: !174)
!310 = !DILocation(line: 196, column: 12, scope: !174)
!311 = !DILocation(line: 198, column: 3, scope: !174)
!312 = !DILocation(line: 200, column: 11, scope: !174)
!313 = !DILocation(line: 200, column: 19, scope: !174)
!314 = !DILocation(line: 200, column: 17, scope: !174)
!315 = !DILocation(line: 200, column: 9, scope: !174)
!316 = !DILocation(line: 203, column: 14, scope: !174)
!317 = !DILocation(line: 203, column: 27, scope: !174)
!318 = !DILocation(line: 203, column: 35, scope: !174)
!319 = !DILocation(line: 203, column: 44, scope: !174)
!320 = !DILocation(line: 203, column: 42, scope: !174)
!321 = !DILocation(line: 203, column: 23, scope: !174)
!322 = !DILocation(line: 203, column: 12, scope: !174)
!323 = !DILocation(line: 205, column: 3, scope: !174)
!324 = !DILocation(line: 207, column: 11, scope: !174)
!325 = !DILocation(line: 207, column: 19, scope: !174)
!326 = !DILocation(line: 207, column: 17, scope: !174)
!327 = !DILocation(line: 207, column: 9, scope: !174)
!328 = !DILocation(line: 210, column: 14, scope: !174)
!329 = !DILocation(line: 210, column: 27, scope: !174)
!330 = !DILocation(line: 210, column: 35, scope: !174)
!331 = !DILocation(line: 210, column: 44, scope: !174)
!332 = !DILocation(line: 210, column: 42, scope: !174)
!333 = !DILocation(line: 210, column: 23, scope: !174)
!334 = !DILocation(line: 210, column: 12, scope: !174)
!335 = !DILocation(line: 212, column: 3, scope: !174)
!336 = !DILocation(line: 214, column: 11, scope: !174)
!337 = !DILocation(line: 214, column: 19, scope: !174)
!338 = !DILocation(line: 214, column: 17, scope: !174)
!339 = !DILocation(line: 214, column: 9, scope: !174)
!340 = !DILocation(line: 217, column: 14, scope: !174)
!341 = !DILocation(line: 217, column: 27, scope: !174)
!342 = !DILocation(line: 217, column: 35, scope: !174)
!343 = !DILocation(line: 217, column: 44, scope: !174)
!344 = !DILocation(line: 217, column: 42, scope: !174)
!345 = !DILocation(line: 217, column: 23, scope: !174)
!346 = !DILocation(line: 217, column: 12, scope: !174)
!347 = !DILocation(line: 219, column: 3, scope: !174)
!348 = !DILocation(line: 221, column: 11, scope: !174)
!349 = !DILocation(line: 221, column: 19, scope: !174)
!350 = !DILocation(line: 221, column: 17, scope: !174)
!351 = !DILocation(line: 221, column: 9, scope: !174)
!352 = !DILocation(line: 224, column: 14, scope: !174)
!353 = !DILocation(line: 224, column: 27, scope: !174)
!354 = !DILocation(line: 224, column: 35, scope: !174)
!355 = !DILocation(line: 224, column: 44, scope: !174)
!356 = !DILocation(line: 224, column: 42, scope: !174)
!357 = !DILocation(line: 224, column: 23, scope: !174)
!358 = !DILocation(line: 224, column: 12, scope: !174)
!359 = !DILocation(line: 226, column: 3, scope: !174)
!360 = !DILocation(line: 228, column: 11, scope: !174)
!361 = !DILocation(line: 228, column: 19, scope: !174)
!362 = !DILocation(line: 228, column: 17, scope: !174)
!363 = !DILocation(line: 228, column: 9, scope: !174)
!364 = !DILocation(line: 231, column: 5, scope: !174)
!365 = !DILocation(line: 233, column: 3, scope: !174)
!366 = distinct !DISubprogram(name: "my_rand_r", scope: !3, file: !3, line: 239, type: !367, scopeLine: 240, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !371)
!367 = !DISubroutineType(types: !368)
!368 = !{!369, !370}
!369 = !DIBasicType(name: "unsigned int", size: 32, encoding: DW_ATE_unsigned)
!370 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !369, size: 64)
!371 = !{}
!372 = !DILocalVariable(name: "seedp", arg: 1, scope: !366, file: !3, line: 239, type: !370)
!373 = !DILocation(line: 239, column: 30, scope: !366)
!374 = !DILocalVariable(name: "x", scope: !366, file: !3, line: 242, type: !369)
!375 = !DILocation(line: 242, column: 12, scope: !366)
!376 = !DILocation(line: 242, column: 17, scope: !366)
!377 = !DILocation(line: 242, column: 16, scope: !366)
!378 = !DILocation(line: 242, column: 23, scope: !366)
!379 = !DILocation(line: 242, column: 33, scope: !366)
!380 = !DILocation(line: 243, column: 12, scope: !366)
!381 = !DILocation(line: 243, column: 4, scope: !366)
!382 = !DILocation(line: 243, column: 10, scope: !366)
!383 = !DILocation(line: 244, column: 11, scope: !366)
!384 = !DILocation(line: 244, column: 13, scope: !366)
!385 = !DILocation(line: 244, column: 20, scope: !366)
!386 = !DILocation(line: 244, column: 3, scope: !366)
!387 = distinct !DISubprogram(name: "d_pc1", scope: !3, file: !3, line: 248, type: !388, scopeLine: 249, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !371)
!388 = !DISubroutineType(types: !389)
!389 = !{null, !390}
!390 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !74, size: 64)
!391 = !DILocalVariable(name: "NumInputp", arg: 1, scope: !387, file: !3, line: 248, type: !390)
!392 = !DILocation(line: 248, column: 17, scope: !387)
!393 = !DILocalVariable(name: "NumInput", scope: !387, file: !3, line: 250, type: !74)
!394 = !DILocation(line: 250, column: 7, scope: !387)
!395 = !DILocation(line: 250, column: 19, scope: !387)
!396 = !DILocation(line: 250, column: 18, scope: !387)
!397 = !DILocalVariable(name: "Print", scope: !387, file: !3, line: 251, type: !74)
!398 = !DILocation(line: 251, column: 7, scope: !387)
!399 = !DILocalVariable(name: "random_seed", scope: !387, file: !3, line: 252, type: !369)
!400 = !DILocation(line: 252, column: 12, scope: !387)
!401 = !DILocation(line: 255, column: 6, scope: !387)
!402 = !DILocation(line: 257, column: 8, scope: !387)
!403 = !DILocation(line: 259, column: 5, scope: !387)
!404 = !DILocation(line: 267, column: 3, scope: !387)
!405 = !DILocation(line: 274, column: 11, scope: !387)
!406 = !DILocation(line: 277, column: 7, scope: !407)
!407 = distinct !DILexicalBlock(scope: !387, file: !3, line: 277, column: 7)
!408 = !DILocation(line: 277, column: 20, scope: !407)
!409 = !DILocation(line: 277, column: 7, scope: !387)
!410 = !DILocation(line: 280, column: 11, scope: !411)
!411 = distinct !DILexicalBlock(scope: !407, file: !3, line: 279, column: 3)
!412 = !DILocation(line: 281, column: 3, scope: !411)
!413 = !DILocation(line: 285, column: 13, scope: !414)
!414 = distinct !DILexicalBlock(scope: !407, file: !3, line: 284, column: 3)
!415 = !DILocation(line: 285, column: 11, scope: !414)
!416 = !DILocation(line: 288, column: 11, scope: !417)
!417 = distinct !DILexicalBlock(scope: !387, file: !3, line: 288, column: 3)
!418 = !DILocation(line: 288, column: 8, scope: !417)
!419 = !DILocation(line: 288, column: 16, scope: !420)
!420 = distinct !DILexicalBlock(scope: !417, file: !3, line: 288, column: 3)
!421 = !DILocation(line: 288, column: 21, scope: !420)
!422 = !DILocation(line: 288, column: 19, scope: !420)
!423 = !DILocation(line: 288, column: 3, scope: !417)
!424 = !DILocation(line: 292, column: 20, scope: !425)
!425 = distinct !DILexicalBlock(scope: !420, file: !3, line: 290, column: 3)
!426 = !DILocation(line: 292, column: 15, scope: !425)
!427 = !DILocation(line: 292, column: 9, scope: !425)
!428 = !DILocation(line: 292, column: 5, scope: !425)
!429 = !DILocation(line: 292, column: 13, scope: !425)
!430 = !DILocation(line: 294, column: 3, scope: !425)
!431 = !DILocation(line: 288, column: 30, scope: !420)
!432 = !DILocation(line: 288, column: 3, scope: !420)
!433 = distinct !{!433, !423, !434, !435}
!434 = !DILocation(line: 294, column: 3, scope: !417)
!435 = !{!"llvm.loop.mustprogress"}
!436 = !DILocation(line: 296, column: 9, scope: !387)
!437 = !DILocation(line: 297, column: 3, scope: !387)
!438 = !DILocation(line: 297, column: 10, scope: !387)
!439 = !DILocation(line: 298, column: 9, scope: !440)
!440 = distinct !DILexicalBlock(scope: !387, file: !3, line: 297, column: 22)
!441 = !DILocation(line: 298, column: 7, scope: !440)
!442 = !DILocation(line: 299, column: 5, scope: !440)
!443 = !DILocation(line: 301, column: 11, scope: !440)
!444 = !DILocation(line: 301, column: 17, scope: !440)
!445 = !DILocation(line: 301, column: 9, scope: !440)
!446 = !DILocation(line: 303, column: 11, scope: !440)
!447 = !DILocation(line: 303, column: 17, scope: !440)
!448 = !DILocation(line: 303, column: 9, scope: !440)
!449 = !DILocation(line: 312, column: 17, scope: !450)
!450 = distinct !DILexicalBlock(scope: !440, file: !3, line: 312, column: 5)
!451 = !DILocation(line: 312, column: 10, scope: !450)
!452 = !DILocation(line: 312, column: 22, scope: !453)
!453 = distinct !DILexicalBlock(scope: !450, file: !3, line: 312, column: 5)
!454 = !DILocation(line: 312, column: 29, scope: !453)
!455 = !DILocation(line: 312, column: 5, scope: !450)
!456 = !DILocation(line: 317, column: 25, scope: !457)
!457 = distinct !DILexicalBlock(scope: !453, file: !3, line: 313, column: 5)
!458 = !DILocation(line: 317, column: 21, scope: !457)
!459 = !DILocation(line: 317, column: 35, scope: !457)
!460 = !DILocation(line: 317, column: 33, scope: !457)
!461 = !DILocation(line: 317, column: 11, scope: !457)
!462 = !DILocation(line: 317, column: 7, scope: !457)
!463 = !DILocation(line: 317, column: 19, scope: !457)
!464 = !DILocation(line: 319, column: 5, scope: !457)
!465 = !DILocation(line: 312, column: 42, scope: !453)
!466 = !DILocation(line: 312, column: 5, scope: !453)
!467 = distinct !{!467, !455, !468, !435}
!468 = !DILocation(line: 319, column: 5, scope: !450)
!469 = !DILocation(line: 321, column: 9, scope: !440)
!470 = !DILocation(line: 321, column: 14, scope: !440)
!471 = !DILocation(line: 321, column: 20, scope: !440)
!472 = !DILocation(line: 321, column: 18, scope: !440)
!473 = !DILocation(line: 321, column: 11, scope: !440)
!474 = !DILocation(line: 321, column: 7, scope: !440)
!475 = !DILocation(line: 325, column: 10, scope: !440)
!476 = !DILocation(line: 325, column: 12, scope: !440)
!477 = !DILocation(line: 325, column: 9, scope: !440)
!478 = !DILocation(line: 325, column: 7, scope: !440)
!479 = !DILocation(line: 328, column: 10, scope: !440)
!480 = !DILocation(line: 328, column: 12, scope: !440)
!481 = !DILocation(line: 328, column: 9, scope: !440)
!482 = !DILocation(line: 328, column: 7, scope: !440)
!483 = distinct !{!483, !437, !484, !435}
!484 = !DILocation(line: 330, column: 3, scope: !387)
!485 = !DILocation(line: 333, column: 3, scope: !387)
!486 = distinct !DISubprogram(name: "main", scope: !3, file: !3, line: 336, type: !487, scopeLine: 336, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !371)
!487 = !DISubroutineType(types: !488)
!488 = !{!74, !74, !489}
!489 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !490, size: 64)
!490 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !491, size: 64)
!491 = !DIDerivedType(tag: DW_TAG_const_type, baseType: !13)
!492 = !DILocalVariable(name: "argc", arg: 1, scope: !486, file: !3, line: 336, type: !74)
!493 = !DILocation(line: 336, column: 14, scope: !486)
!494 = !DILocalVariable(name: "argv", arg: 2, scope: !486, file: !3, line: 336, type: !489)
!495 = !DILocation(line: 336, column: 33, scope: !486)
!496 = !DILocalVariable(name: "start_time", scope: !486, file: !3, line: 337, type: !497)
!497 = !DIDerivedType(tag: DW_TAG_typedef, name: "clock_t", file: !498, line: 7, baseType: !6)
!498 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h", directory: "", checksumkind: CSK_MD5, checksum: "1aade99fd778d1551600c7ca1410b9f1")
!499 = !DILocation(line: 337, column: 11, scope: !486)
!500 = !DILocation(line: 337, column: 24, scope: !486)
!501 = !DILocalVariable(name: "NumInput", scope: !486, file: !3, line: 338, type: !74)
!502 = !DILocation(line: 338, column: 7, scope: !486)
!503 = !DILocation(line: 339, column: 7, scope: !504)
!504 = distinct !DILexicalBlock(scope: !486, file: !3, line: 339, column: 7)
!505 = !DILocation(line: 339, column: 12, scope: !504)
!506 = !DILocation(line: 339, column: 7, scope: !486)
!507 = !DILocation(line: 339, column: 34, scope: !504)
!508 = !DILocation(line: 339, column: 29, scope: !504)
!509 = !DILocation(line: 339, column: 27, scope: !504)
!510 = !DILocation(line: 339, column: 18, scope: !504)
!511 = !DILocation(line: 340, column: 3, scope: !486)
!512 = !DILocation(line: 341, column: 3, scope: !486)
!513 = !DILocalVariable(name: "end_time", scope: !486, file: !3, line: 342, type: !497)
!514 = !DILocation(line: 342, column: 11, scope: !486)
!515 = !DILocation(line: 342, column: 22, scope: !486)
!516 = !DILocalVariable(name: "time_taken_ms", scope: !486, file: !3, line: 343, type: !5)
!517 = !DILocation(line: 343, column: 10, scope: !486)
!518 = !DILocation(line: 343, column: 36, scope: !486)
!519 = !DILocation(line: 343, column: 47, scope: !486)
!520 = !DILocation(line: 343, column: 45, scope: !486)
!521 = !DILocation(line: 343, column: 27, scope: !486)
!522 = !DILocation(line: 343, column: 60, scope: !486)
!523 = !DILocation(line: 343, column: 77, scope: !486)
!524 = !DILocation(line: 344, column: 33, scope: !486)
!525 = !DILocation(line: 344, column: 3, scope: !486)
!526 = !DILocation(line: 345, column: 3, scope: !486)
!527 = !DILocation(line: 346, column: 3, scope: !486)
