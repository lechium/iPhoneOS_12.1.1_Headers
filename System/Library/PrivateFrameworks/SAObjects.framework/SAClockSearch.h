/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * alCityId; 
@property (nonatomic,copy) NSString * countryCode; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * unlocalizedCityName; 
@property (nonatomic,copy) NSString * unlocalizedCountryName; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAlCityId:(NSNumber *)arg1 ;
-(NSString *)unlocalizedCityName;
-(void)setUnlocalizedCityName:(NSString *)arg1 ;
-(NSString *)unlocalizedCountryName;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)alCityId;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
@end

