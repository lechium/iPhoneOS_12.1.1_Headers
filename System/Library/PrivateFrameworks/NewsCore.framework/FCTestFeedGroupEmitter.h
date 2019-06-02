/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCSingleTagFeedGroupEmitter.h>

@interface FCTestFeedGroupEmitter : FCSingleTagFeedGroupEmitter {

	BOOL _disableGroupMerging;
	BOOL _disableFiltering;
	BOOL _enableSingletonGroups;

}

@property (assign,nonatomic) BOOL disableGroupMerging;                //@synthesize disableGroupMerging=_disableGroupMerging - In the implementation block
@property (assign,nonatomic) BOOL disableFiltering;                   //@synthesize disableFiltering=_disableFiltering - In the implementation block
@property (assign,nonatomic) BOOL enableSingletonGroups;              //@synthesize enableSingletonGroups=_enableSingletonGroups - In the implementation block
-(id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 ;
-(BOOL)canMergeGroupsUnconditionally;
-(BOOL)emitsSingletonGroups;
-(Class)classForGroupEmittingOperation;
-(BOOL)disableGroupMerging;
-(void)setDisableGroupMerging:(BOOL)arg1 ;
-(BOOL)disableFiltering;
-(void)setDisableFiltering:(BOOL)arg1 ;
-(BOOL)enableSingletonGroups;
-(void)setEnableSingletonGroups:(BOOL)arg1 ;
@end

