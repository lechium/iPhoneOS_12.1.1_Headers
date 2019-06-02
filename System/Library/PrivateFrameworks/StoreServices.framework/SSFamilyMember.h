/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSNumber;

@interface SSFamilyMember : NSObject <SSXPCCoding> {

	BOOL _askToBuy;
	NSString* _firstName;
	NSString* _iCloudAccountName;
	NSNumber* _iCloudIdentifier;
	NSNumber* _iTunesIdentifier;
	NSString* _lastName;
	BOOL _me;
	BOOL _sharingPurchases;

}

@property (nonatomic,retain) NSNumber * iTunesIdentifier;                                  //@synthesize iTunesIdentifier=_iTunesIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * iCloudIdentifier;                                  //@synthesize iCloudIdentifier=_iCloudIdentifier - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                          //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * iCloudAccountName;                                 //@synthesize iCloudAccountName=_iCloudAccountName - In the implementation block
@property (assign,getter=isMe,nonatomic) BOOL me;                                          //@synthesize me=_me - In the implementation block
@property (assign,getter=isSharingPurchases,nonatomic) BOOL sharingPurchases;              //@synthesize sharingPurchases=_sharingPurchases - In the implementation block
@property (nonatomic,readonly) BOOL askToBuy;                                              //@synthesize askToBuy=_askToBuy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)isMe;
-(NSNumber *)iTunesIdentifier;
-(void)setITunesIdentifier:(NSNumber *)arg1 ;
-(id)newCacheRepresentation;
-(void)setICloudAccountName:(NSString *)arg1 ;
-(void)setICloudIdentifier:(NSNumber *)arg1 ;
-(void)setMe:(BOOL)arg1 ;
-(BOOL)isSharingPurchases;
-(void)setSharingPurchases:(BOOL)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)askToBuy;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSNumber *)iCloudIdentifier;
-(NSString *)iCloudAccountName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)description;
@end

