/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASPingItem : ASItem {

	NSArray* _folders;
	NSNumber* _heartBeatInterval;
	NSNumber* _maxFolders;
	NSNumber* _status;

}

@property (nonatomic,retain) NSArray * folders;                         //@synthesize folders=_folders - In the implementation block
@property (nonatomic,retain) NSNumber * heartBeatInterval;              //@synthesize heartBeatInterval=_heartBeatInterval - In the implementation block
@property (nonatomic,retain) NSNumber * maxFolders;                     //@synthesize maxFolders=_maxFolders - In the implementation block
@property (nonatomic,retain) NSNumber * status;                         //@synthesize status=_status - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setHeartBeatInterval:(NSNumber *)arg1 ;
-(void)setMaxFolders:(NSNumber *)arg1 ;
-(void)setFolders:(NSArray *)arg1 ;
-(NSNumber *)heartBeatInterval;
-(NSNumber *)maxFolders;
-(NSArray *)folders;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
@end

