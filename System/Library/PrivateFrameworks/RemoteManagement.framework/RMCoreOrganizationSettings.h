/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>
#import <libobjc.A.dylib/RMUniquelySerializableManagedObject.h>

@class RMCoreUser, NSString;

@interface RMCoreOrganizationSettings : RMUniquedManagedObject <RMUniquelySerializableManagedObject>

@property (nonatomic,retain) RMCoreUser * user; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1 ;
-(void)delete;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)_changeAppLimitsFromAskToWarn:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

