/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, CLSBusinessCacheEntry;

@interface CLSManagedBusinessItem : NSManagedObject

@property (nonatomic,retain) NSNumber * venueCapacityAsNumber; 
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) unsigned categories; 
@property (assign,nonatomic) long long venueCapacity; 
@property (nonatomic,retain) NSString * businessCategories; 
@property (nonatomic,retain) CLSBusinessCacheEntry * entry; 
+(id)entityName;
-(long long)venueCapacity;
-(void)setVenueCapacity:(long long)arg1 ;
@end

