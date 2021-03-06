/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSMailDefaultService.h>

@interface MSAccounts : MSMailDefaultService
+(BOOL)canSendMailSourceAccountManagement:(int)arg1 ;
+(void)accountValuesForKeys:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)accountValuesForKeys:(id)arg1 launchMobileMail:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(BOOL)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(BOOL)arg3 error:(id*)arg4 ;
+(id)attachmentCapabilities;
+(BOOL)canSendMail;
+(void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
+(id)customSignatureForSendingEmailAddress:(id)arg1 ;
+(BOOL)hasActiveAccounts;
+(BOOL)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(/*^block*/id)arg4 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

