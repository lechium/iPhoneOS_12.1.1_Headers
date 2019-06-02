/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKParticipant.h>

@interface EKOrganizer : EKParticipant
+(Class)frozenClass;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(BOOL)arg5 ;
-(void)setCurrentUser:(BOOL)arg1 ;
-(BOOL)isCurrentUser;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(BOOL)arg5 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)owner;
@end

