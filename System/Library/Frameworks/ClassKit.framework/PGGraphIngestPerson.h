/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSDictionary;


@protocol PGGraphIngestPerson <NSObject>
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * contactID; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isUserCreated; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSDate * anniversaryDate; 
@property (nonatomic,readonly) unsigned long long relationship; 
@property (nonatomic,readonly) NSDictionary * locationsByAddressTypes; 
@required
-(BOOL)isMe;
-(BOOL)isUserCreated;
-(BOOL)isFavorite;
-(unsigned long long)relationship;
-(NSString *)fullName;
-(NSDate *)birthdayDate;
-(NSDictionary *)locationsByAddressTypes;
-(NSDate *)anniversaryDate;
-(NSString *)contactID;
-(NSString *)UUID;

@end

