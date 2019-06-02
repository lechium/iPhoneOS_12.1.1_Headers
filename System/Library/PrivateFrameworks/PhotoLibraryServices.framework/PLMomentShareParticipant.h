/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, PLMomentShare;

@interface PLMomentShareParticipant : PLManagedObject

@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (assign,nonatomic) short type; 
@property (assign,nonatomic) short status; 
@property (nonatomic,retain) PLMomentShare * momentShare; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInPhotoLibrary:(id)arg1 ;
+(id)_momentShareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3 ;
+(id)updateOrInsertWithCPLMomentShareParticipant:(id)arg1 inMomentShare:(id)arg2 ;
+(id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)entityName;
-(id)_typeDescription;
-(id)_statusDescription;
-(id)description;
@end

