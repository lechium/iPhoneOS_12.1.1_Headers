/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPCNNBlurAnalyzer.h>

@class VCPCNNModelEspresso, NSString;

@interface VCPCNNBlurAnalyzerEspresso : VCPCNNBlurAnalyzer {

	VCPCNNModelEspresso* _modelEspresso;
	float* _inputData;
	void* _plan;
	NSString* _resConfig;

}
-(float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 ;
-(int)initModel:(int)arg1 srcWidth:(int)arg2 ;
-(int)computeSharpnessScore:(float*)arg1 textureness:(char*)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(/*^block*/id)arg5 ;
-(id)init;
-(void)dealloc;
@end
