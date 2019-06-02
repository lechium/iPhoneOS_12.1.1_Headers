/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLClassifier.h>

@class MLSVMEngine;

@interface MLSupportVectorClassifier : MLClassifier {

	MLSVMEngine* _engine;

}

@property (retain) MLSVMEngine * engine;              //@synthesize engine=_engine - In the implementation block
+(id)featureValueWithObject:(id)arg1 ;
-(void)setEngine:(MLSVMEngine *)arg1 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(MLSVMEngine *)engine;
@end

