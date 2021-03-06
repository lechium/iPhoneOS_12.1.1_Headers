/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccount, ACAccountStore, NSString, SUScriptAppleAccountType, SUScriptAppleAccountCredential;

@interface SUScriptAppleAccount : SUScriptObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;

}

@property (readonly) ACAccount * nativeAccount; 
@property (readonly) ACAccountStore * nativeAccountStore; 
@property (readonly) NSString * accountDescription; 
@property (readonly) SUScriptAppleAccountType * accountType; 
@property (readonly) SUScriptAppleAccountCredential * credential; 
@property (readonly) NSString * dsID; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * username; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(SUScriptAppleAccountCredential *)credential;
-(id)attributeKeys;
-(NSString *)dsID;
-(id)initWithACAccount:(id)arg1 accountStore:(id)arg2 ;
-(ACAccountStore *)nativeAccountStore;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)accountDescription;
-(ACAccount *)nativeAccount;
-(SUScriptAppleAccountType *)accountType;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)username;
-(void)reload;
@end

