/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAuthenticationResponse.h>

@class NSDictionary, NSArray, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {

	NSDictionary* _icloud;

}

@property (nonatomic,readonly) NSArray * provisionedDataclasses; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * appleID; 
@property (nonatomic,readonly) NSArray * appleIDAliases; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSNumber * primaryEmailVerified; 
@property (nonatomic,readonly) NSString * iCloudAuthToken; 
@property (nonatomic,readonly) NSString * fmipAuthToken; 
@property (nonatomic,readonly) NSString * fmipSiriToken; 
@property (nonatomic,readonly) NSDictionary * regionInfo; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@property (getter=isNotesMigrated,nonatomic,readonly) BOOL notesMigrated; 
@property (getter=isSandboxAccount,nonatomic,readonly) BOOL sandboxAccount; 
@property (getter=isCloudDocsMigrated,nonatomic,readonly) BOOL cloudDocsMigrated; 
@property (getter=hasOptionalTerms,nonatomic,readonly) BOOL optionalTerms; 
-(NSString *)fmipAuthToken;
-(NSString *)fmipSiriToken;
-(BOOL)isNotesMigrated;
-(BOOL)isCloudDocsMigrated;
-(BOOL)hasOptionalTerms;
-(NSString *)appleID;
-(BOOL)isSandboxAccount;
-(NSArray *)provisionedDataclasses;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)primaryEmail;
-(NSString *)iCloudAuthToken;
-(NSDictionary *)dataclassProperties;
-(BOOL)isManagedAppleID;
-(NSDictionary *)regionInfo;
-(NSNumber *)primaryEmailVerified;
-(NSArray *)appleIDAliases;
-(id)initWithDictionary:(id)arg1 ;
@end

