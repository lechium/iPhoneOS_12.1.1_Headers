/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface NMSMediaQuotaManager : NSObject {

	NSDictionary* _groupIterators;
	unsigned long long _quota;
	NSArray* _itemListWithinQuota;
	NSArray* _offPowerItemListWithinQuota;
	unsigned long long _quotaUsage;
	BOOL _hasEvaluated;

}
-(void)_evaluateAddedItemsIfNecessary;
-(id)_containerListForIdentifier:(id)arg1 ;
-(id)initWithGroupIterators:(id)arg1 quota:(unsigned long long)arg2 ;
-(id)groupIteratorForIdentifier:(id)arg1 ;
-(id)itemsWithinQuota;
-(id)itemsWithinQuotaForIdentifier:(id)arg1 ;
-(unsigned long long)sizeOfItemsWithinQuota;
-(unsigned long long)sizeOfItemsWithinQuotaForIdentifier:(id)arg1 ;
-(id)offPowerItemsWithinQuota;
-(id)offPowerItemsWithinQuotaForIdentifier:(id)arg1 ;
-(unsigned long long)sizeOfNominatedItemsForIdentifier:(id)arg1 ;
-(BOOL)isItemGroupWithinQuota:(id)arg1 ;
@end

