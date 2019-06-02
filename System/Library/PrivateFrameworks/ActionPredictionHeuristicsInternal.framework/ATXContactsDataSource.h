/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHeuristicDevice;

@interface ATXContactsDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)contactsWithIdentifiers:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithEmail:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithPhone:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_contactsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
