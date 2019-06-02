/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCAppWhitelistPayloadBase.h>

@class NSString;

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (nonatomic,readonly) NSString * applicationBundleID; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(BOOL)mustInstallNonInteractively;
-(id)restrictions;
-(NSString *)applicationBundleID;
@end
