/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray;

@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : _UIStatusBarDisplayItemPlacementGroup {

	NSArray* _stablePlacements;
	NSArray* _unstablePlacements;

}

@property (nonatomic,copy,readonly) NSArray * stablePlacements;                //@synthesize stablePlacements=_stablePlacements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unstablePlacements;              //@synthesize unstablePlacements=_unstablePlacements - In the implementation block
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 ;
+(id)activityItemDisplayIdentifier;
-(NSArray *)stablePlacements;
-(NSArray *)unstablePlacements;
@end

