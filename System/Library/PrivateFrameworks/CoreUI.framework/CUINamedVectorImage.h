/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedVectorImage : CUINamedLookup

@property (nonatomic,readonly) CGPDFDocumentRef pdfDocument; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) long long displayGamut; 
@property (nonatomic,readonly) long long layoutDirection; 
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
-(double)scale;
-(long long)displayGamut;
-(CGPDFDocumentRef)pdfDocument;
-(long long)layoutDirection;
@end
