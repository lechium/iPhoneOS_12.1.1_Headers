/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REDonatedActionIdentifierProviding;
@class NSString;

@interface _REPerformedActionKey : NSObject {

	id<REDonatedActionIdentifierProviding> _identifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) id<REDonatedActionIdentifierProviding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)keyForBundleIdentifier:(id)arg1 identifier:(id)arg2 ;
-(id<REDonatedActionIdentifierProviding>)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)hash;
-(id)description;
@end

