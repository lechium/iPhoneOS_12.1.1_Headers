/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentSharee : EKPersistentObject
+(id)defaultPropertiesToLoad;
+(id)relations;
-(void)setAddress:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)setExternalID:(id)arg1 ;
-(void)setShareeStatus:(int)arg1 ;
-(id)externalID;
-(int)shareeStatus;
-(int)shareeAccessLevel;
-(void)setShareeAccessLevel:(int)arg1 ;
-(id)firstName;
-(id)lastName;
-(id)address;
-(int)entityType;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)UUID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)displayName;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end
