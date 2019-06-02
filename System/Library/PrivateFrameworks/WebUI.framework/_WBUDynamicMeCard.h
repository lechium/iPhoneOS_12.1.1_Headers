/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CNContact;

@interface _WBUDynamicMeCard : NSObject {

	NSMutableArray* _blocksPendingMeCard;
	CNContact* _me;
	BOOL _meCardExists;

}

@property (nonatomic,readonly) BOOL meCardExists;              //@synthesize meCardExists=_meCardExists - In the implementation block
+(id)_contactObjectComponentForString:(id)arg1 ;
-(id)me;
-(id)valueForProperty:(id)arg1 contact:(id)arg2 ;
-(void)performWhenReady:(/*^block*/id)arg1 ;
-(BOOL)meCardExists;
-(void)_addressBookChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
