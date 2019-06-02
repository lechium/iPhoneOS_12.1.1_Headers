/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSNumber, NSString, RMOrganization, RMUsageSettings, RMManagementSettings, NSSet;

@interface RMUser : RMUniquedManagedObject

@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSString * altID; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) short role; 
@property (nonatomic,retain) RMOrganization * organization; 
@property (nonatomic,copy) NSString * memberType; 
@property (assign,nonatomic) BOOL isMe; 
@property (assign,nonatomic) BOOL isOrganizer; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,retain) RMUsageSettings * usageSettings; 
@property (nonatomic,retain) RMManagementSettings * managementSettings; 
@property (nonatomic,retain) NSSet * userDevicePairs; 
@property (nonatomic,retain) NSSet * appliedActivations; 
@property (nonatomic,retain) NSSet * askForTimeRequests; 
@property (nonatomic,retain) NSSet * askForTimeResponses; 
+(id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 ;
+(id)fetchRequestForManagedUsersBelongingToOrganizationWithIdentifier:(id)arg1 ;
+(id)fetchRequestForMeInOrganizationWithIdentifier:(id)arg1 ;
+(id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 altID:(id)arg2 ;
+(id)shouldRequestMoreTimeForLocalUserWithManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchRequestForUsersBelongingToOrganizationWithIdentifier:(id)arg1 userDSID:(id)arg2 ;
-(id)computeUniqueIdentifier;
-(void)didChangeValueForKey:(id)arg1 ;
@end

