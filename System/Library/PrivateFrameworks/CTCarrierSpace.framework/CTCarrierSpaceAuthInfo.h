/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDate;

@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding> {

	BOOL _shouldCache;
	NSData* _accessToken;
	NSData* _refreshToken;
	NSDate* _expiresAt;

}

@property (nonatomic,retain) NSData * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) NSData * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,retain) NSDate * expiresAt;                 //@synthesize expiresAt=_expiresAt - In the implementation block
@property (assign,nonatomic) BOOL shouldCache;                   //@synthesize shouldCache=_shouldCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)expiresAt;
-(void)setExpiresAt:(NSDate *)arg1 ;
-(void)setShouldCache:(BOOL)arg1 ;
-(void)setRefreshToken:(NSData *)arg1 ;
-(NSData *)refreshToken;
-(NSData *)accessToken;
-(void)setAccessToken:(NSData *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)shouldCache;
@end

