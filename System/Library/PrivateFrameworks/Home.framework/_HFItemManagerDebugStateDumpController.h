/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject {

	NSHashTable* _itemManagers;

}

@property (nonatomic,retain) NSHashTable * itemManagers;              //@synthesize itemManagers=_itemManagers - In the implementation block
+(id)sharedInstance;
-(void)registerItemManager:(id)arg1 ;
-(void)setItemManagers:(NSHashTable *)arg1 ;
-(id)_performStateDump;
-(NSHashTable *)itemManagers;
-(id)init;
@end

