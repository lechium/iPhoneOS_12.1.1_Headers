/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCSubscribeToEmailCommand : FCCommand {

	NSString* _DSID;
	NSString* _storeFrontID;
	NSString* _primaryLanguage;

}

@property (nonatomic,copy) NSString * DSID;                         //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * storeFrontID;                 //@synthesize storeFrontID=_storeFrontID - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;              //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)DSID;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(void)setDSID:(NSString *)arg1 ;
-(id)initWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3 ;
-(NSString *)storeFrontID;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)primaryLanguage;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
@end
