/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXLayouter <NSObject>
@property (assign,nonatomic,__weak) id<SXLayouterDelegate> delegate; 
@required
-(void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 layoutAttributes:(id)arg3 shouldContinue:(BOOL*)arg4;
-(void)setDelegate:(id)arg1;
-(id<SXLayouterDelegate>)delegate;

@end
