/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKPassPreferencesManager : NSObject
+(id)sharedInstance;
-(void)_removeValueForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_synchronize;
-(CFStringRef)_cfPreferencesKeyForConstant:(id)arg1 passUniqueID:(id)arg2 ;
-(void)removeAllPreferencesForPassWithUniqueID:(id)arg1 ;
-(void)removeAllPreferences;
-(void)_setDouble:(double)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(double)_doubleForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_setDecimalNumber:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(id)_decimalNumberForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3 ;
-(id)_stringForKey:(id)arg1 passUniqueID:(id)arg2 ;
-(id)lowBalanceReminderAmountForPassWithUniqueID:(id)arg1 ;
-(id)lowBalanceReminderCurrencyForPassWithUniqueID:(id)arg1 ;
-(void)setLowBalanceReminderAmount:(id)arg1 currency:(id)arg2 forPassWithUniqueID:(id)arg3 ;
-(double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)arg1 ;
-(void)setCommutePlanRenewalReminderTimeInterval:(double)arg1 forPassWithUniqueID:(id)arg2 ;
@end

