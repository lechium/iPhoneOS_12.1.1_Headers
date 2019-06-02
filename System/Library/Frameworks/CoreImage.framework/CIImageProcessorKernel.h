/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageProcessorKernel : NSObject
+(BOOL)canReduceOutputChannels;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)synchronizeInputs;
+(BOOL)allowPartialOutputRegion;
+(BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1 ;
+(BOOL)allowSRGBTranferFuntionOnOutput;
+(id)applyWithExtent:(CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id*)arg4 ;
+(BOOL)skipFormatChecks;
+(BOOL)outputIsOpaque;
+(unsigned long long)_digestForArgs:(id)arg1 ;
+(int)outputFormat;
@end

