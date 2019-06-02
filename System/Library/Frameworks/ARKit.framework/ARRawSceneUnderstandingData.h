/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSString;

@interface ARRawSceneUnderstandingData : NSObject <ARResultData> {

	double _timestamp;
	CV3DSceneUnderstandingResult* _resultRef;

}

@property (nonatomic,readonly) CV3DSceneUnderstandingResult* resultRef;              //@synthesize resultRef=_resultRef - In the implementation block
@property (nonatomic,readonly) double timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) void* sceneUnderstandingResultRef; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTimestamp:(double)arg1 resultRef:(CV3DSceneUnderstandingResult*)arg2 ;
-(void*)sceneUnderstandingResultRef;
-(CV3DSceneUnderstandingResult*)resultRef;
-(void)dealloc;
-(double)timestamp;
@end

