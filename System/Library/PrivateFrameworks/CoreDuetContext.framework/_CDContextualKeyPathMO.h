/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData;

@interface _CDContextualKeyPathMO : NSManagedObject

@property (nonatomic,retain) NSString * key; 
@property (assign,nonatomic) unsigned long long deviceID; 
@property (assign,nonatomic) BOOL isUserCentric; 
@property (assign,nonatomic) BOOL isEphemeral; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
@property (nonatomic,retain) NSData * value; 
@property (nonatomic,retain) NSDate * creationDate; 
+(void)hydrateMO:(id)arg1 fromKeyPath:(id)arg2 andValue:(id)arg3 ;
+(id)materializedKeyPathFrom:(id)arg1 ;
+(id)materializedContextValueFrom:(id)arg1 ;
@end

