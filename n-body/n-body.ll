; ModuleID = 'n-body.c'
source_filename = "n-body.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%struct.planet = type { double, double, double, double, double, double, double }

@.str = private unnamed_addr constant [4 x i8] c"SGX\00", section "llvm.metadata"
@.str.1 = private unnamed_addr constant [9 x i8] c"n-body.c\00", section "llvm.metadata"
@bodies = dso_local global [5 x %struct.planet] [%struct.planet { double 0.000000e+00, double 0.000000e+00, double 0.000000e+00, double 0.000000e+00, double 0.000000e+00, double 0.000000e+00, double 0x4043BD3CC9BE45DE }, %struct.planet { double 0x40135DA0343CD92C, double 0xBFF290ABC01FDB7C, double 0xBFBA86F96C25EBF0, double 0x3FE367069B93CCBC, double 0x40067EF2F57D949B, double 0xBF99D2D79A5A0715, double 0x3FA34C95D9AB33D8 }, %struct.planet { double 0x4020AFCDC332CA67, double 0x40107FCB31DE01B0, double 0xBFD9D353E1EB467C, double 0xBFF02C21B8879442, double 0x3FFD35E9BF1F8F13, double 0x3F813C485F1123B4, double 0x3F871D490D07C637 }, %struct.planet { double 0x4029C9EACEA7D9CF, double 0xC02E38E8D626667E, double 0xBFCC9557BE257DA0, double 0x3FF1531CA9911BEF, double 0x3FEBCC7F3E54BBC5, double 0xBF862F6BFAF23E7C, double 0x3F5C3DD29CF41EB3 }, %struct.planet { double 0x402EC267A905572A, double 0xC039EB5833C8A220, double 0x3FC6F1F393ABE540, double 0x3FEF54B61659BC4A, double 0x3FE307C631C4FBA3, double 0xBFA1CB88587665F6, double 0x3F60A8F3531799AC }], align 16, !dbg !0
@.str.2 = private unnamed_addr constant [14 x i8] c"memsize(8, 8)\00", section "llvm.metadata"
@.str.3 = private unnamed_addr constant [6 x i8] c"TAFUN\00", section "llvm.metadata"
@.str.4 = private unnamed_addr constant [6 x i8] c"%.9f\0A\00", align 1, !dbg !10
@.str.5 = private unnamed_addr constant [19 x i8] c"use time: %.3f ms\0A\00", align 1, !dbg !16
@.str.6 = private unnamed_addr constant [48 x i8] c"**********************************************\0A\00", align 1, !dbg !21
@llvm.global.annotations = appending global [6 x { ptr, ptr, ptr, i32, ptr }] [{ ptr, ptr, ptr, i32, ptr } { ptr @advance, ptr @.str, ptr @.str.1, i32 25, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @energy, ptr @.str, ptr @.str.1, i32 55, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @offset_momentum, ptr @.str, ptr @.str.1, i32 77, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_n, ptr @.str, ptr @.str.1, i32 135, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_n, ptr @.str.2, ptr @.str.1, i32 135, ptr null }, { ptr, ptr, ptr, i32, ptr } { ptr @d_n, ptr @.str.3, ptr @.str.1, i32 135, ptr null }], section "llvm.metadata"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @advance(i32 noundef %0, ptr noundef %1, double noundef %2) #0 !dbg !46 {
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca double, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca ptr, align 8
  %10 = alloca ptr, align 8
  %11 = alloca double, align 8
  %12 = alloca double, align 8
  %13 = alloca double, align 8
  %14 = alloca double, align 8
  %15 = alloca double, align 8
  %16 = alloca ptr, align 8
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !52, metadata !DIExpression()), !dbg !53
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !54, metadata !DIExpression()), !dbg !55
  store double %2, ptr %6, align 8
  call void @llvm.dbg.declare(metadata ptr %6, metadata !56, metadata !DIExpression()), !dbg !57
  call void @llvm.dbg.declare(metadata ptr %7, metadata !58, metadata !DIExpression()), !dbg !59
  call void @llvm.dbg.declare(metadata ptr %8, metadata !60, metadata !DIExpression()), !dbg !61
  store i32 0, ptr %7, align 4, !dbg !62
  br label %17, !dbg !64

17:                                               ; preds = %142, %3
  %18 = load i32, ptr %7, align 4, !dbg !65
  %19 = load i32, ptr %4, align 4, !dbg !67
  %20 = icmp slt i32 %18, %19, !dbg !68
  br i1 %20, label %21, label %145, !dbg !69

21:                                               ; preds = %17
  call void @llvm.dbg.declare(metadata ptr %9, metadata !70, metadata !DIExpression()), !dbg !72
  %22 = load ptr, ptr %5, align 8, !dbg !73
  %23 = load i32, ptr %7, align 4, !dbg !74
  %24 = sext i32 %23 to i64, !dbg !73
  %25 = getelementptr inbounds %struct.planet, ptr %22, i64 %24, !dbg !73
  store ptr %25, ptr %9, align 8, !dbg !72
  %26 = load i32, ptr %7, align 4, !dbg !75
  %27 = add nsw i32 %26, 1, !dbg !77
  store i32 %27, ptr %8, align 4, !dbg !78
  br label %28, !dbg !79

28:                                               ; preds = %138, %21
  %29 = load i32, ptr %8, align 4, !dbg !80
  %30 = load i32, ptr %4, align 4, !dbg !82
  %31 = icmp slt i32 %29, %30, !dbg !83
  br i1 %31, label %32, label %141, !dbg !84

32:                                               ; preds = %28
  call void @llvm.dbg.declare(metadata ptr %10, metadata !85, metadata !DIExpression()), !dbg !87
  %33 = load ptr, ptr %5, align 8, !dbg !88
  %34 = load i32, ptr %8, align 4, !dbg !89
  %35 = sext i32 %34 to i64, !dbg !88
  %36 = getelementptr inbounds %struct.planet, ptr %33, i64 %35, !dbg !88
  store ptr %36, ptr %10, align 8, !dbg !87
  call void @llvm.dbg.declare(metadata ptr %11, metadata !90, metadata !DIExpression()), !dbg !91
  %37 = load ptr, ptr %9, align 8, !dbg !92
  %38 = getelementptr inbounds %struct.planet, ptr %37, i32 0, i32 0, !dbg !93
  %39 = load double, ptr %38, align 8, !dbg !93
  %40 = load ptr, ptr %10, align 8, !dbg !94
  %41 = getelementptr inbounds %struct.planet, ptr %40, i32 0, i32 0, !dbg !95
  %42 = load double, ptr %41, align 8, !dbg !95
  %43 = fsub double %39, %42, !dbg !96
  store double %43, ptr %11, align 8, !dbg !91
  call void @llvm.dbg.declare(metadata ptr %12, metadata !97, metadata !DIExpression()), !dbg !98
  %44 = load ptr, ptr %9, align 8, !dbg !99
  %45 = getelementptr inbounds %struct.planet, ptr %44, i32 0, i32 1, !dbg !100
  %46 = load double, ptr %45, align 8, !dbg !100
  %47 = load ptr, ptr %10, align 8, !dbg !101
  %48 = getelementptr inbounds %struct.planet, ptr %47, i32 0, i32 1, !dbg !102
  %49 = load double, ptr %48, align 8, !dbg !102
  %50 = fsub double %46, %49, !dbg !103
  store double %50, ptr %12, align 8, !dbg !98
  call void @llvm.dbg.declare(metadata ptr %13, metadata !104, metadata !DIExpression()), !dbg !105
  %51 = load ptr, ptr %9, align 8, !dbg !106
  %52 = getelementptr inbounds %struct.planet, ptr %51, i32 0, i32 2, !dbg !107
  %53 = load double, ptr %52, align 8, !dbg !107
  %54 = load ptr, ptr %10, align 8, !dbg !108
  %55 = getelementptr inbounds %struct.planet, ptr %54, i32 0, i32 2, !dbg !109
  %56 = load double, ptr %55, align 8, !dbg !109
  %57 = fsub double %53, %56, !dbg !110
  store double %57, ptr %13, align 8, !dbg !105
  call void @llvm.dbg.declare(metadata ptr %14, metadata !111, metadata !DIExpression()), !dbg !112
  %58 = load double, ptr %11, align 8, !dbg !113
  %59 = load double, ptr %11, align 8, !dbg !114
  %60 = load double, ptr %12, align 8, !dbg !115
  %61 = load double, ptr %12, align 8, !dbg !116
  %62 = fmul double %60, %61, !dbg !117
  %63 = call double @llvm.fmuladd.f64(double %58, double %59, double %62), !dbg !118
  %64 = load double, ptr %13, align 8, !dbg !119
  %65 = load double, ptr %13, align 8, !dbg !120
  %66 = call double @llvm.fmuladd.f64(double %64, double %65, double %63), !dbg !121
  %67 = call double @sqrt(double noundef %66) #4, !dbg !122
  store double %67, ptr %14, align 8, !dbg !112
  call void @llvm.dbg.declare(metadata ptr %15, metadata !123, metadata !DIExpression()), !dbg !124
  %68 = load double, ptr %6, align 8, !dbg !125
  %69 = load double, ptr %14, align 8, !dbg !126
  %70 = load double, ptr %14, align 8, !dbg !127
  %71 = fmul double %69, %70, !dbg !128
  %72 = load double, ptr %14, align 8, !dbg !129
  %73 = fmul double %71, %72, !dbg !130
  %74 = fdiv double %68, %73, !dbg !131
  store double %74, ptr %15, align 8, !dbg !124
  %75 = load double, ptr %11, align 8, !dbg !132
  %76 = load ptr, ptr %10, align 8, !dbg !133
  %77 = getelementptr inbounds %struct.planet, ptr %76, i32 0, i32 6, !dbg !134
  %78 = load double, ptr %77, align 8, !dbg !134
  %79 = fmul double %75, %78, !dbg !135
  %80 = load double, ptr %15, align 8, !dbg !136
  %81 = load ptr, ptr %9, align 8, !dbg !137
  %82 = getelementptr inbounds %struct.planet, ptr %81, i32 0, i32 3, !dbg !138
  %83 = load double, ptr %82, align 8, !dbg !139
  %84 = fneg double %79, !dbg !139
  %85 = call double @llvm.fmuladd.f64(double %84, double %80, double %83), !dbg !139
  store double %85, ptr %82, align 8, !dbg !139
  %86 = load double, ptr %12, align 8, !dbg !140
  %87 = load ptr, ptr %10, align 8, !dbg !141
  %88 = getelementptr inbounds %struct.planet, ptr %87, i32 0, i32 6, !dbg !142
  %89 = load double, ptr %88, align 8, !dbg !142
  %90 = fmul double %86, %89, !dbg !143
  %91 = load double, ptr %15, align 8, !dbg !144
  %92 = load ptr, ptr %9, align 8, !dbg !145
  %93 = getelementptr inbounds %struct.planet, ptr %92, i32 0, i32 4, !dbg !146
  %94 = load double, ptr %93, align 8, !dbg !147
  %95 = fneg double %90, !dbg !147
  %96 = call double @llvm.fmuladd.f64(double %95, double %91, double %94), !dbg !147
  store double %96, ptr %93, align 8, !dbg !147
  %97 = load double, ptr %13, align 8, !dbg !148
  %98 = load ptr, ptr %10, align 8, !dbg !149
  %99 = getelementptr inbounds %struct.planet, ptr %98, i32 0, i32 6, !dbg !150
  %100 = load double, ptr %99, align 8, !dbg !150
  %101 = fmul double %97, %100, !dbg !151
  %102 = load double, ptr %15, align 8, !dbg !152
  %103 = load ptr, ptr %9, align 8, !dbg !153
  %104 = getelementptr inbounds %struct.planet, ptr %103, i32 0, i32 5, !dbg !154
  %105 = load double, ptr %104, align 8, !dbg !155
  %106 = fneg double %101, !dbg !155
  %107 = call double @llvm.fmuladd.f64(double %106, double %102, double %105), !dbg !155
  store double %107, ptr %104, align 8, !dbg !155
  %108 = load double, ptr %11, align 8, !dbg !156
  %109 = load ptr, ptr %9, align 8, !dbg !157
  %110 = getelementptr inbounds %struct.planet, ptr %109, i32 0, i32 6, !dbg !158
  %111 = load double, ptr %110, align 8, !dbg !158
  %112 = fmul double %108, %111, !dbg !159
  %113 = load double, ptr %15, align 8, !dbg !160
  %114 = load ptr, ptr %10, align 8, !dbg !161
  %115 = getelementptr inbounds %struct.planet, ptr %114, i32 0, i32 3, !dbg !162
  %116 = load double, ptr %115, align 8, !dbg !163
  %117 = call double @llvm.fmuladd.f64(double %112, double %113, double %116), !dbg !163
  store double %117, ptr %115, align 8, !dbg !163
  %118 = load double, ptr %12, align 8, !dbg !164
  %119 = load ptr, ptr %9, align 8, !dbg !165
  %120 = getelementptr inbounds %struct.planet, ptr %119, i32 0, i32 6, !dbg !166
  %121 = load double, ptr %120, align 8, !dbg !166
  %122 = fmul double %118, %121, !dbg !167
  %123 = load double, ptr %15, align 8, !dbg !168
  %124 = load ptr, ptr %10, align 8, !dbg !169
  %125 = getelementptr inbounds %struct.planet, ptr %124, i32 0, i32 4, !dbg !170
  %126 = load double, ptr %125, align 8, !dbg !171
  %127 = call double @llvm.fmuladd.f64(double %122, double %123, double %126), !dbg !171
  store double %127, ptr %125, align 8, !dbg !171
  %128 = load double, ptr %13, align 8, !dbg !172
  %129 = load ptr, ptr %9, align 8, !dbg !173
  %130 = getelementptr inbounds %struct.planet, ptr %129, i32 0, i32 6, !dbg !174
  %131 = load double, ptr %130, align 8, !dbg !174
  %132 = fmul double %128, %131, !dbg !175
  %133 = load double, ptr %15, align 8, !dbg !176
  %134 = load ptr, ptr %10, align 8, !dbg !177
  %135 = getelementptr inbounds %struct.planet, ptr %134, i32 0, i32 5, !dbg !178
  %136 = load double, ptr %135, align 8, !dbg !179
  %137 = call double @llvm.fmuladd.f64(double %132, double %133, double %136), !dbg !179
  store double %137, ptr %135, align 8, !dbg !179
  br label %138, !dbg !180

138:                                              ; preds = %32
  %139 = load i32, ptr %8, align 4, !dbg !181
  %140 = add nsw i32 %139, 1, !dbg !181
  store i32 %140, ptr %8, align 4, !dbg !181
  br label %28, !dbg !182, !llvm.loop !183

141:                                              ; preds = %28
  br label %142, !dbg !186

142:                                              ; preds = %141
  %143 = load i32, ptr %7, align 4, !dbg !187
  %144 = add nsw i32 %143, 1, !dbg !187
  store i32 %144, ptr %7, align 4, !dbg !187
  br label %17, !dbg !188, !llvm.loop !189

145:                                              ; preds = %17
  store i32 0, ptr %7, align 4, !dbg !191
  br label %146, !dbg !193

146:                                              ; preds = %179, %145
  %147 = load i32, ptr %7, align 4, !dbg !194
  %148 = load i32, ptr %4, align 4, !dbg !196
  %149 = icmp slt i32 %147, %148, !dbg !197
  br i1 %149, label %150, label %182, !dbg !198

150:                                              ; preds = %146
  call void @llvm.dbg.declare(metadata ptr %16, metadata !199, metadata !DIExpression()), !dbg !201
  %151 = load ptr, ptr %5, align 8, !dbg !202
  %152 = load i32, ptr %7, align 4, !dbg !203
  %153 = sext i32 %152 to i64, !dbg !202
  %154 = getelementptr inbounds %struct.planet, ptr %151, i64 %153, !dbg !202
  store ptr %154, ptr %16, align 8, !dbg !201
  %155 = load double, ptr %6, align 8, !dbg !204
  %156 = load ptr, ptr %16, align 8, !dbg !205
  %157 = getelementptr inbounds %struct.planet, ptr %156, i32 0, i32 3, !dbg !206
  %158 = load double, ptr %157, align 8, !dbg !206
  %159 = load ptr, ptr %16, align 8, !dbg !207
  %160 = getelementptr inbounds %struct.planet, ptr %159, i32 0, i32 0, !dbg !208
  %161 = load double, ptr %160, align 8, !dbg !209
  %162 = call double @llvm.fmuladd.f64(double %155, double %158, double %161), !dbg !209
  store double %162, ptr %160, align 8, !dbg !209
  %163 = load double, ptr %6, align 8, !dbg !210
  %164 = load ptr, ptr %16, align 8, !dbg !211
  %165 = getelementptr inbounds %struct.planet, ptr %164, i32 0, i32 4, !dbg !212
  %166 = load double, ptr %165, align 8, !dbg !212
  %167 = load ptr, ptr %16, align 8, !dbg !213
  %168 = getelementptr inbounds %struct.planet, ptr %167, i32 0, i32 1, !dbg !214
  %169 = load double, ptr %168, align 8, !dbg !215
  %170 = call double @llvm.fmuladd.f64(double %163, double %166, double %169), !dbg !215
  store double %170, ptr %168, align 8, !dbg !215
  %171 = load double, ptr %6, align 8, !dbg !216
  %172 = load ptr, ptr %16, align 8, !dbg !217
  %173 = getelementptr inbounds %struct.planet, ptr %172, i32 0, i32 5, !dbg !218
  %174 = load double, ptr %173, align 8, !dbg !218
  %175 = load ptr, ptr %16, align 8, !dbg !219
  %176 = getelementptr inbounds %struct.planet, ptr %175, i32 0, i32 2, !dbg !220
  %177 = load double, ptr %176, align 8, !dbg !221
  %178 = call double @llvm.fmuladd.f64(double %171, double %174, double %177), !dbg !221
  store double %178, ptr %176, align 8, !dbg !221
  br label %179, !dbg !222

179:                                              ; preds = %150
  %180 = load i32, ptr %7, align 4, !dbg !223
  %181 = add nsw i32 %180, 1, !dbg !223
  store i32 %181, ptr %7, align 4, !dbg !223
  br label %146, !dbg !224, !llvm.loop !225

182:                                              ; preds = %146
  ret void, !dbg !227
}

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: nounwind
declare double @sqrt(double noundef) #2

; Function Attrs: nocallback nofree nosync nounwind speculatable willreturn memory(none)
declare double @llvm.fmuladd.f64(double, double, double) #1

; Function Attrs: noinline nounwind optnone uwtable
define dso_local double @energy(i32 noundef %0, ptr noundef %1) #0 !dbg !228 {
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  %5 = alloca double, align 8
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca ptr, align 8
  %9 = alloca ptr, align 8
  %10 = alloca double, align 8
  %11 = alloca double, align 8
  %12 = alloca double, align 8
  %13 = alloca double, align 8
  store i32 %0, ptr %3, align 4
  call void @llvm.dbg.declare(metadata ptr %3, metadata !231, metadata !DIExpression()), !dbg !232
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !233, metadata !DIExpression()), !dbg !234
  call void @llvm.dbg.declare(metadata ptr %5, metadata !235, metadata !DIExpression()), !dbg !236
  call void @llvm.dbg.declare(metadata ptr %6, metadata !237, metadata !DIExpression()), !dbg !238
  call void @llvm.dbg.declare(metadata ptr %7, metadata !239, metadata !DIExpression()), !dbg !240
  store double 0.000000e+00, ptr %5, align 8, !dbg !241
  store i32 0, ptr %6, align 4, !dbg !242
  br label %14, !dbg !244

14:                                               ; preds = %107, %2
  %15 = load i32, ptr %6, align 4, !dbg !245
  %16 = load i32, ptr %3, align 4, !dbg !247
  %17 = icmp slt i32 %15, %16, !dbg !248
  br i1 %17, label %18, label %110, !dbg !249

18:                                               ; preds = %14
  call void @llvm.dbg.declare(metadata ptr %8, metadata !250, metadata !DIExpression()), !dbg !252
  %19 = load ptr, ptr %4, align 8, !dbg !253
  %20 = load i32, ptr %6, align 4, !dbg !254
  %21 = sext i32 %20 to i64, !dbg !253
  %22 = getelementptr inbounds %struct.planet, ptr %19, i64 %21, !dbg !253
  store ptr %22, ptr %8, align 8, !dbg !252
  %23 = load ptr, ptr %8, align 8, !dbg !255
  %24 = getelementptr inbounds %struct.planet, ptr %23, i32 0, i32 6, !dbg !256
  %25 = load double, ptr %24, align 8, !dbg !256
  %26 = fmul double 5.000000e-01, %25, !dbg !257
  %27 = load ptr, ptr %8, align 8, !dbg !258
  %28 = getelementptr inbounds %struct.planet, ptr %27, i32 0, i32 3, !dbg !259
  %29 = load double, ptr %28, align 8, !dbg !259
  %30 = load ptr, ptr %8, align 8, !dbg !260
  %31 = getelementptr inbounds %struct.planet, ptr %30, i32 0, i32 3, !dbg !261
  %32 = load double, ptr %31, align 8, !dbg !261
  %33 = load ptr, ptr %8, align 8, !dbg !262
  %34 = getelementptr inbounds %struct.planet, ptr %33, i32 0, i32 4, !dbg !263
  %35 = load double, ptr %34, align 8, !dbg !263
  %36 = load ptr, ptr %8, align 8, !dbg !264
  %37 = getelementptr inbounds %struct.planet, ptr %36, i32 0, i32 4, !dbg !265
  %38 = load double, ptr %37, align 8, !dbg !265
  %39 = fmul double %35, %38, !dbg !266
  %40 = call double @llvm.fmuladd.f64(double %29, double %32, double %39), !dbg !267
  %41 = load ptr, ptr %8, align 8, !dbg !268
  %42 = getelementptr inbounds %struct.planet, ptr %41, i32 0, i32 5, !dbg !269
  %43 = load double, ptr %42, align 8, !dbg !269
  %44 = load ptr, ptr %8, align 8, !dbg !270
  %45 = getelementptr inbounds %struct.planet, ptr %44, i32 0, i32 5, !dbg !271
  %46 = load double, ptr %45, align 8, !dbg !271
  %47 = call double @llvm.fmuladd.f64(double %43, double %46, double %40), !dbg !272
  %48 = load double, ptr %5, align 8, !dbg !273
  %49 = call double @llvm.fmuladd.f64(double %26, double %47, double %48), !dbg !273
  store double %49, ptr %5, align 8, !dbg !273
  %50 = load i32, ptr %6, align 4, !dbg !274
  %51 = add nsw i32 %50, 1, !dbg !276
  store i32 %51, ptr %7, align 4, !dbg !277
  br label %52, !dbg !278

52:                                               ; preds = %103, %18
  %53 = load i32, ptr %7, align 4, !dbg !279
  %54 = load i32, ptr %3, align 4, !dbg !281
  %55 = icmp slt i32 %53, %54, !dbg !282
  br i1 %55, label %56, label %106, !dbg !283

56:                                               ; preds = %52
  call void @llvm.dbg.declare(metadata ptr %9, metadata !284, metadata !DIExpression()), !dbg !286
  %57 = load ptr, ptr %4, align 8, !dbg !287
  %58 = load i32, ptr %7, align 4, !dbg !288
  %59 = sext i32 %58 to i64, !dbg !287
  %60 = getelementptr inbounds %struct.planet, ptr %57, i64 %59, !dbg !287
  store ptr %60, ptr %9, align 8, !dbg !286
  call void @llvm.dbg.declare(metadata ptr %10, metadata !289, metadata !DIExpression()), !dbg !290
  %61 = load ptr, ptr %8, align 8, !dbg !291
  %62 = getelementptr inbounds %struct.planet, ptr %61, i32 0, i32 0, !dbg !292
  %63 = load double, ptr %62, align 8, !dbg !292
  %64 = load ptr, ptr %9, align 8, !dbg !293
  %65 = getelementptr inbounds %struct.planet, ptr %64, i32 0, i32 0, !dbg !294
  %66 = load double, ptr %65, align 8, !dbg !294
  %67 = fsub double %63, %66, !dbg !295
  store double %67, ptr %10, align 8, !dbg !290
  call void @llvm.dbg.declare(metadata ptr %11, metadata !296, metadata !DIExpression()), !dbg !297
  %68 = load ptr, ptr %8, align 8, !dbg !298
  %69 = getelementptr inbounds %struct.planet, ptr %68, i32 0, i32 1, !dbg !299
  %70 = load double, ptr %69, align 8, !dbg !299
  %71 = load ptr, ptr %9, align 8, !dbg !300
  %72 = getelementptr inbounds %struct.planet, ptr %71, i32 0, i32 1, !dbg !301
  %73 = load double, ptr %72, align 8, !dbg !301
  %74 = fsub double %70, %73, !dbg !302
  store double %74, ptr %11, align 8, !dbg !297
  call void @llvm.dbg.declare(metadata ptr %12, metadata !303, metadata !DIExpression()), !dbg !304
  %75 = load ptr, ptr %8, align 8, !dbg !305
  %76 = getelementptr inbounds %struct.planet, ptr %75, i32 0, i32 2, !dbg !306
  %77 = load double, ptr %76, align 8, !dbg !306
  %78 = load ptr, ptr %9, align 8, !dbg !307
  %79 = getelementptr inbounds %struct.planet, ptr %78, i32 0, i32 2, !dbg !308
  %80 = load double, ptr %79, align 8, !dbg !308
  %81 = fsub double %77, %80, !dbg !309
  store double %81, ptr %12, align 8, !dbg !304
  call void @llvm.dbg.declare(metadata ptr %13, metadata !310, metadata !DIExpression()), !dbg !311
  %82 = load double, ptr %10, align 8, !dbg !312
  %83 = load double, ptr %10, align 8, !dbg !313
  %84 = load double, ptr %11, align 8, !dbg !314
  %85 = load double, ptr %11, align 8, !dbg !315
  %86 = fmul double %84, %85, !dbg !316
  %87 = call double @llvm.fmuladd.f64(double %82, double %83, double %86), !dbg !317
  %88 = load double, ptr %12, align 8, !dbg !318
  %89 = load double, ptr %12, align 8, !dbg !319
  %90 = call double @llvm.fmuladd.f64(double %88, double %89, double %87), !dbg !320
  %91 = call double @sqrt(double noundef %90) #4, !dbg !321
  store double %91, ptr %13, align 8, !dbg !311
  %92 = load ptr, ptr %8, align 8, !dbg !322
  %93 = getelementptr inbounds %struct.planet, ptr %92, i32 0, i32 6, !dbg !323
  %94 = load double, ptr %93, align 8, !dbg !323
  %95 = load ptr, ptr %9, align 8, !dbg !324
  %96 = getelementptr inbounds %struct.planet, ptr %95, i32 0, i32 6, !dbg !325
  %97 = load double, ptr %96, align 8, !dbg !325
  %98 = fmul double %94, %97, !dbg !326
  %99 = load double, ptr %13, align 8, !dbg !327
  %100 = fdiv double %98, %99, !dbg !328
  %101 = load double, ptr %5, align 8, !dbg !329
  %102 = fsub double %101, %100, !dbg !329
  store double %102, ptr %5, align 8, !dbg !329
  br label %103, !dbg !330

103:                                              ; preds = %56
  %104 = load i32, ptr %7, align 4, !dbg !331
  %105 = add nsw i32 %104, 1, !dbg !331
  store i32 %105, ptr %7, align 4, !dbg !331
  br label %52, !dbg !332, !llvm.loop !333

106:                                              ; preds = %52
  br label %107, !dbg !335

107:                                              ; preds = %106
  %108 = load i32, ptr %6, align 4, !dbg !336
  %109 = add nsw i32 %108, 1, !dbg !336
  store i32 %109, ptr %6, align 4, !dbg !336
  br label %14, !dbg !337, !llvm.loop !338

110:                                              ; preds = %14
  %111 = load double, ptr %5, align 8, !dbg !340
  ret double %111, !dbg !341
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @offset_momentum(i32 noundef %0, ptr noundef %1) #0 !dbg !342 {
  %3 = alloca i32, align 4
  %4 = alloca ptr, align 8
  %5 = alloca double, align 8
  %6 = alloca double, align 8
  %7 = alloca double, align 8
  %8 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  call void @llvm.dbg.declare(metadata ptr %3, metadata !345, metadata !DIExpression()), !dbg !346
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !347, metadata !DIExpression()), !dbg !348
  call void @llvm.dbg.declare(metadata ptr %5, metadata !349, metadata !DIExpression()), !dbg !350
  store double 0.000000e+00, ptr %5, align 8, !dbg !350
  call void @llvm.dbg.declare(metadata ptr %6, metadata !351, metadata !DIExpression()), !dbg !352
  store double 0.000000e+00, ptr %6, align 8, !dbg !352
  call void @llvm.dbg.declare(metadata ptr %7, metadata !353, metadata !DIExpression()), !dbg !354
  store double 0.000000e+00, ptr %7, align 8, !dbg !354
  call void @llvm.dbg.declare(metadata ptr %8, metadata !355, metadata !DIExpression()), !dbg !356
  store i32 0, ptr %8, align 4, !dbg !357
  br label %9, !dbg !359

9:                                                ; preds = %56, %2
  %10 = load i32, ptr %8, align 4, !dbg !360
  %11 = load i32, ptr %3, align 4, !dbg !362
  %12 = icmp slt i32 %10, %11, !dbg !363
  br i1 %12, label %13, label %59, !dbg !364

13:                                               ; preds = %9
  %14 = load ptr, ptr %4, align 8, !dbg !365
  %15 = load i32, ptr %8, align 4, !dbg !367
  %16 = sext i32 %15 to i64, !dbg !365
  %17 = getelementptr inbounds %struct.planet, ptr %14, i64 %16, !dbg !365
  %18 = getelementptr inbounds %struct.planet, ptr %17, i32 0, i32 3, !dbg !368
  %19 = load double, ptr %18, align 8, !dbg !368
  %20 = load ptr, ptr %4, align 8, !dbg !369
  %21 = load i32, ptr %8, align 4, !dbg !370
  %22 = sext i32 %21 to i64, !dbg !369
  %23 = getelementptr inbounds %struct.planet, ptr %20, i64 %22, !dbg !369
  %24 = getelementptr inbounds %struct.planet, ptr %23, i32 0, i32 6, !dbg !371
  %25 = load double, ptr %24, align 8, !dbg !371
  %26 = load double, ptr %5, align 8, !dbg !372
  %27 = call double @llvm.fmuladd.f64(double %19, double %25, double %26), !dbg !372
  store double %27, ptr %5, align 8, !dbg !372
  %28 = load ptr, ptr %4, align 8, !dbg !373
  %29 = load i32, ptr %8, align 4, !dbg !374
  %30 = sext i32 %29 to i64, !dbg !373
  %31 = getelementptr inbounds %struct.planet, ptr %28, i64 %30, !dbg !373
  %32 = getelementptr inbounds %struct.planet, ptr %31, i32 0, i32 4, !dbg !375
  %33 = load double, ptr %32, align 8, !dbg !375
  %34 = load ptr, ptr %4, align 8, !dbg !376
  %35 = load i32, ptr %8, align 4, !dbg !377
  %36 = sext i32 %35 to i64, !dbg !376
  %37 = getelementptr inbounds %struct.planet, ptr %34, i64 %36, !dbg !376
  %38 = getelementptr inbounds %struct.planet, ptr %37, i32 0, i32 6, !dbg !378
  %39 = load double, ptr %38, align 8, !dbg !378
  %40 = load double, ptr %6, align 8, !dbg !379
  %41 = call double @llvm.fmuladd.f64(double %33, double %39, double %40), !dbg !379
  store double %41, ptr %6, align 8, !dbg !379
  %42 = load ptr, ptr %4, align 8, !dbg !380
  %43 = load i32, ptr %8, align 4, !dbg !381
  %44 = sext i32 %43 to i64, !dbg !380
  %45 = getelementptr inbounds %struct.planet, ptr %42, i64 %44, !dbg !380
  %46 = getelementptr inbounds %struct.planet, ptr %45, i32 0, i32 5, !dbg !382
  %47 = load double, ptr %46, align 8, !dbg !382
  %48 = load ptr, ptr %4, align 8, !dbg !383
  %49 = load i32, ptr %8, align 4, !dbg !384
  %50 = sext i32 %49 to i64, !dbg !383
  %51 = getelementptr inbounds %struct.planet, ptr %48, i64 %50, !dbg !383
  %52 = getelementptr inbounds %struct.planet, ptr %51, i32 0, i32 6, !dbg !385
  %53 = load double, ptr %52, align 8, !dbg !385
  %54 = load double, ptr %7, align 8, !dbg !386
  %55 = call double @llvm.fmuladd.f64(double %47, double %53, double %54), !dbg !386
  store double %55, ptr %7, align 8, !dbg !386
  br label %56, !dbg !387

56:                                               ; preds = %13
  %57 = load i32, ptr %8, align 4, !dbg !388
  %58 = add nsw i32 %57, 1, !dbg !388
  store i32 %58, ptr %8, align 4, !dbg !388
  br label %9, !dbg !389, !llvm.loop !390

59:                                               ; preds = %9
  %60 = load double, ptr %5, align 8, !dbg !392
  %61 = fneg double %60, !dbg !393
  %62 = fdiv double %61, 0x4043BD3CC9BE45DE, !dbg !394
  %63 = load ptr, ptr %4, align 8, !dbg !395
  %64 = getelementptr inbounds %struct.planet, ptr %63, i64 0, !dbg !395
  %65 = getelementptr inbounds %struct.planet, ptr %64, i32 0, i32 3, !dbg !396
  store double %62, ptr %65, align 8, !dbg !397
  %66 = load double, ptr %6, align 8, !dbg !398
  %67 = fneg double %66, !dbg !399
  %68 = fdiv double %67, 0x4043BD3CC9BE45DE, !dbg !400
  %69 = load ptr, ptr %4, align 8, !dbg !401
  %70 = getelementptr inbounds %struct.planet, ptr %69, i64 0, !dbg !401
  %71 = getelementptr inbounds %struct.planet, ptr %70, i32 0, i32 4, !dbg !402
  store double %68, ptr %71, align 8, !dbg !403
  %72 = load double, ptr %7, align 8, !dbg !404
  %73 = fneg double %72, !dbg !405
  %74 = fdiv double %73, 0x4043BD3CC9BE45DE, !dbg !406
  %75 = load ptr, ptr %4, align 8, !dbg !407
  %76 = getelementptr inbounds %struct.planet, ptr %75, i64 0, !dbg !407
  %77 = getelementptr inbounds %struct.planet, ptr %76, i32 0, i32 5, !dbg !408
  store double %74, ptr %77, align 8, !dbg !409
  ret void, !dbg !410
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local void @d_n(ptr noundef %0, ptr noundef %1) #0 !dbg !411 {
  %3 = alloca ptr, align 8
  %4 = alloca ptr, align 8
  %5 = alloca i32, align 4
  %6 = alloca i32, align 4
  store ptr %0, ptr %3, align 8
  call void @llvm.dbg.declare(metadata ptr %3, metadata !415, metadata !DIExpression()), !dbg !416
  store ptr %1, ptr %4, align 8
  call void @llvm.dbg.declare(metadata ptr %4, metadata !417, metadata !DIExpression()), !dbg !418
  call void @llvm.dbg.declare(metadata ptr %5, metadata !419, metadata !DIExpression()), !dbg !420
  store i32 5000000, ptr %5, align 4, !dbg !420
  call void @llvm.dbg.declare(metadata ptr %6, metadata !421, metadata !DIExpression()), !dbg !422
  call void @offset_momentum(i32 noundef 5, ptr noundef @bodies), !dbg !423
  %7 = call double @energy(i32 noundef 5, ptr noundef @bodies), !dbg !424
  %8 = load ptr, ptr %3, align 8, !dbg !425
  store double %7, ptr %8, align 8, !dbg !426
  store i32 1, ptr %6, align 4, !dbg !427
  br label %9, !dbg !429

9:                                                ; preds = %14, %2
  %10 = load i32, ptr %6, align 4, !dbg !430
  %11 = load i32, ptr %5, align 4, !dbg !432
  %12 = icmp sle i32 %10, %11, !dbg !433
  br i1 %12, label %13, label %17, !dbg !434

13:                                               ; preds = %9
  call void @advance(i32 noundef 5, ptr noundef @bodies, double noundef 1.000000e-02), !dbg !435
  br label %14, !dbg !435

14:                                               ; preds = %13
  %15 = load i32, ptr %6, align 4, !dbg !436
  %16 = add nsw i32 %15, 1, !dbg !436
  store i32 %16, ptr %6, align 4, !dbg !436
  br label %9, !dbg !437, !llvm.loop !438

17:                                               ; preds = %9
  %18 = call double @energy(i32 noundef 5, ptr noundef @bodies), !dbg !440
  %19 = load ptr, ptr %4, align 8, !dbg !441
  store double %18, ptr %19, align 8, !dbg !442
  ret void, !dbg !443
}

; Function Attrs: noinline nounwind optnone uwtable
define dso_local i32 @main(i32 noundef %0, ptr noundef %1) #0 !dbg !444 {
  %3 = alloca i32, align 4
  %4 = alloca i32, align 4
  %5 = alloca ptr, align 8
  %6 = alloca i64, align 8
  %7 = alloca double, align 8
  %8 = alloca double, align 8
  %9 = alloca i64, align 8
  %10 = alloca double, align 8
  store i32 0, ptr %3, align 4
  store i32 %0, ptr %4, align 4
  call void @llvm.dbg.declare(metadata ptr %4, metadata !449, metadata !DIExpression()), !dbg !450
  store ptr %1, ptr %5, align 8
  call void @llvm.dbg.declare(metadata ptr %5, metadata !451, metadata !DIExpression()), !dbg !452
  call void @llvm.dbg.declare(metadata ptr %6, metadata !453, metadata !DIExpression()), !dbg !456
  %11 = call i64 @clock() #4, !dbg !457
  store i64 %11, ptr %6, align 8, !dbg !456
  call void @llvm.dbg.declare(metadata ptr %7, metadata !458, metadata !DIExpression()), !dbg !459
  call void @llvm.dbg.declare(metadata ptr %8, metadata !460, metadata !DIExpression()), !dbg !461
  call void @d_n(ptr noundef %7, ptr noundef %8), !dbg !462
  %12 = load double, ptr %7, align 8, !dbg !463
  %13 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, double noundef %12), !dbg !464
  %14 = load double, ptr %8, align 8, !dbg !465
  %15 = call i32 (ptr, ...) @printf(ptr noundef @.str.4, double noundef %14), !dbg !466
  call void @llvm.dbg.declare(metadata ptr %9, metadata !467, metadata !DIExpression()), !dbg !468
  %16 = call i64 @clock() #4, !dbg !469
  store i64 %16, ptr %9, align 8, !dbg !468
  call void @llvm.dbg.declare(metadata ptr %10, metadata !470, metadata !DIExpression()), !dbg !471
  %17 = load i64, ptr %9, align 8, !dbg !472
  %18 = load i64, ptr %6, align 8, !dbg !473
  %19 = sub nsw i64 %17, %18, !dbg !474
  %20 = sitofp i64 %19 to double, !dbg !475
  %21 = fdiv double %20, 1.000000e+06, !dbg !476
  %22 = fmul double %21, 1.000000e+03, !dbg !477
  store double %22, ptr %10, align 8, !dbg !471
  %23 = load double, ptr %10, align 8, !dbg !478
  %24 = call i32 (ptr, ...) @printf(ptr noundef @.str.5, double noundef %23), !dbg !479
  %25 = call i32 (ptr, ...) @printf(ptr noundef @.str.6), !dbg !480
  ret i32 0, !dbg !481
}

; Function Attrs: nounwind
declare i64 @clock() #2

declare i32 @printf(ptr noundef, ...) #3

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind speculatable willreturn memory(none) }
attributes #2 = { nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cmov,+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { nounwind }

!llvm.dbg.cu = !{!2}
!llvm.module.flags = !{!38, !39, !40, !41, !42, !43, !44}
!llvm.ident = !{!45}

!0 = !DIGlobalVariableExpression(var: !1, expr: !DIExpression())
!1 = distinct !DIGlobalVariable(name: "bodies", scope: !2, file: !3, line: 92, type: !26, isLocal: false, isDefinition: true)
!2 = distinct !DICompileUnit(language: DW_LANG_C11, file: !3, producer: "Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)", isOptimized: false, runtimeVersion: 0, emissionKind: FullDebug, retainedTypes: !4, globals: !9, splitDebugInlining: false, nameTableKind: None)
!3 = !DIFile(filename: "n-body.c", directory: "/home/yxk/test-sgx/SGX-test/n-body", checksumkind: CSK_MD5, checksum: "bae0f852cd8349af0fc983027d6cb646")
!4 = !{!5, !6}
!5 = !DIBasicType(name: "double", size: 64, encoding: DW_ATE_float)
!6 = !DIDerivedType(tag: DW_TAG_typedef, name: "__clock_t", file: !7, line: 156, baseType: !8)
!7 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types.h", directory: "", checksumkind: CSK_MD5, checksum: "d108b5f93a74c50510d7d9bc0ab36df9")
!8 = !DIBasicType(name: "long", size: 64, encoding: DW_ATE_signed)
!9 = !{!0, !10, !16, !21}
!10 = !DIGlobalVariableExpression(var: !11, expr: !DIExpression())
!11 = distinct !DIGlobalVariable(scope: null, file: !3, line: 155, type: !12, isLocal: true, isDefinition: true)
!12 = !DICompositeType(tag: DW_TAG_array_type, baseType: !13, size: 48, elements: !14)
!13 = !DIBasicType(name: "char", size: 8, encoding: DW_ATE_signed_char)
!14 = !{!15}
!15 = !DISubrange(count: 6)
!16 = !DIGlobalVariableExpression(var: !17, expr: !DIExpression())
!17 = distinct !DIGlobalVariable(scope: null, file: !3, line: 159, type: !18, isLocal: true, isDefinition: true)
!18 = !DICompositeType(tag: DW_TAG_array_type, baseType: !13, size: 152, elements: !19)
!19 = !{!20}
!20 = !DISubrange(count: 19)
!21 = !DIGlobalVariableExpression(var: !22, expr: !DIExpression())
!22 = distinct !DIGlobalVariable(scope: null, file: !3, line: 160, type: !23, isLocal: true, isDefinition: true)
!23 = !DICompositeType(tag: DW_TAG_array_type, baseType: !13, size: 384, elements: !24)
!24 = !{!25}
!25 = !DISubrange(count: 48)
!26 = !DICompositeType(tag: DW_TAG_array_type, baseType: !27, size: 2240, elements: !36)
!27 = distinct !DICompositeType(tag: DW_TAG_structure_type, name: "planet", file: !3, line: 18, size: 448, elements: !28)
!28 = !{!29, !30, !31, !32, !33, !34, !35}
!29 = !DIDerivedType(tag: DW_TAG_member, name: "x", scope: !27, file: !3, line: 19, baseType: !5, size: 64)
!30 = !DIDerivedType(tag: DW_TAG_member, name: "y", scope: !27, file: !3, line: 19, baseType: !5, size: 64, offset: 64)
!31 = !DIDerivedType(tag: DW_TAG_member, name: "z", scope: !27, file: !3, line: 19, baseType: !5, size: 64, offset: 128)
!32 = !DIDerivedType(tag: DW_TAG_member, name: "vx", scope: !27, file: !3, line: 20, baseType: !5, size: 64, offset: 192)
!33 = !DIDerivedType(tag: DW_TAG_member, name: "vy", scope: !27, file: !3, line: 20, baseType: !5, size: 64, offset: 256)
!34 = !DIDerivedType(tag: DW_TAG_member, name: "vz", scope: !27, file: !3, line: 20, baseType: !5, size: 64, offset: 320)
!35 = !DIDerivedType(tag: DW_TAG_member, name: "mass", scope: !27, file: !3, line: 21, baseType: !5, size: 64, offset: 384)
!36 = !{!37}
!37 = !DISubrange(count: 5)
!38 = !{i32 7, !"Dwarf Version", i32 5}
!39 = !{i32 2, !"Debug Info Version", i32 3}
!40 = !{i32 1, !"wchar_size", i32 4}
!41 = !{i32 8, !"PIC Level", i32 2}
!42 = !{i32 7, !"PIE Level", i32 2}
!43 = !{i32 7, !"uwtable", i32 2}
!44 = !{i32 7, !"frame-pointer", i32 2}
!45 = !{!"Ubuntu clang version 17.0.6 (++20231209124227+6009708b4367-1~exp1~20231209124336.77)"}
!46 = distinct !DISubprogram(name: "advance", scope: !3, file: !3, line: 25, type: !47, scopeLine: 26, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !51)
!47 = !DISubroutineType(types: !48)
!48 = !{null, !49, !50, !5}
!49 = !DIBasicType(name: "int", size: 32, encoding: DW_ATE_signed)
!50 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !27, size: 64)
!51 = !{}
!52 = !DILocalVariable(name: "nbodies", arg: 1, scope: !46, file: !3, line: 25, type: !49)
!53 = !DILocation(line: 25, column: 18, scope: !46)
!54 = !DILocalVariable(name: "bodies", arg: 2, scope: !46, file: !3, line: 25, type: !50)
!55 = !DILocation(line: 25, column: 43, scope: !46)
!56 = !DILocalVariable(name: "dt", arg: 3, scope: !46, file: !3, line: 25, type: !5)
!57 = !DILocation(line: 25, column: 58, scope: !46)
!58 = !DILocalVariable(name: "i", scope: !46, file: !3, line: 27, type: !49)
!59 = !DILocation(line: 27, column: 7, scope: !46)
!60 = !DILocalVariable(name: "j", scope: !46, file: !3, line: 27, type: !49)
!61 = !DILocation(line: 27, column: 10, scope: !46)
!62 = !DILocation(line: 29, column: 10, scope: !63)
!63 = distinct !DILexicalBlock(scope: !46, file: !3, line: 29, column: 3)
!64 = !DILocation(line: 29, column: 8, scope: !63)
!65 = !DILocation(line: 29, column: 15, scope: !66)
!66 = distinct !DILexicalBlock(scope: !63, file: !3, line: 29, column: 3)
!67 = !DILocation(line: 29, column: 19, scope: !66)
!68 = !DILocation(line: 29, column: 17, scope: !66)
!69 = !DILocation(line: 29, column: 3, scope: !63)
!70 = !DILocalVariable(name: "b", scope: !71, file: !3, line: 30, type: !50)
!71 = distinct !DILexicalBlock(scope: !66, file: !3, line: 29, column: 33)
!72 = !DILocation(line: 30, column: 21, scope: !71)
!73 = !DILocation(line: 30, column: 27, scope: !71)
!74 = !DILocation(line: 30, column: 34, scope: !71)
!75 = !DILocation(line: 31, column: 14, scope: !76)
!76 = distinct !DILexicalBlock(scope: !71, file: !3, line: 31, column: 5)
!77 = !DILocation(line: 31, column: 16, scope: !76)
!78 = !DILocation(line: 31, column: 12, scope: !76)
!79 = !DILocation(line: 31, column: 10, scope: !76)
!80 = !DILocation(line: 31, column: 21, scope: !81)
!81 = distinct !DILexicalBlock(scope: !76, file: !3, line: 31, column: 5)
!82 = !DILocation(line: 31, column: 25, scope: !81)
!83 = !DILocation(line: 31, column: 23, scope: !81)
!84 = !DILocation(line: 31, column: 5, scope: !76)
!85 = !DILocalVariable(name: "b2", scope: !86, file: !3, line: 32, type: !50)
!86 = distinct !DILexicalBlock(scope: !81, file: !3, line: 31, column: 39)
!87 = !DILocation(line: 32, column: 23, scope: !86)
!88 = !DILocation(line: 32, column: 30, scope: !86)
!89 = !DILocation(line: 32, column: 37, scope: !86)
!90 = !DILocalVariable(name: "dx", scope: !86, file: !3, line: 33, type: !5)
!91 = !DILocation(line: 33, column: 14, scope: !86)
!92 = !DILocation(line: 33, column: 19, scope: !86)
!93 = !DILocation(line: 33, column: 22, scope: !86)
!94 = !DILocation(line: 33, column: 26, scope: !86)
!95 = !DILocation(line: 33, column: 30, scope: !86)
!96 = !DILocation(line: 33, column: 24, scope: !86)
!97 = !DILocalVariable(name: "dy", scope: !86, file: !3, line: 34, type: !5)
!98 = !DILocation(line: 34, column: 14, scope: !86)
!99 = !DILocation(line: 34, column: 19, scope: !86)
!100 = !DILocation(line: 34, column: 22, scope: !86)
!101 = !DILocation(line: 34, column: 26, scope: !86)
!102 = !DILocation(line: 34, column: 30, scope: !86)
!103 = !DILocation(line: 34, column: 24, scope: !86)
!104 = !DILocalVariable(name: "dz", scope: !86, file: !3, line: 35, type: !5)
!105 = !DILocation(line: 35, column: 14, scope: !86)
!106 = !DILocation(line: 35, column: 19, scope: !86)
!107 = !DILocation(line: 35, column: 22, scope: !86)
!108 = !DILocation(line: 35, column: 26, scope: !86)
!109 = !DILocation(line: 35, column: 30, scope: !86)
!110 = !DILocation(line: 35, column: 24, scope: !86)
!111 = !DILocalVariable(name: "distance", scope: !86, file: !3, line: 36, type: !5)
!112 = !DILocation(line: 36, column: 14, scope: !86)
!113 = !DILocation(line: 36, column: 30, scope: !86)
!114 = !DILocation(line: 36, column: 35, scope: !86)
!115 = !DILocation(line: 36, column: 40, scope: !86)
!116 = !DILocation(line: 36, column: 45, scope: !86)
!117 = !DILocation(line: 36, column: 43, scope: !86)
!118 = !DILocation(line: 36, column: 38, scope: !86)
!119 = !DILocation(line: 36, column: 50, scope: !86)
!120 = !DILocation(line: 36, column: 55, scope: !86)
!121 = !DILocation(line: 36, column: 48, scope: !86)
!122 = !DILocation(line: 36, column: 25, scope: !86)
!123 = !DILocalVariable(name: "mag", scope: !86, file: !3, line: 37, type: !5)
!124 = !DILocation(line: 37, column: 14, scope: !86)
!125 = !DILocation(line: 37, column: 20, scope: !86)
!126 = !DILocation(line: 37, column: 26, scope: !86)
!127 = !DILocation(line: 37, column: 37, scope: !86)
!128 = !DILocation(line: 37, column: 35, scope: !86)
!129 = !DILocation(line: 37, column: 48, scope: !86)
!130 = !DILocation(line: 37, column: 46, scope: !86)
!131 = !DILocation(line: 37, column: 23, scope: !86)
!132 = !DILocation(line: 38, column: 16, scope: !86)
!133 = !DILocation(line: 38, column: 21, scope: !86)
!134 = !DILocation(line: 38, column: 25, scope: !86)
!135 = !DILocation(line: 38, column: 19, scope: !86)
!136 = !DILocation(line: 38, column: 32, scope: !86)
!137 = !DILocation(line: 38, column: 7, scope: !86)
!138 = !DILocation(line: 38, column: 10, scope: !86)
!139 = !DILocation(line: 38, column: 13, scope: !86)
!140 = !DILocation(line: 39, column: 16, scope: !86)
!141 = !DILocation(line: 39, column: 21, scope: !86)
!142 = !DILocation(line: 39, column: 25, scope: !86)
!143 = !DILocation(line: 39, column: 19, scope: !86)
!144 = !DILocation(line: 39, column: 32, scope: !86)
!145 = !DILocation(line: 39, column: 7, scope: !86)
!146 = !DILocation(line: 39, column: 10, scope: !86)
!147 = !DILocation(line: 39, column: 13, scope: !86)
!148 = !DILocation(line: 40, column: 16, scope: !86)
!149 = !DILocation(line: 40, column: 21, scope: !86)
!150 = !DILocation(line: 40, column: 25, scope: !86)
!151 = !DILocation(line: 40, column: 19, scope: !86)
!152 = !DILocation(line: 40, column: 32, scope: !86)
!153 = !DILocation(line: 40, column: 7, scope: !86)
!154 = !DILocation(line: 40, column: 10, scope: !86)
!155 = !DILocation(line: 40, column: 13, scope: !86)
!156 = !DILocation(line: 41, column: 17, scope: !86)
!157 = !DILocation(line: 41, column: 22, scope: !86)
!158 = !DILocation(line: 41, column: 25, scope: !86)
!159 = !DILocation(line: 41, column: 20, scope: !86)
!160 = !DILocation(line: 41, column: 32, scope: !86)
!161 = !DILocation(line: 41, column: 7, scope: !86)
!162 = !DILocation(line: 41, column: 11, scope: !86)
!163 = !DILocation(line: 41, column: 14, scope: !86)
!164 = !DILocation(line: 42, column: 17, scope: !86)
!165 = !DILocation(line: 42, column: 22, scope: !86)
!166 = !DILocation(line: 42, column: 25, scope: !86)
!167 = !DILocation(line: 42, column: 20, scope: !86)
!168 = !DILocation(line: 42, column: 32, scope: !86)
!169 = !DILocation(line: 42, column: 7, scope: !86)
!170 = !DILocation(line: 42, column: 11, scope: !86)
!171 = !DILocation(line: 42, column: 14, scope: !86)
!172 = !DILocation(line: 43, column: 17, scope: !86)
!173 = !DILocation(line: 43, column: 22, scope: !86)
!174 = !DILocation(line: 43, column: 25, scope: !86)
!175 = !DILocation(line: 43, column: 20, scope: !86)
!176 = !DILocation(line: 43, column: 32, scope: !86)
!177 = !DILocation(line: 43, column: 7, scope: !86)
!178 = !DILocation(line: 43, column: 11, scope: !86)
!179 = !DILocation(line: 43, column: 14, scope: !86)
!180 = !DILocation(line: 44, column: 5, scope: !86)
!181 = !DILocation(line: 31, column: 35, scope: !81)
!182 = !DILocation(line: 31, column: 5, scope: !81)
!183 = distinct !{!183, !84, !184, !185}
!184 = !DILocation(line: 44, column: 5, scope: !76)
!185 = !{!"llvm.loop.mustprogress"}
!186 = !DILocation(line: 45, column: 3, scope: !71)
!187 = !DILocation(line: 29, column: 29, scope: !66)
!188 = !DILocation(line: 29, column: 3, scope: !66)
!189 = distinct !{!189, !69, !190, !185}
!190 = !DILocation(line: 45, column: 3, scope: !63)
!191 = !DILocation(line: 46, column: 10, scope: !192)
!192 = distinct !DILexicalBlock(scope: !46, file: !3, line: 46, column: 3)
!193 = !DILocation(line: 46, column: 8, scope: !192)
!194 = !DILocation(line: 46, column: 15, scope: !195)
!195 = distinct !DILexicalBlock(scope: !192, file: !3, line: 46, column: 3)
!196 = !DILocation(line: 46, column: 19, scope: !195)
!197 = !DILocation(line: 46, column: 17, scope: !195)
!198 = !DILocation(line: 46, column: 3, scope: !192)
!199 = !DILocalVariable(name: "b", scope: !200, file: !3, line: 47, type: !50)
!200 = distinct !DILexicalBlock(scope: !195, file: !3, line: 46, column: 33)
!201 = !DILocation(line: 47, column: 21, scope: !200)
!202 = !DILocation(line: 47, column: 27, scope: !200)
!203 = !DILocation(line: 47, column: 34, scope: !200)
!204 = !DILocation(line: 48, column: 13, scope: !200)
!205 = !DILocation(line: 48, column: 18, scope: !200)
!206 = !DILocation(line: 48, column: 21, scope: !200)
!207 = !DILocation(line: 48, column: 5, scope: !200)
!208 = !DILocation(line: 48, column: 8, scope: !200)
!209 = !DILocation(line: 48, column: 10, scope: !200)
!210 = !DILocation(line: 49, column: 13, scope: !200)
!211 = !DILocation(line: 49, column: 18, scope: !200)
!212 = !DILocation(line: 49, column: 21, scope: !200)
!213 = !DILocation(line: 49, column: 5, scope: !200)
!214 = !DILocation(line: 49, column: 8, scope: !200)
!215 = !DILocation(line: 49, column: 10, scope: !200)
!216 = !DILocation(line: 50, column: 13, scope: !200)
!217 = !DILocation(line: 50, column: 18, scope: !200)
!218 = !DILocation(line: 50, column: 21, scope: !200)
!219 = !DILocation(line: 50, column: 5, scope: !200)
!220 = !DILocation(line: 50, column: 8, scope: !200)
!221 = !DILocation(line: 50, column: 10, scope: !200)
!222 = !DILocation(line: 51, column: 3, scope: !200)
!223 = !DILocation(line: 46, column: 29, scope: !195)
!224 = !DILocation(line: 46, column: 3, scope: !195)
!225 = distinct !{!225, !198, !226, !185}
!226 = !DILocation(line: 51, column: 3, scope: !192)
!227 = !DILocation(line: 52, column: 1, scope: !46)
!228 = distinct !DISubprogram(name: "energy", scope: !3, file: !3, line: 55, type: !229, scopeLine: 56, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !51)
!229 = !DISubroutineType(types: !230)
!230 = !{!5, !49, !50}
!231 = !DILocalVariable(name: "nbodies", arg: 1, scope: !228, file: !3, line: 55, type: !49)
!232 = !DILocation(line: 55, column: 19, scope: !228)
!233 = !DILocalVariable(name: "bodies", arg: 2, scope: !228, file: !3, line: 55, type: !50)
!234 = !DILocation(line: 55, column: 44, scope: !228)
!235 = !DILocalVariable(name: "e", scope: !228, file: !3, line: 57, type: !5)
!236 = !DILocation(line: 57, column: 10, scope: !228)
!237 = !DILocalVariable(name: "i", scope: !228, file: !3, line: 58, type: !49)
!238 = !DILocation(line: 58, column: 7, scope: !228)
!239 = !DILocalVariable(name: "j", scope: !228, file: !3, line: 58, type: !49)
!240 = !DILocation(line: 58, column: 10, scope: !228)
!241 = !DILocation(line: 60, column: 5, scope: !228)
!242 = !DILocation(line: 61, column: 10, scope: !243)
!243 = distinct !DILexicalBlock(scope: !228, file: !3, line: 61, column: 3)
!244 = !DILocation(line: 61, column: 8, scope: !243)
!245 = !DILocation(line: 61, column: 15, scope: !246)
!246 = distinct !DILexicalBlock(scope: !243, file: !3, line: 61, column: 3)
!247 = !DILocation(line: 61, column: 19, scope: !246)
!248 = !DILocation(line: 61, column: 17, scope: !246)
!249 = !DILocation(line: 61, column: 3, scope: !243)
!250 = !DILocalVariable(name: "b", scope: !251, file: !3, line: 62, type: !50)
!251 = distinct !DILexicalBlock(scope: !246, file: !3, line: 61, column: 33)
!252 = !DILocation(line: 62, column: 21, scope: !251)
!253 = !DILocation(line: 62, column: 27, scope: !251)
!254 = !DILocation(line: 62, column: 34, scope: !251)
!255 = !DILocation(line: 63, column: 16, scope: !251)
!256 = !DILocation(line: 63, column: 19, scope: !251)
!257 = !DILocation(line: 63, column: 14, scope: !251)
!258 = !DILocation(line: 63, column: 27, scope: !251)
!259 = !DILocation(line: 63, column: 30, scope: !251)
!260 = !DILocation(line: 63, column: 35, scope: !251)
!261 = !DILocation(line: 63, column: 38, scope: !251)
!262 = !DILocation(line: 63, column: 43, scope: !251)
!263 = !DILocation(line: 63, column: 46, scope: !251)
!264 = !DILocation(line: 63, column: 51, scope: !251)
!265 = !DILocation(line: 63, column: 54, scope: !251)
!266 = !DILocation(line: 63, column: 49, scope: !251)
!267 = !DILocation(line: 63, column: 41, scope: !251)
!268 = !DILocation(line: 63, column: 59, scope: !251)
!269 = !DILocation(line: 63, column: 62, scope: !251)
!270 = !DILocation(line: 63, column: 67, scope: !251)
!271 = !DILocation(line: 63, column: 70, scope: !251)
!272 = !DILocation(line: 63, column: 57, scope: !251)
!273 = !DILocation(line: 63, column: 7, scope: !251)
!274 = !DILocation(line: 64, column: 14, scope: !275)
!275 = distinct !DILexicalBlock(scope: !251, file: !3, line: 64, column: 5)
!276 = !DILocation(line: 64, column: 16, scope: !275)
!277 = !DILocation(line: 64, column: 12, scope: !275)
!278 = !DILocation(line: 64, column: 10, scope: !275)
!279 = !DILocation(line: 64, column: 21, scope: !280)
!280 = distinct !DILexicalBlock(scope: !275, file: !3, line: 64, column: 5)
!281 = !DILocation(line: 64, column: 25, scope: !280)
!282 = !DILocation(line: 64, column: 23, scope: !280)
!283 = !DILocation(line: 64, column: 5, scope: !275)
!284 = !DILocalVariable(name: "b2", scope: !285, file: !3, line: 65, type: !50)
!285 = distinct !DILexicalBlock(scope: !280, file: !3, line: 64, column: 39)
!286 = !DILocation(line: 65, column: 23, scope: !285)
!287 = !DILocation(line: 65, column: 30, scope: !285)
!288 = !DILocation(line: 65, column: 37, scope: !285)
!289 = !DILocalVariable(name: "dx", scope: !285, file: !3, line: 66, type: !5)
!290 = !DILocation(line: 66, column: 14, scope: !285)
!291 = !DILocation(line: 66, column: 19, scope: !285)
!292 = !DILocation(line: 66, column: 22, scope: !285)
!293 = !DILocation(line: 66, column: 26, scope: !285)
!294 = !DILocation(line: 66, column: 30, scope: !285)
!295 = !DILocation(line: 66, column: 24, scope: !285)
!296 = !DILocalVariable(name: "dy", scope: !285, file: !3, line: 67, type: !5)
!297 = !DILocation(line: 67, column: 14, scope: !285)
!298 = !DILocation(line: 67, column: 19, scope: !285)
!299 = !DILocation(line: 67, column: 22, scope: !285)
!300 = !DILocation(line: 67, column: 26, scope: !285)
!301 = !DILocation(line: 67, column: 30, scope: !285)
!302 = !DILocation(line: 67, column: 24, scope: !285)
!303 = !DILocalVariable(name: "dz", scope: !285, file: !3, line: 68, type: !5)
!304 = !DILocation(line: 68, column: 14, scope: !285)
!305 = !DILocation(line: 68, column: 19, scope: !285)
!306 = !DILocation(line: 68, column: 22, scope: !285)
!307 = !DILocation(line: 68, column: 26, scope: !285)
!308 = !DILocation(line: 68, column: 30, scope: !285)
!309 = !DILocation(line: 68, column: 24, scope: !285)
!310 = !DILocalVariable(name: "distance", scope: !285, file: !3, line: 69, type: !5)
!311 = !DILocation(line: 69, column: 14, scope: !285)
!312 = !DILocation(line: 69, column: 30, scope: !285)
!313 = !DILocation(line: 69, column: 35, scope: !285)
!314 = !DILocation(line: 69, column: 40, scope: !285)
!315 = !DILocation(line: 69, column: 45, scope: !285)
!316 = !DILocation(line: 69, column: 43, scope: !285)
!317 = !DILocation(line: 69, column: 38, scope: !285)
!318 = !DILocation(line: 69, column: 50, scope: !285)
!319 = !DILocation(line: 69, column: 55, scope: !285)
!320 = !DILocation(line: 69, column: 48, scope: !285)
!321 = !DILocation(line: 69, column: 25, scope: !285)
!322 = !DILocation(line: 70, column: 13, scope: !285)
!323 = !DILocation(line: 70, column: 16, scope: !285)
!324 = !DILocation(line: 70, column: 23, scope: !285)
!325 = !DILocation(line: 70, column: 27, scope: !285)
!326 = !DILocation(line: 70, column: 21, scope: !285)
!327 = !DILocation(line: 70, column: 35, scope: !285)
!328 = !DILocation(line: 70, column: 33, scope: !285)
!329 = !DILocation(line: 70, column: 9, scope: !285)
!330 = !DILocation(line: 71, column: 5, scope: !285)
!331 = !DILocation(line: 64, column: 35, scope: !280)
!332 = !DILocation(line: 64, column: 5, scope: !280)
!333 = distinct !{!333, !283, !334, !185}
!334 = !DILocation(line: 71, column: 5, scope: !275)
!335 = !DILocation(line: 72, column: 3, scope: !251)
!336 = !DILocation(line: 61, column: 29, scope: !246)
!337 = !DILocation(line: 61, column: 3, scope: !246)
!338 = distinct !{!338, !249, !339, !185}
!339 = !DILocation(line: 72, column: 3, scope: !243)
!340 = !DILocation(line: 73, column: 10, scope: !228)
!341 = !DILocation(line: 73, column: 3, scope: !228)
!342 = distinct !DISubprogram(name: "offset_momentum", scope: !3, file: !3, line: 77, type: !343, scopeLine: 78, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !51)
!343 = !DISubroutineType(types: !344)
!344 = !{null, !49, !50}
!345 = !DILocalVariable(name: "nbodies", arg: 1, scope: !342, file: !3, line: 77, type: !49)
!346 = !DILocation(line: 77, column: 26, scope: !342)
!347 = !DILocalVariable(name: "bodies", arg: 2, scope: !342, file: !3, line: 77, type: !50)
!348 = !DILocation(line: 77, column: 51, scope: !342)
!349 = !DILocalVariable(name: "px", scope: !342, file: !3, line: 79, type: !5)
!350 = !DILocation(line: 79, column: 10, scope: !342)
!351 = !DILocalVariable(name: "py", scope: !342, file: !3, line: 79, type: !5)
!352 = !DILocation(line: 79, column: 20, scope: !342)
!353 = !DILocalVariable(name: "pz", scope: !342, file: !3, line: 79, type: !5)
!354 = !DILocation(line: 79, column: 30, scope: !342)
!355 = !DILocalVariable(name: "i", scope: !342, file: !3, line: 80, type: !49)
!356 = !DILocation(line: 80, column: 7, scope: !342)
!357 = !DILocation(line: 81, column: 10, scope: !358)
!358 = distinct !DILexicalBlock(scope: !342, file: !3, line: 81, column: 3)
!359 = !DILocation(line: 81, column: 8, scope: !358)
!360 = !DILocation(line: 81, column: 15, scope: !361)
!361 = distinct !DILexicalBlock(scope: !358, file: !3, line: 81, column: 3)
!362 = !DILocation(line: 81, column: 19, scope: !361)
!363 = !DILocation(line: 81, column: 17, scope: !361)
!364 = !DILocation(line: 81, column: 3, scope: !358)
!365 = !DILocation(line: 82, column: 11, scope: !366)
!366 = distinct !DILexicalBlock(scope: !361, file: !3, line: 81, column: 33)
!367 = !DILocation(line: 82, column: 18, scope: !366)
!368 = !DILocation(line: 82, column: 21, scope: !366)
!369 = !DILocation(line: 82, column: 26, scope: !366)
!370 = !DILocation(line: 82, column: 33, scope: !366)
!371 = !DILocation(line: 82, column: 36, scope: !366)
!372 = !DILocation(line: 82, column: 8, scope: !366)
!373 = !DILocation(line: 83, column: 11, scope: !366)
!374 = !DILocation(line: 83, column: 18, scope: !366)
!375 = !DILocation(line: 83, column: 21, scope: !366)
!376 = !DILocation(line: 83, column: 26, scope: !366)
!377 = !DILocation(line: 83, column: 33, scope: !366)
!378 = !DILocation(line: 83, column: 36, scope: !366)
!379 = !DILocation(line: 83, column: 8, scope: !366)
!380 = !DILocation(line: 84, column: 11, scope: !366)
!381 = !DILocation(line: 84, column: 18, scope: !366)
!382 = !DILocation(line: 84, column: 21, scope: !366)
!383 = !DILocation(line: 84, column: 26, scope: !366)
!384 = !DILocation(line: 84, column: 33, scope: !366)
!385 = !DILocation(line: 84, column: 36, scope: !366)
!386 = !DILocation(line: 84, column: 8, scope: !366)
!387 = !DILocation(line: 85, column: 3, scope: !366)
!388 = !DILocation(line: 81, column: 29, scope: !361)
!389 = !DILocation(line: 81, column: 3, scope: !361)
!390 = distinct !{!390, !364, !391, !185}
!391 = !DILocation(line: 85, column: 3, scope: !358)
!392 = !DILocation(line: 86, column: 20, scope: !342)
!393 = !DILocation(line: 86, column: 18, scope: !342)
!394 = !DILocation(line: 86, column: 23, scope: !342)
!395 = !DILocation(line: 86, column: 3, scope: !342)
!396 = !DILocation(line: 86, column: 13, scope: !342)
!397 = !DILocation(line: 86, column: 16, scope: !342)
!398 = !DILocation(line: 87, column: 20, scope: !342)
!399 = !DILocation(line: 87, column: 18, scope: !342)
!400 = !DILocation(line: 87, column: 23, scope: !342)
!401 = !DILocation(line: 87, column: 3, scope: !342)
!402 = !DILocation(line: 87, column: 13, scope: !342)
!403 = !DILocation(line: 87, column: 16, scope: !342)
!404 = !DILocation(line: 88, column: 20, scope: !342)
!405 = !DILocation(line: 88, column: 18, scope: !342)
!406 = !DILocation(line: 88, column: 23, scope: !342)
!407 = !DILocation(line: 88, column: 3, scope: !342)
!408 = !DILocation(line: 88, column: 13, scope: !342)
!409 = !DILocation(line: 88, column: 16, scope: !342)
!410 = !DILocation(line: 89, column: 1, scope: !342)
!411 = distinct !DISubprogram(name: "d_n", scope: !3, file: !3, line: 135, type: !412, scopeLine: 136, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !51)
!412 = !DISubroutineType(types: !413)
!413 = !{null, !414, !414}
!414 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !5, size: 64)
!415 = !DILocalVariable(name: "f1", arg: 1, scope: !411, file: !3, line: 135, type: !414)
!416 = !DILocation(line: 135, column: 18, scope: !411)
!417 = !DILocalVariable(name: "f2", arg: 2, scope: !411, file: !3, line: 135, type: !414)
!418 = !DILocation(line: 135, column: 30, scope: !411)
!419 = !DILocalVariable(name: "n", scope: !411, file: !3, line: 138, type: !49)
!420 = !DILocation(line: 138, column: 7, scope: !411)
!421 = !DILocalVariable(name: "i", scope: !411, file: !3, line: 139, type: !49)
!422 = !DILocation(line: 139, column: 7, scope: !411)
!423 = !DILocation(line: 141, column: 3, scope: !411)
!424 = !DILocation(line: 142, column: 9, scope: !411)
!425 = !DILocation(line: 142, column: 4, scope: !411)
!426 = !DILocation(line: 142, column: 7, scope: !411)
!427 = !DILocation(line: 143, column: 10, scope: !428)
!428 = distinct !DILexicalBlock(scope: !411, file: !3, line: 143, column: 3)
!429 = !DILocation(line: 143, column: 8, scope: !428)
!430 = !DILocation(line: 143, column: 15, scope: !431)
!431 = distinct !DILexicalBlock(scope: !428, file: !3, line: 143, column: 3)
!432 = !DILocation(line: 143, column: 20, scope: !431)
!433 = !DILocation(line: 143, column: 17, scope: !431)
!434 = !DILocation(line: 143, column: 3, scope: !428)
!435 = !DILocation(line: 144, column: 5, scope: !431)
!436 = !DILocation(line: 143, column: 24, scope: !431)
!437 = !DILocation(line: 143, column: 3, scope: !431)
!438 = distinct !{!438, !434, !439, !185}
!439 = !DILocation(line: 144, column: 34, scope: !428)
!440 = !DILocation(line: 145, column: 9, scope: !411)
!441 = !DILocation(line: 145, column: 4, scope: !411)
!442 = !DILocation(line: 145, column: 7, scope: !411)
!443 = !DILocation(line: 148, column: 3, scope: !411)
!444 = distinct !DISubprogram(name: "main", scope: !3, file: !3, line: 151, type: !445, scopeLine: 151, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition, unit: !2, retainedNodes: !51)
!445 = !DISubroutineType(types: !446)
!446 = !{!49, !49, !447}
!447 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !448, size: 64)
!448 = !DIDerivedType(tag: DW_TAG_pointer_type, baseType: !13, size: 64)
!449 = !DILocalVariable(name: "argc", arg: 1, scope: !444, file: !3, line: 151, type: !49)
!450 = !DILocation(line: 151, column: 14, scope: !444)
!451 = !DILocalVariable(name: "argv", arg: 2, scope: !444, file: !3, line: 151, type: !447)
!452 = !DILocation(line: 151, column: 28, scope: !444)
!453 = !DILocalVariable(name: "start_time", scope: !444, file: !3, line: 152, type: !454)
!454 = !DIDerivedType(tag: DW_TAG_typedef, name: "clock_t", file: !455, line: 7, baseType: !6)
!455 = !DIFile(filename: "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h", directory: "", checksumkind: CSK_MD5, checksum: "1aade99fd778d1551600c7ca1410b9f1")
!456 = !DILocation(line: 152, column: 11, scope: !444)
!457 = !DILocation(line: 152, column: 24, scope: !444)
!458 = !DILocalVariable(name: "f1", scope: !444, file: !3, line: 153, type: !5)
!459 = !DILocation(line: 153, column: 10, scope: !444)
!460 = !DILocalVariable(name: "f2", scope: !444, file: !3, line: 153, type: !5)
!461 = !DILocation(line: 153, column: 14, scope: !444)
!462 = !DILocation(line: 154, column: 3, scope: !444)
!463 = !DILocation(line: 155, column: 21, scope: !444)
!464 = !DILocation(line: 155, column: 3, scope: !444)
!465 = !DILocation(line: 156, column: 21, scope: !444)
!466 = !DILocation(line: 156, column: 3, scope: !444)
!467 = !DILocalVariable(name: "end_time", scope: !444, file: !3, line: 157, type: !454)
!468 = !DILocation(line: 157, column: 11, scope: !444)
!469 = !DILocation(line: 157, column: 22, scope: !444)
!470 = !DILocalVariable(name: "time_taken_ms", scope: !444, file: !3, line: 158, type: !5)
!471 = !DILocation(line: 158, column: 10, scope: !444)
!472 = !DILocation(line: 158, column: 36, scope: !444)
!473 = !DILocation(line: 158, column: 47, scope: !444)
!474 = !DILocation(line: 158, column: 45, scope: !444)
!475 = !DILocation(line: 158, column: 27, scope: !444)
!476 = !DILocation(line: 158, column: 60, scope: !444)
!477 = !DILocation(line: 158, column: 77, scope: !444)
!478 = !DILocation(line: 159, column: 33, scope: !444)
!479 = !DILocation(line: 159, column: 3, scope: !444)
!480 = !DILocation(line: 160, column: 3, scope: !444)
!481 = !DILocation(line: 161, column: 3, scope: !444)
