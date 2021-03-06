/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSURL, NSString, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (nonatomic,copy) NSURL * contactIdentifier; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * mobileSpace; 
@property (nonatomic,copy) NSString * timing; 
+(id)locationTrigger;
+(id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)contactIdentifier;
-(id)encodedClassName;
-(NSString *)mobileSpace;
-(void)setMobileSpace:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(void)setContactIdentifier:(NSURL *)arg1 ;
-(NSString *)timing;
-(void)setTiming:(NSString *)arg1 ;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
@end

