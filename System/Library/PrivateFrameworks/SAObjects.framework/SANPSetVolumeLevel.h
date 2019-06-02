/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray, NSNumber;

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL acknowledgedExceedingVolumeLimit; 
@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSNumber * volumeValue; 
+(id)setVolumeLevel;
+(id)setVolumeLevelWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(BOOL)acknowledgedExceedingVolumeLimit;
-(void)setAcknowledgedExceedingVolumeLimit:(BOOL)arg1 ;
-(NSNumber *)volumeValue;
-(void)setVolumeValue:(NSNumber *)arg1 ;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(id)groupIdentifier;
@end
