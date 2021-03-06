/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderClient.h>

@class NSArray;

@interface NUVideoRenderClient : NURenderClient {

	NSArray* _pipelineFilters;

}

@property (nonatomic,copy) NSArray * pipelineFilters;              //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
-(void)submitPropertiesRequestForComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(NSArray *)pipelineFilters;
@end

