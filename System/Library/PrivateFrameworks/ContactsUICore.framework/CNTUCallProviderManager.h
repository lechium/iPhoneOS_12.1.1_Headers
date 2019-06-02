/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNTUCallProviderManager.h>

@protocol CNTUCallProviderManager <NSObject>
@required
-(id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg1;
-(id)thirdPartyCallProvidersForActionType:(id)arg1;
-(id)thirdPartyCallProviderWithBundleIdentifier:(id)arg1;

@end


@class TUCallProviderManager, NSString;

@interface CNTUCallProviderManager : NSObject <CNTUCallProviderManager> {

	TUCallProviderManager* _callProviderManager;

}

@property (nonatomic,copy) TUCallProviderManager * callProviderManager;              //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TUCallProviderManager *)callProviderManager;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(id)providerManagerQueue;
-(id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg1 ;
-(id)thirdPartyCallProvidersForActionType:(id)arg1 ;
-(id)thirdPartyCallProviderWithBundleIdentifier:(id)arg1 ;
-(id)init;
@end
