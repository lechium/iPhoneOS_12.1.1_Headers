/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PipelineKit/PIOperation.h>

@interface PIOperationSubclass : PIOperation {

	/*^block*/id _finishBlock;

}

@property (nonatomic,retain,readonly) id finishBlock;              //@synthesize finishBlock=_finishBlock - In the implementation block
-(void)_didFinish;
-(/*^block*/id)executionBlock;
-(void)execute;
-(id)finishBlock;
-(/*^block*/id)cancellationBlock;
-(void)cancel;
-(void)_cleanup;
-(void)cleanup;
@end

