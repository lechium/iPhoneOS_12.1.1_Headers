/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCSingleTagFeedDescriptor.h>

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor {

	BOOL _disableGroupMerging;
	BOOL _disableFiltering;
	BOOL _enableSingletonGroups;

}

@property (assign,nonatomic) BOOL disableGroupMerging;                //@synthesize disableGroupMerging=_disableGroupMerging - In the implementation block
@property (assign,nonatomic) BOOL disableFiltering;                   //@synthesize disableFiltering=_disableFiltering - In the implementation block
@property (assign,nonatomic) BOOL enableSingletonGroups;              //@synthesize enableSingletonGroups=_enableSingletonGroups - In the implementation block
+(id)descriptorWithContext:(id)arg1 ;
+(id)descriptorWithContext:(id)arg1 tag:(id)arg2 ;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 ;
-(BOOL)disableGroupMerging;
-(void)setDisableGroupMerging:(BOOL)arg1 ;
-(BOOL)disableFiltering;
-(void)setDisableFiltering:(BOOL)arg1 ;
-(BOOL)enableSingletonGroups;
-(void)setEnableSingletonGroups:(BOOL)arg1 ;
@end

