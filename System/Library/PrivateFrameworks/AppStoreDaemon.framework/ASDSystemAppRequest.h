/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDPersistentRequest.h>

@class NSString, NSNumber;

@interface ASDSystemAppRequest : ASDPersistentRequest {

	BOOL _userInitiated;
	NSString* _bundleID;
	NSNumber* _storeItemID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemID;                                   //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated;              //@synthesize userInitiated=_userInitiated - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(NSNumber *)storeItemID;
-(id)initWithBundleID:(id)arg1 ;
-(BOOL)isUserInitiated;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setUserInitiated:(BOOL)arg1 ;
-(NSString *)bundleID;
@end
