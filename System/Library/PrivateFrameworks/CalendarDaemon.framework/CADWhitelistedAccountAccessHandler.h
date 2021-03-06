/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CADAccountAccessHandler.h>

@protocol CADACAccountsProvider;
@interface CADWhitelistedAccountAccessHandler : NSObject <CADAccountAccessHandler> {

	id<CADACAccountsProvider> _accountsProvider;

}

@property (nonatomic,readonly) id<CADACAccountsProvider> accountsProvider;              //@synthesize accountsProvider=_accountsProvider - In the implementation block
-(id<CADACAccountsProvider>)accountsProvider;
-(BOOL)isAccountManaged:(id)arg1 ;
-(BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2 ;
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(id)initWithAccountsProvider:(id)arg1 ;
-(void)reset;
@end

