/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableArray;

@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer {

	NSMutableArray* _results;

}
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(id)publicResults;
-(id)convertQuickTimeVideoOrientationToUIOrientation:(long long)arg1 ;
-(id)init;
@end

