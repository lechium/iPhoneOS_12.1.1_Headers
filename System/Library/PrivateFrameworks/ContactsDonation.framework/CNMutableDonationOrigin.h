/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsDonation/ContactsDonation-Structs.h>
#import <ContactsDonation/CNDonationOrigin.h>

@class NSString, NSDate;

@interface CNMutableDonationOrigin : CNDonationOrigin

@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * donationIdentifier; 
@property (nonatomic,copy) NSString * clusterIdentifier; 
@property (nonatomic,copy) NSDate * donationDate; 
@property (nonatomic,copy) NSDate * expirationDate; 
+(id)new;
-(void)setDonationIdentifier:(NSString *)arg1 ;
-(void)setClusterIdentifier:(NSString *)arg1 ;
-(void)setDonationDate:(NSDate *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

