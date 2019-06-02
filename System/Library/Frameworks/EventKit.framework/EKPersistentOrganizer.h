/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSString, NSURL;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic,retain) NSString * displayName; 
@property (nonatomic,retain) NSString * emailAddress; 
@property (nonatomic,retain) NSURL * address; 
@property (assign,getter=isCurrentUser,nonatomic) BOOL currentUser; 
+(id)defaultPropertiesToLoad;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
+(id)relations;
-(void)setCurrentUser:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(BOOL)isCurrentUser;
-(int)entityType;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end

