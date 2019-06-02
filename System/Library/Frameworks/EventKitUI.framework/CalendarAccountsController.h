/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, ACAccountStore;

@interface CalendarAccountsController : NSObject {

	NSMutableDictionary* _lastStoreListingRefreshDates;
	NSObject*<OS_dispatch_queue> _refreshQueue;
	ACAccountStore* _accountStore;

}
+(void)initialize;
+(id)sharedInstance;
+(void)invalidate;
-(int)sortOrderForSourceType:(long long)arg1 ;
-(int)sortOrderForSource:(id)arg1 ;
-(BOOL)sourceIsManaged:(id)arg1 ;
-(id)_accountForAccountIdentifier:(id)arg1 ;
-(id)_displayAccountForAccountWithIdentifier:(id)arg1 ;
-(id)accountTypeTitleForSourceWithExternalId:(id)arg1 ;
-(id)_localizedTitleForLocalSourceUsedAtBeginningOfSentence:(BOOL)arg1 ;
-(id)titleForSource:(id)arg1 forBeginningOfSentence:(BOOL)arg2 ;
-(id)accountTypeTitleForSource:(id)arg1 ;
-(int)sortOrderForStoreType:(int)arg1 ;
-(BOOL)sourceListingNeedsRefresh:(id)arg1 ;
-(void)refreshListingForSource:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)accountStore;
-(void)_localeDidChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

