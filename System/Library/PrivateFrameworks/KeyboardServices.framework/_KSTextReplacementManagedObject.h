/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData;

@interface _KSTextReplacementManagedObject : NSManagedObject

@property (nonatomic,retain) NSString * phrase; 
@property (nonatomic,retain) NSString * shortcut; 
@property (nonatomic,retain) NSDate * timestamp; 
@property (nonatomic,retain) NSData * remoteRecordInfo; 
@property (assign,nonatomic) BOOL needsSaveToCloud; 
@property (assign,nonatomic) BOOL wasDeleted; 
@property (nonatomic,retain) NSString * uniqueName; 
@end
