/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUOrientationNode.h>

@interface NUSourceOrientationNode : NUOrientationNode {

	BOOL _skipOrientation;

}

@property (nonatomic,readonly) BOOL skipOrientation;              //@synthesize skipOrientation=_skipOrientation - In the implementation block
+(long long)originalOrientationToApplyToSource:(id)arg1 skipOrientation:(BOOL)arg2 error:(out id*)arg3 ;
-(id)initWithOrientation:(long long)arg1 input:(id)arg2 ;
-(id)initWithInput:(id)arg1 source:(id)arg2 settings:(id)arg3 orientation:(long long)arg4 ;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(BOOL)skipOrientation;
@end
